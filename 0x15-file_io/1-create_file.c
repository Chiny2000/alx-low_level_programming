#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filen: name of the file to create
 * @text_cont: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filen, char *text_cont)
{
int fd, t, s = 0;

if (!filen)
return (-1);

fd = open(filen, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd < 0)
return (-1);

if (text_cont)
{
while (text_cont[s])
s++;
t = write(fd, text_cont, s);
if (t != s)
return (-1);
}

close(fd);

return (1);
}
