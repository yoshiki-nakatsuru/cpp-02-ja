// コードを入力してください
#pragma once

#include <string>
#include <vector>

class Logger{
public:
    void allLogMessage() const;
    void logMessage(std::string log);
private:
    std::vector<std::string> logs;
};