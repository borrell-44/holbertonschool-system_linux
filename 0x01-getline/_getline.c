#include "_getline.h"

/**
 * *_getline - returns an entire line from the given file descriptor
 * @fd: file descripter
 *
 * Return: an entire line from the file
 */

char *_getline(const int fd)
{
	char *buffer;
	size_t sz, i;

	buffer = malloc(sizeof(char) * (READ_SIZE));
	if (buffer == NULL)
	{
		return (NULL);
	}

	sz = read(fd, buffer, READ_SIZE);

	if (sz > 0)
	{
		for (i = 0; i <= sz || buffer[i] != '\0'; i++)
		{
			if (buffer[i] == '\n')
			{
				buffer[i] = '\0';
				return (buffer);
			}
		}

		buffer[sz + 1] = '\0';

		/**
		* printf("%d", READ_SIZE);
		* printf("\n\n%c\n\n", buffer[READ_SIZE]);
		* return NULL;
		* printf("%ld\n", sz);
		* Sprintf("%d\n", buffer[0]);
		*/
		return (buffer);
	}

	return (NULL);
}
