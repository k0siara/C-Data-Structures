#ifndef LOGGER_H_
#define LOGGER_H_

#include <stdio.h>
#include <stdarg.h>

enum { DEBUG, INFO, WARN, ERROR };

#define debug(...) _log(DEBUG, __FILE__, __LINE__, __VA_ARGS__)
#define info(...) _log(INFO, __FILE__, __LINE__, __VA_ARGS__)
#define warn(...) _log(WARN, __FILE__, __LINE__, __VA_ARGS__)
#define error(...) _log(ERROR, __FILE__, __LINE__, __VA_ARGS__)

void _log(const int level, const char *file, const int line, const char *buff, ...);

#endif /* LOGGER_H_ */
