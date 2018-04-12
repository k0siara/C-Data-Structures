#include <time.h>
#include "logger.h"

static const char *level_names[] = {
  "DEBUG", "INFO", "WARN", "ERROR"
};

static const char *level_colors[] = {
  "\x1b[36m", "\x1b[32m", "\x1b[33m", "\x1b[31m"
};

void _log(const int level, const char *file, const int line, const char *buff, ...) {
	va_list args;
	va_start(args, buff);

	time_t t = time(NULL);
	struct tm *lt = localtime(&t);

	char buf[16];
	buf[strftime(buf, sizeof(buf), "%H:%M:%S", lt)] = '\0';


	fprintf(
	      stderr, "%s %s%-5s\x1b[0m \x1b[90m%s:%d:\x1b[0m ",
	      buf, level_colors[level], level_names[level], file, line);
	vfprintf(stderr, buff, args);
	printf("\n");

	va_end(args);
}


