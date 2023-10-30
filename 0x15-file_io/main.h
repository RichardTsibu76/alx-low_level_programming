#ifndef MAIN_H
#define MAIN_H

/* header files */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

/* prototypes of the functions */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void copy_from_to(const char *file_from, const char *file_to);
int append_text_to_file(const char *filename, char *text_content);

#endif
