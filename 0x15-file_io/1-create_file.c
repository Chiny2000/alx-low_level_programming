#include "main.h"

/**
* create_file - Creates a file.
* @filename: A pointer that points to the file to create.
* @text_content: A pointer that points to string
* Return: - -1 if the function fails, otherwise - 1
*/
int create_file(const char *filename, char *text_content)
{
int fn, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fn, text_content, len);

if (fn == -1 || w == -1)
return (-1);

close(fn);

return (1);
}
