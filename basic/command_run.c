#include "./../h_files/fs_h/fs.h"
#include "./../h_files/fs_h/improved_fs.h"

// 0 exit : out of program 
// 1 : ls : list directory 
// 2 : mkdir : makes directory
// 3 : pwd : print current working directory
// 4  : cd : 

extern dir * user ;

void command_run(int value){
    if(value==1){
        ls(user);
    }
    else if(value==2){
        implemented_mkdir(user);
    }
    else if(value ==3){
        pwd(user);
    }
    else if(value==4){
        user = cd(user);
    }
}