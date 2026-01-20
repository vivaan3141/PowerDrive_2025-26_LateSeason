
#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;
// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup intake({-9, 21});
inline pros::Motor scorer(17);


// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');