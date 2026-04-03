#include <stdio.h>
#include <stdarg.h>
#include "project/core/log.h"

static void log_base(const char *level, const char *fmt, va_list args)
{
    printf("[%s] ", level);
    vprintf(fmt, args);
    printf("\n");
}

void log_info(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_base("INFO", fmt, args);
    va_end(args);
}

void log_error(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_base("ERROR", fmt, args);
    va_end(args);
}
