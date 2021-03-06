#ifndef SIMENV_H
#define SIMENV_H


/**
 * Sets up simulation environment in a manner
 * similar to SubSub (except using the blender
 * models in the q resource file attached to this
 * project)
 *
 * Set up the meshes using the blend uobjects (Qmesh::setSource(  QURL()      ))
 * Set up their positions
 *
 * Note all blender files should be saved as.obj
 */

#include <QEntity>
#include <QMesh>
#include <QPhongMaterial>
#include <QScaleTransform>
#include <QTranslateTransform>
#include <QRotateTransform>
#include <QTransform>
#include <QTexture3D>
#include <QTextureImage>


class SimEnv
{
public:
    SimEnv();
    void initialize(Qt3D::QEntity *rootEntity);


private:

    Qt3D::QEntity *yellowBuoyEntity;
    Qt3D::QEntity *blueBuoyEntity;
    Qt3D::QEntity *redBuoyEntity;
    Qt3D::QEntity *greenBuoyEntity;
    Qt3D::QEntity *setDateEntity;
    Qt3D::QEntity *timePortalEntity;
    Qt3D::QEntity *guideMarkerEntity;

    Qt3D::QMesh *yellowBuoyBody;
    Qt3D::QMesh *blueBuoyBody;
    Qt3D::QMesh *redBuoyBody;
    Qt3D::QMesh *greenBuoyBody;
    Qt3D::QMesh *setDateBody;
    Qt3D::QMesh *timePortalBody;
    Qt3D::QMesh *guideMarkerBody;

    Qt3D::QPhongMaterial *yellowBuoyMaterial;
    Qt3D::QPhongMaterial *blueBuoyMaterial;
    Qt3D::QPhongMaterial *redBuoyMaterial;
    Qt3D::QPhongMaterial *greenBuoyMaterial;
    Qt3D::QPhongMaterial *setDateMaterial;
    Qt3D::QPhongMaterial *timePortalMaterial;
    Qt3D::QPhongMaterial *guideMarkerMaterial;

    Qt3D::QTranslateTransform *yellowBuoyTranslation;
    Qt3D::QTranslateTransform *blueBuoyTranslation;
    Qt3D::QTranslateTransform *redBuoyTranslation;
    Qt3D::QTranslateTransform *greenBuoyTranslation;
    Qt3D::QTranslateTransform *setDateTranslation;
    Qt3D::QTranslateTransform *timePortalTranslation;
    Qt3D::QTranslateTransform *guideMarkerTranslation;

    Qt3D::QRotateTransform *yellowBuoyRotation;
    Qt3D::QRotateTransform *blueBuoyRotation;
    Qt3D::QRotateTransform *redBuoyRotation;
    Qt3D::QRotateTransform *greenBuoyRotation;
    Qt3D::QRotateTransform *setDateRotation;
    Qt3D::QRotateTransform *timePortalRotation;
    Qt3D::QRotateTransform *guideMarkerRotation;

    Qt3D::QTransform *yellowBuoyTransform;
    Qt3D::QTransform *blueBuoyTransform;
    Qt3D::QTransform *redBuoyTransform;
    Qt3D::QTransform *greenBuoyTransform;
    Qt3D::QTransform *setDateTransform;
    Qt3D::QTransform *timePortalTransform;
    Qt3D::QTransform *guideMarkerTransform;


};

#endif // SIMENV_H
