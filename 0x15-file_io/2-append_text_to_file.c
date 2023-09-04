#include "main.h"

/**
 * append_text_to_file - Adds text to the end of a file
 * @filen: The file where the text will be added
 * @text_cont: The text to add to the file's content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filen, char *text_cont)
{
int fd, t, s = 0;

if (!filen)
return (-1);

fd = open(filen, O_WRONLY | O_APPEND);
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
