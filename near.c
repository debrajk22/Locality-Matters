#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int fd = open("large_text_file8.txt", O_RDWR);
    int n = atoi(argv[argc-1]);
    printf("The value of n = %d", n);

    for (int i=0;i<n;i++)
    {
        write(fd, "1", 1);
        fsync(fd);
        lseek(fd, 0, SEEK_CUR);
    }

    close(fd);
    return 0;
}
