#include "unity.h"

#include "shape_container.h"
#include "mock_rectangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_shape_container_init(void)
{
    // Set up known values
    uint16_t length = 4;
    uint16_t width = 3;

    //State, in order of call, what expectations we have, and the expected values to be returned, if any
    rectangle_init_Expect(length, width);

    //Run Actual Function Under Test
    shape_container_init(length, width);

    //We can still verify whatever things we normally would after
}

void test_shape_container_calc_rect_is_square(void)
{
    // Set up known values
    uint16_t length = 4;
    uint16_t width = 4;
    uint16_t x_area = length * width;
    uint16_t x_perimeter = length + width + length + width;
    bool x_is_square = true;

    //State, in order of call, what expectations we have, and the expected values to be returned, if any
    rectangle_init_Expect(length, width);
    rectangle_get_area_ExpectAndReturn(x_area);
    rectangle_get_perimeter_ExpectAndReturn(x_perimeter);
    rectangle_is_square_ExpectAndReturn(x_is_square);

    //Run Actual Function Under Test
    bool is_square = shape_container_calc_rect(length, width);

    //We can still verify whatever things we normally would after 
    TEST_ASSERT_EQUAL(x_is_square, is_square);
}

void test_shape_container_calc_rect_is_not_square(void)
{
    // Set up known values
    uint16_t length = 4;
    uint16_t width = 3;
    uint16_t x_area = length * width;
    uint16_t x_perimeter = length + width + length + width;
    bool x_is_square = false;

    //State, in order of call, what expectations we have, and the expected values to be returned, if any
    rectangle_init_Expect(length, width);
    rectangle_get_area_ExpectAndReturn(x_area);
    rectangle_get_perimeter_ExpectAndReturn(x_perimeter);
    rectangle_is_square_ExpectAndReturn(x_is_square);

    //Run Actual Function Under Test
    bool is_square = shape_container_calc_rect(length, width);

    //We can still verify whatever things we normally would after 
    TEST_ASSERT_EQUAL(x_is_square, is_square);
}