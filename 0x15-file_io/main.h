#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filen, size_t nletters);
int create_file(const char *filen, char *text_cont);
int append_text_to_file(const char *filen, char *text_cont);

#endif
