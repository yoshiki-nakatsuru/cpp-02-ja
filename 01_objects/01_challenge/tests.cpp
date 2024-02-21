#include "tests.hpp"

#include <gtest/gtest.h>
#include <string>

#include "traffic_light.h"

TEST(Test, TrafficLight) {    
    ASSERT_EQ(get_action(TrafficLight::red), "Stop");
    ASSERT_EQ(get_action(TrafficLight::yellow), "Caution");
    ASSERT_EQ(get_action(TrafficLight::green), "Go");
}
