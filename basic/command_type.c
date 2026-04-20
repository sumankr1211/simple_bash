/*
    if asked it return a value for type to ccommand to perform : 
*/



#include <stdio.h>

// 0 exit : out of program 
// 1 : ls : list directory 
// 2 : mkdir : makes directory 
// 3 : pwd : list current directory
// 4 : cd : to change dir 
// 5 : clear : to clear screen 
// 6 : rm : to remove directory 

int command_type (char * arr){
    // exit command 
    if(arr[0]=='e' && arr[1]=='x' && arr[2]=='i' && arr[3]=='t' &&arr[4]=='\0'){
        return 0;
    }

    // ls command 
    else if(arr[0]=='l' && arr[1]=='s' && arr[2]=='\0'){
        return 1;
    }
    // mkdir command 
    else if( arr[0]=='m' && arr[1]=='k' && arr[2]=='d' && arr[3]=='i' && arr[4]=='r' && arr[5]=='\0'){
        return 2;
    }
    else if(arr[0]=='p' && arr[1]=='w' && arr[2]=='d' && arr[3]=='\0'){
        return 3 ;
    }
    else if(arr[0]=='c' && arr[1]=='d' && arr[2]=='\0'){
        return 4;
    }
    else if(arr[0]=='c' && arr[1]=='l' && arr[2]=='e' && arr[3]=='a' && arr[4]=='r' && arr[5]=='\0'){
        return 5 ;
    }
    else if(arr[0]=='r' && arr[1]=='m' && arr[2]=='\0'){
        return 6;
    }
}