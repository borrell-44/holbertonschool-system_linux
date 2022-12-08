#include "_getline.h"

char *_getline(const int fd)
{
    char * buffer[READ_SIZE+1];
    size_t sz;

    sz = read(fd, buffer, READ_SIZE);
    if (sz > 0)
    {
        buffer[sz] = '\0';
        printf("%ld\n", sz);
        printf("%s\n", buffer[1]);
        return (buffer[0]);
    }

    return NULL;
}
