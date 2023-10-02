#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filen: name of the file to be read
 * @nletters: number of nletters to read and print
 *
 * Return: the number of nletters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filen, size_t nletters)
{
int fd;
int s, t;
char *buf;

if (!filen)
return (0);

fd = open(filen, O_RDONLY);
if (fd < 0)
return (0);

buf = malloc(sizeof(char) * nletters);
if (!buf)
return (0);

s = read(fd, buf, nletters);
if (s < 0)
{
free(buf);
return (0);
}
buf[s] = '\0';

close(fd);

t = write(STDOUT_FILENO, buf, s);
if (t < 0)
{
free(buf);
return (0);
}

free(buf);
return (t);
}
