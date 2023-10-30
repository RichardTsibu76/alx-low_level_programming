#include "main.h"

/**
 *create_file - This is the function that creates file
 *@filename: Is the pointer to the file
 *@text_content: NULL termainated string to write to the file
 *Return: 1 upon success, otherwise -1.
 *	file permissions rw-----,
 *	if already exits, change permission not
 *	if NULL, ret -1, if text_content is NULL,
 *	create empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, w_mem;

	file_des = open(filename, O_CREAT | O_RDWR  | O_TRUNC, 0600);
	if ((file_des < 0) || (filename == NULL))
		return (-1);
	if (text_content != NULL)
	{
		w_mem = write(file_des, text_content, strlen(text_content));
		if (w_mem < 0)
			return (-1);
	}
	close(file_des);
	return (1);


}

