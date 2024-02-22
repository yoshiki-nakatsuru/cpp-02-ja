#include "tests.hpp"

#include <gtest/gtest.h>
#include <string>

#include "rectangle.h"

TEST(Test, Rectangle) {    
    {
        Rectangle rect { .width = 0.f, .height = 0.f };
        ASSERT_EQ(rectangle_area(rect), 0.f);
    }
    {
        Rectangle rect { .width = 2.f, .height = 5.f };
        ASSERT_EQ(rectangle_area(rect), 10.f);
    }
    {
        Rectangle rect { .width = -2.f, .height = 5.f };
        ASSERT_EQ(rectangle_area(rect), -10.f);
    }
}
