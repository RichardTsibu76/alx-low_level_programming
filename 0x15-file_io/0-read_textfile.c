#include "main.h"
/**
 *read_textfile - Reads textfils and prints it to the posix stdout
 *@letters: The file to print
 *@filename: The file pointer
 *Return: Actual numbers of letters
 *	if filename is NULL, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r_byte, w_byte;
	char *str;

	fd = open(filename, O_RDWR);

	if ((filename == NULL) || (fd < 0))
		return (0);
	str = malloc((letters) * sizeof(char));
	if (str == NULL)
		return (0);
	r_byte = read(fd, str, letters);
	w_byte = write(STDOUT_FILENO, str, r_byte);
	if (w_byte < 0)
		return (0);
	free(str);
	close(fd);
	return (r_byte);


}
