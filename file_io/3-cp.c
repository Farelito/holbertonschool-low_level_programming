#include "main.h"
#include <stdio.h>


#define BUFFER_SIZE 1024


/**
* print_error - Prints an error message to standard error output
* @message: The error message to print
* @filename: The name of the file associated with the error
*/
void print_error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

}

/**
* main - The main function of the program
* @argc: The number of command-line arguments
* @argv: An array of pointers to the command-line arguments
*
* Return: 0 on success, or various error codes on failure
*/
int main(int argc, char *argv[])
{
int file_from, file_to, error_cls_from, error_cls_to;
char buffer[BUFFER_SIZE];
ssize_t buff_read, buff_written;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
print_error_file(file_from, file_to, argv);
buff_read = BUFFER_SIZE;
while (buff_read == BUFFER_SIZE)
{
buff_read =  read(file_from, buffer, BUFFER_SIZE);
if (buff_written == -1)
print_error_file(-1, 0, argv);
buff_written = write(file_to, buffer, buff_read);

if (buff_written == -1)
print_error_file(0, -1, argv);
}

error_cls_from = close(file_from);
if (error_cls_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
error_cls_to = close(file_to);
if (error_cls_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
