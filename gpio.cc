#include "gpio.hpp"


#include <stdio.h>
#include <gpiod.hpp>
#include <unistd.h>

void setGPIO(int32_t lineOffset, bool enable) {
    gpiod::chip chip("gpiochip4");

    auto line = chip.get_line(lineOffset); 
    line.request({"example", gpiod::line_request::DIRECTION_OUTPUT, 0}, 0);  

    if (enable) {
        line.set_value(1);
    } else {
        line.set_value(0);
    }

    line.release();
}