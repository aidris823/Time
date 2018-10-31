#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>

int main(){
  file_info();
  return 0;
}

int file_info(){
  struct stat  status;
  stat("File.txt",&status);
  printf("File size: %d\n",status.st_size); 
  printf("Mode/Permissions: %o\n",status.st_mode);
  printf("Time of last access:%s",ctime(&status.st_atime));
  return 0;
}
