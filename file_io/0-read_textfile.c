#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fch;
    char *buffer;
    ssize_t buffer_read, buffer_written;

    if (filename == NULL) {
        return 0; 
    }

    fch = open (filename, O_RDONLY);

    if (fch == -1)
        return (0);
    buffer = malloc(sizeof(char) * (letters));

     if (!buffer)
    {
        return (0);
    }

    buffer_read = read(fch, buffer, letters);

    if (buffer_read == -1)
    {
        return (0);
    }

   buffer[buffer_read] = '\0';
    buffer_written = write(STDOUT_FILENO, buffer, buffer_read);

    if (buffer_written == -1)
    {
        return (0);
    }

    close(fch);

    return (buffer_written);
}
