#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    struct stat fileStat;

    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    if (stat(argv[1], &fileStat) == -1) {
        perror("stat");
        return 1;
    }

    printf("File Size: %ld bytes\n", fileStat.st_size);
    printf("Number of Links: %ld\n", fileStat.st_nlink);
    printf("File inode: %ld\n", fileStat.st_ino);
    printf("File Permissions: %o\n", fileStat.st_mode & 0777);

    return 0;
}
