#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <errno.h>

int main(){
  struct stat *b = malloc(sizeof(struct stat));

  printf("README.md file information \n");

  if (stat("./README.md", b) != 0) {
    printf("Error %s: ", strerror(errno));
    return 0;
  }

  printf("File size: %lld\n", b->st_size);

  printf("File Permissions: %d\n", b->st_mode);

  time_t *t = &(b->st_atime);
  printf("Time last accessed/modified: %s",ctime(t));
}
