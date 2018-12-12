#include "unity.h"

#include "canvas.h"
#include "mock_rectangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_rectangle_get_area(void)
{
    //We start by saying what our expectations are, and what we want to return
    rectangle_init_Expect(3, 4);

    //Run Actual Function Under Test
    canvas_init(3, 4);

    //We can still verify whatever things we normally would after

}