#pragma once

#ifndef LOGGER_H
#define LOGGER_H

// Добавьте сюда заголовочные файлы для предварительной компиляции
#include <string>
#include <fstream>
#include <iostream>

class Logger {
public:
    Logger(const std::string& filename);
    bool is_active();
    void operator<<(const std::string& message);
    void log(const std::string& message);
    ~Logger();

private:
    std::ofstream logFile;
};

#endif //LOGGER_H