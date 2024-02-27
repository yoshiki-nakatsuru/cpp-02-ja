#include "tests.hpp"

#include <gtest/gtest.h>
#include <string>

#include "car.hpp"

class Logger {
public:
    Logger() { was_created = true; }
    inline static bool was_created = false;

    void logMessage(const std::string& message);
};

TEST(Test, Logger) {    
    Car car("Toyota", "Camry", 2003, 40'000);
    ASSERT_EQ(Logger::was_created, false);
    car.setPrice(35'999);
    ASSERT_EQ(Logger::was_created, true);
}
