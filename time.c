#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>

int main(){
  int file = open("file.txt",O_WRONLY|O_CREAT,0644);
  file_info(file);
  return 0;
}

void file_info(int file){
  struct stat * status =  
}
