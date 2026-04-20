/*
    Author : suman kumar 
*/
/*
    Program will enter from this file : 
    here we initialize file system i.e create root and user 
    and check if user wants to exit program
*/
#include <stdio.h>
#include <unistd.h>
#include "./h_files/basic/exec.h"
#include "./h_files/fs_h/fs.h"

dir * root ;
dir * user ;

int main(){
    /*
    starting intitalizing variable needed globally ;
    */
    root = init_file_system();
    user = root ;

    int exit = 0 ;
    while(!exit){
        exit = command_exec();
    }
    printf("Have a good day :)\n");
    sleep(1);
    return 0;
}