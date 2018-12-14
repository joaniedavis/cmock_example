#include <stdint.h>
#include <stdbool.h>

//! \param width The width of the rectangle
//! \param width The width of the rectangle
void rectangle_init(uint16_t length, uint16_t width);

//! \returns the area of the rectangle
uint16_t rectangle_get_area(void);

//! \returns the perimeter of the rectangle
uint16_t rectangle_get_perimeter(void);

//! \returns True if length is equal to width, false otherwise
bool rectangle_is_square(void);


void rectangle_set_width(uint16_t new_width);
void rectangle_set_length(uint16_t new_length);