#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: letters to be read
 * Return: actual number of bytes read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buffer;
	int  _read;
	int _writ;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}
	_writ = write(STDOUT_FILENO, buffer, (ssize_t)_read);
	if (_writ == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (_read);
}
