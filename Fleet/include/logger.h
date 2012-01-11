#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

enum logLevel : unsigned short int {
    INFO = 0,
    WARNING,
    ERROR,
    FATAL
};

const char *logLevelString[] = { "INFO", "WARNING", "ERROR", "FATAL" };

namespace Logger {
    std::ofstream loggerOutputFile;
    
    bool initialize(std::string fileName)
    {
        loggerOutputFile.open(fileName.c_str(), std::ios::app);
        return loggerOutputFile.is_open();
    }

    void terminate() { loggerOutputFile.close(); }
}

#define LOG( level, message ) \
    Logger::loggerOutputFile << "[" << logLevelString[level] << "] " << message << "; in file: " << __FILE__ << " (" << __LINE__ << ")" << std::endl;

#define LOG_INIT( file ) \
    Logger::initialize(file);

#define LOG_TERMINATE \
    Logger::terminate();


#endif