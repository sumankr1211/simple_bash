// 0 exit : out of program 
// 1 : ls : list directory 

int command_type (char * arr){
    if(arr[0]=='e' && arr[1]=='x' && arr[2]=='i' && arr[3]=='t' &&arr[4]=='\n'){
        return 0;
    }
    else if(arr[0]=='l' && arr[1]=='s' && arr[2]=='\0'){
        return 1;
    }
}