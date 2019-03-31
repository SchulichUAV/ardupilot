#pragma once
#include "stdint.h"

#define SENSORS_PER_WING 4

struct wingsensors_t
{
    float left[SENSORS_PER_WING];
    float right[SENSORS_PER_WING];
};