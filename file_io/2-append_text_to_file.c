#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
    int fch;
    ssize_t b_wr;

    
	if (!filename)
		return (-1);

    fch = open(filename, O_WRONLY | O_APPEND);

    if (fch == -1)
        return (-1);

    if (text_content)
    {
       /*for(i_nb = 0; strlen(text_content] = '\0; i_nb++);*/
    b_wr = write(fch, text_content, strlen(text_content));

    if (b_wr == -1) 
       return (-1);
       
    }
    close(fch);

    return (1);
}
