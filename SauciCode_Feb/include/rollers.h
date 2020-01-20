#ifndef _ROLLERS_H_
#define _ROLLERS_H_
using namespace vex;

namespace rollers {
  extern motor l, r;

  void reset();
  
  void spin(double vel);

  int op();
}

#endif