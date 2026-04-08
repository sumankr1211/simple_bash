/*
    Author : suman kumar 
*/
/*
    if user wants to exit command_exec fn will return 1
    else return 0;
*/
#include <stdio.h>
#include <unistd.h>
#include "./h_files/exec.h"

int main(){
    int exit = 0 ;
    while(!exit){
        exit = command_exec();
    }
    printf("Have a good day :)\n");

    sleep(2);
    return 0;
}