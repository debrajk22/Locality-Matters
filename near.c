#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = open("large_text_file8.txt", O_RDONLY);
    int n = 2e5;
    char buffer[n];

    for (int i=0;i<n;i++)
    {
        lseek(fd, 0, SEEK_CUR);
        read(fd, buffer+i, 1);
    }

    close(fd);
    return 0;
}