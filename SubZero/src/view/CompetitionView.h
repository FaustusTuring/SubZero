#ifndef COMPETITIONVIEW_H
#define COMPETITIONVIEW_H

#include "View.h"

class CompetitionView : public View {
public:
    CompetitionView();
    CompetitionView(Controller* controller);

    virtual void initialize();

public slots:
    virtual void update(int ID);
};

#endif // COMPETITIONVIEW_H