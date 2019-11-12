#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _strlen - This is a function prototype
 * @s: This variable recive the value of the function main
 * Description: Function that returns the length of a string
 * section header: Section description
 * Return: Returns the counter value to the main function
 */

int _strlen(char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
		cnt++;
	return (cnt);
}

/**
 * read_textfile - This is a function prototype
 * @filename: This variable recive a pointer
 * @letters: This variable recive the number of letters
 * Description: Reads a text file and prints it to the POSIX standard output
 * section header: Section description
 * Return: The actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	char *buff;
	int file, file_bytes, length;

	buff = malloc(letters);

	if (buff == NULL)
	{
		free(buff);
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	file_bytes = read(file, buff, letters);
	if (file_bytes == -1)
		return (0);

	length = _strlen(buff);
	file_bytes = write(STDOUT_FILENO, buff, length);
	if (file_bytes == -1)
	{
		free(buff);
		return (0);
	}

	close(file);
	free(buff);
	return (file_bytes);
}
