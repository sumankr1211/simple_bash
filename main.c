/*
    Author : suman kumar 
*/
/*
    if user wants to exit command_exec fn will return 1
    else return 0;
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