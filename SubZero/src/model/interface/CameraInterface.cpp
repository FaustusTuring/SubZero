/*
 * CameraInterface.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: ahsueh1996
 */

#include "CameraInterface.h"

/* ==========================================================================
 * 				INTERACTING WITH DATA COMING IN (FROM Camera)
 * ==========================================================================
 * This interface class will be automatically polling and managing
 * the polling process privately within the interface at pollFrequency
 * using the functions below.
 */

/**
 * Poll raw data from the camera.
 * @return	data polled
 */

void CameraInterface::poll() {
    cv::Mat raw;
    //Older version of OpenCV (tested on Alb's laptop setting)
    // IplImage* raw = cvQueryFrame(this->camStream);
    // cv::cvarrToMat(raw, true, true, 0);

    //New version of OpenCV (not yet tested)
    camStream.read(raw);
    Data* decoded = this->decode(raw);
    this->storeToBuffer(decoded);
}

/**
 * Decode the data.
 * @param	data	data to be decoded
 * @return	decoded data in a ImgData format
 */
ImgData* CameraInterface::decode(cv::Mat data) {
    ImgData* decoded = new ImgData("raw", data);
    return decoded;
}

/* ==========================================================================
 * 								GETTERS AND SETTERS
 * ==========================================================================
 */

CameraPosition CameraInterface::getPosition(){
    return this->position;
}

/* ==========================================================================
 * 							CONSTRUCTOR AND DESTRUCTOR
 * ==========================================================================
 */


CameraInterface::CameraInterface(int bufferSize, int pollFrequency, CameraPosition position) : HwInterface(bufferSize, pollFrequency) {
    this->position = position;
    this->camStream.open(this->position);
    //this->camStream = new cv::VideoCapture(this->position);
    // this->camStream = cvCaptureFromCAM(this->position);
}

void CameraInterface::init(){
    // thread for reading and polling camera input
   readThreads.push_back(std::thread(&CameraInterface::in, this));
}

CameraInterface::~CameraInterface() {
    camStream.release();
}
