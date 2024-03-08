// コードを入力してください
#include "logger.hpp"

#include <iostream>

void Logger::allLogMessage() const {
    for(std::string log : logs){
        std::cout << log << std::endl;
    }
}

void Logger::logMessage(std::string log){
    std::cout << log << std::endl;
    logs.push_back(log);
}