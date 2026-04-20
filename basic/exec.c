#include<stdio.h>
#include <stdarg.h>
#include "./../h_files/basic/command_type.h"
#include "./../h_files/basic/command_run.h"
#include "./../h_files/fs_h/fs.h"


int command_exec(){
    /*
    first it will print path it currently is in without spaces :
    */
    extern dir * user ;
    user_current_path(user);

    char command[12];
    scanf("%s",command);
    int command_value = command_type(command);

    if(command_value==0){
        return 1 ;
    }
    command_run(command_value);
    printf("\n");
    return 0;
}