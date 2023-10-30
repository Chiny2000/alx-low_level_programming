#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file and print it to STDOUT
*@letters: number of letters to be read
*@filename: reading text file
* Return: q- actual number of read and printed bytes
* 0 when the filename is NULL or when function fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fn;
ssize_t q;
ssize_t x;

fn = open(filename, O_RDONLY);
if (fn == -1)
return (0);
buf = malloc(sizeof(char) * letters);
x = read(fn, buf, letters);
q = write(STDOUT_FILENO, buf, x);

free(buf);
close(fn);
return (q);
}
