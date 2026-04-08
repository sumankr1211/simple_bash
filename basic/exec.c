#include<stdio.h>
#include <stdarg.h>
#include "./../h_files/command_type.h"
#include "./../h_files/command_run.h"


int command_exec(){
    /*
    first it will print path it currently is in without spaces :
    */
    printf("/");
    printf(" => ");

    char command[10];
    scanf("%s",command);
    int command_value = command_type(command);
    if(command_value==0){
        return 1 ;
    }
    else{
        command_run(command_value);
    }
    return 0;
}