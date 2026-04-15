#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

/* Log levels */
typedef enum {
    LOG_DEBUG,
    LOG_INFO,
    LOG_WARNING,
    LOG_ERROR
} LogLevel;

/* Initialize logger */
void logger_init(LogLevel level);

/* Log functions */
void log_debug(const char *format, ...);
void log_info(const char *format, ...);
void log_warning(const char *format, ...);
void log_error(const char *format, ...);

#endif
