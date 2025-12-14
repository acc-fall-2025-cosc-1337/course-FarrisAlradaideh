#ifndef COME_OUT_PHASE_H
#define COME_OUT_PHASE_H

#include "Phase.h"

class ComeOutPhase : public Phase
{
public:
    RollOutcome get_outcome(Roll* roll) override;
};

#endif

