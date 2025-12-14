#ifndef POINT_PHASE_H
#define POINT_PHASE_H

#include "Phase.h"

class PointPhase : public Phase
{
public:
    PointPhase(int p);
    RollOutcome get_outcome(Roll* roll) override;

private:
    int point;
};

#endif
