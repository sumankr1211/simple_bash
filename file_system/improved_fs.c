#include "./../h_files/fs_h/fs.h"
#include <stdio.h>


void implemented_mkdir(dir * user){
    char arr[12] = {};
    scanf("%s",arr);
    mkdir(user,arr);
}