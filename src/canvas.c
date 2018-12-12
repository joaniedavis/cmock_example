#include "rectangle.h"

void canvas_init(uint16_t r_height, uint16_t r_width)
{
    rectangle_init(r_height, r_width);
}

void canvas_calc_rect(void)
{
    rectangle_get_area();
    rectangle_get_perimeter();
    rectangle_is_square();
}