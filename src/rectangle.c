#include "rectangle.h"
#include <stdio.h>

typedef struct rectangle
{
    uint16_t r_length;
    uint16_t r_width;
} rectangle_t;

static rectangle_t rect;

void rectangle_init(uint16_t length, uint16_t width)
{
    rect.r_length = length;
    rect.r_width = width;
}

uint16_t rectangle_get_area(void)
{
    return rect.r_width * rect.r_length;
}

uint16_t rectangle_get_perimeter(void)
{
    return (rect.r_length + rect.r_width) * 2;
}

bool rectangle_is_square(void)
{
    return (rect.r_length == rect.r_width);
}

void rectangle_set_width(uint16_t new_width)
{
    rect.r_width = new_width;
}

void rectangle_set_length(uint16_t new_length)
{
    rect.r_length = new_length;
}
