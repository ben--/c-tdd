#ifndef IO_IO_H
#define IO_IO_H

#include <stddef.h>

int read_input(char *buf, size_t buf_len);
int write_output(const char *buf, size_t buf_len);

#endif /* !IO_IO_H */
