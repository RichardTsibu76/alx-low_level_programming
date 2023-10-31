#include "main.h"

/**
 *append_text_to_file - This appends text to file
 *@filename: a pointer variable to be declared
 *@text_content: null terminated string
 *Return: 1 on success and -1 on failure
 *	does not create if not exist
 *	filename is NULL return -1
 *	text_content is null, do not add anything to
 *	to file, ret 1 or -1 if exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_byte;

	fd = open(filename, O_RDWR | O_APPEND);
	if ((fd < 0) || (filename == NULL))
		return (-1);
	if (text_content != NULL)
	{
		w_byte = write(fd, text_content, strlen(text_content));
		if (w_byte < 0)
			return (-1);
	}
	close(fd);
	return (1);

}
