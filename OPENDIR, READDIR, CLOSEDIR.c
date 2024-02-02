#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
 
int main() {
    char buff[100];
    struct dirent *dptr;
    DIR *dirp;

    printf("\n\nENTER DIRECTORY NAME: ");
    scanf("%s", buff);

    if ((dirp = opendir(buff)) == NULL) {
        printf("The given directory does not exist\n");
        return 1;
    }

    while ((dptr = readdir(dirp)) != NULL) {
        printf("%s\n", dptr->d_name);
    }

    closedir(dirp);
    return 0;
}
