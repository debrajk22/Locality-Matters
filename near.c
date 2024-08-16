#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = open("large_text_file8.txt", O_RDONLY);
    char buffer[20000];

    for (int i=0;i<1e4;i++)
    {
        lseek(fd, 0, SEEK_CUR);
        read(fd, buffer+i, 1);
    }
    // printf("%s\n", buffer);

    close(fd);
    return 0;
}