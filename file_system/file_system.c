// here i will  implement file system 

#include <stdio.h>
#include <stdlib.h>
#include "./../h_files/fs_h/fs.h"


dir * create_dir(int n ){
    dir * temp = (dir *) malloc ((n)*sizeof(dir));
    return temp ;
}

void fill_dir_name(dir * temp , char * t ){
    for(int i = 0 ; i<12 ; i++){
        temp->name[i]=t[i];
        if(t[i]=='\n')break;
    }
}

dir * init_file_system(){
    dir * root = create_dir(1);
    fill_dir_name(root,"/");
    root->self = root ;
    root->prev = NULL ;
    root->others = NULL ;
    root->count_others = 0 ;
    return root ;
}

int main(){
    dir * root = init_file_system();
    dir * user_position = root ;
    printf(" %s ",user_position->name);
}