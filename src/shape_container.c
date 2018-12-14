#include "rectangle.h"

void shape_container_init(uint16_t r_length, uint16_t r_width)
{
    rectangle_init(r_length, r_width);
}

bool shape_container_calc_rect(uint16_t r_length, uint16_t r_width)
{
    rectangle_init(r_length, r_width);
    rectangle_get_area();
    rectangle_get_perimeter();
    return rectangle_is_square();
}