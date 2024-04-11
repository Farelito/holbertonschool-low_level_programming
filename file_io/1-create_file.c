#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
    int fch;
    ssize_t buffer_written;

    fch = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    if (fch == -1)
        return (-1);

    if (!text_content)
		text_content = "";

    buffer_written = write(fch, text_content, strlen(text_content));

    if (buffer_written == -1) 
    {
        return (-1);
    }

    close(fch);

    return (1);
}
