#pragma once
#include <stdint.h>

typedef enum State_e {OFF = 0, ON} State;

void gpio_clock_enable(uint32_t port);