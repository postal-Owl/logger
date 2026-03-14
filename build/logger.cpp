// logger.cpp : Определяет функции для статической библиотеки.
//  /\__/\
// (=^x^=)
//  (")(")_/
//

#include "logger.h"


Logger::Logger(const std::string& filename) : logFile(filename) // открываем файл при создании
{
    if (!logFile) {
        std::cerr << "Не удалось открыть файл для логирования: " << filename << std::endl;
    }
}

bool Logger::is_active() {
    if (logFile)
        return true;
    else
        return false;
}

// Методы для записи лога
void Logger::operator<<(const std::string& message) {
    // Выводим в файл
    if (logFile) {
        logFile << "[LOG] " << message << std::endl;
    }
}

void Logger::log(const std::string& message) {
    // Выводим в файл
    if (logFile) {
        logFile << "[LOG] " << message << std::endl;
    }
}

Logger::~Logger() {
    if (logFile) {
        logFile.close();
    }
}
