#include "./../h_files/fs_h/fs.h"


extern dir * user ;

void command_run(int value){
    if(value==1){
        ls(user);
    }
}