#include <time.h>
#include "logger.h"

static const char *level_names[] = {
  "DEBUG", "INFO", "WARN", "ERROR"
};

static const char *level_colors[] = {
  "\x1b[36m", "\x1b[32m", "\x1b[33m", "\x1b[31m"
};

void _log(const int level, const char *file, const int line, const char *format, ...) {
	va_list args;
	va_start(args, format);

	time_t t = time(NULL);
	struct tm *lt = localtime(&t);

	char buff[16];
	buff[strftime(buff, sizeof(buff), "%H:%M:%S", lt)] = '\0';


	fprintf(
	      stderr, "%s %s%-5s\x1b[0m \x1b[90m%s:%d:\x1b[0m ",
	      buff, level_colors[level], level_names[level], file, line);
	vfprintf(stderr, format, args);
	printf("\n");

	va_end(args);
}


