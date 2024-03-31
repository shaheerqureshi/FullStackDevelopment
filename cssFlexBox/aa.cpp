#include <iostream>

class Logger {
private:
    Logger() {}
    static Logger* instance;

public:
    // get the instance of Logger
    static Logger* getInstance() {
        if (instance == nullptr) {
            instance = new Logger();
        }
        return instance;
    }
    void log(const std::string& message) {
        std::cout << "Logging: " << message << std::endl;
    }
};

// Initializing static instance to nullptr
Logger* Logger::instance = nullptr;


int main() {
    // Access instance of logger using pointer
    Logger* logger = Logger::getInstance();
    logger->log("Hello Assignment 1, This is a log message");

    return 0;
}