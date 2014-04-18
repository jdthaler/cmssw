#ifndef BasicSingleTrajectoryState_H
#define BasicSingleTrajectoryState_H

#include "TrackingTools/TrajectoryState/interface/BasicTrajectoryState.h"
#include<cassert>

/** Concrete implementation for the state of one trajectory on a surface.
 */

class BasicSingleTrajectoryState  GCC11_FINAL : public BasicTrajectoryState {
public:
  BasicSingleTrajectoryState() :  BasicTrajectoryState(){}
#ifndef CMS_NOCXX11
  template<typename... Args>
    BasicSingleTrajectoryState(Args && ...args) : BasicTrajectoryState(std::forward<Args>(args)...){/* assert(weight()>0);*/}
#endif
  BasicSingleTrajectoryState* clone() const {
    return new BasicSingleTrajectoryState(*this);
  }

};

#endif
