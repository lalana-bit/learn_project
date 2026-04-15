#include "logger.h"

#include <stdarg.h>

static LogLevel g_min_level = LOG_INFO;

void logger_init(LogLevel level) {
    g_min_level = level;
}

static void log_message(LogLevel level, const char *format, va_list args) {
    if (level < g_min_level) {
        return;
    }

    const char *level_str;
    switch (level) {
        case LOG_DEBUG:
            level_str = "DEBUG";
            break;
        case LOG_INFO:
            level_str = "INFO";
            break;
        case LOG_WARNING:
            level_str = "WARNING";
            break;
        case LOG_ERROR:
            level_str = "ERROR";
            break;
        default:
            level_str = "UNKNOWN";
            break;
    }

    printf("[%s] ", level_str);
    vprintf(format, args);
    printf("\n");
}

void log_debug(const char *format, ...) {
    va_list args;
    va_start(args, format);
    log_message(LOG_DEBUG, format, args);
    va_end(args);
}

void log_info(const char *format, ...) {
    va_list args;
    va_start(args, format);
    log_message(LOG_INFO, format, args);
    va_end(args);
}

void log_warning(const char *format, ...) {
    va_list args;
    va_start(args, format);
    log_message(LOG_WARNING, format, args);
    va_end(args);
}

void log_error(const char *format, ...) {
    va_list args;
    va_start(args, format);
    log_message(LOG_ERROR, format, args);
    va_end(args);
}
