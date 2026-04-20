// here i will  implement file system 
// until now i have implented mkdir ls  pwd 


#include <stdio.h>
#include <stdlib.h>
#include "./../h_files/fs_h/fs.h"


dir * create_dir(int n ){
    dir * temp = (dir *) malloc ((n)*sizeof(dir));
    return temp ;
}

void fill_dir_name(dir * temp , char * t ){
    for(int i = 0 ; i<12 ; i++){
        (temp->name)[i]=t[i];
    }
}

dir * init_file_system(){
    dir * root = create_dir(1);
    char name[12] = "/";
    fill_dir_name(root,name);
    root->self = root ;
    root->prev = NULL ;
    root->others = NULL ;
    root->count_others = 0 ;
    return root ;
}

void ls(dir * temp){
    printf(".\t..\t");
    for(int i = 0 ; i<(temp->count_others) ; i++){
        printf("%s\t",(temp->others)[i].name);
    }
    printf("\n");
}

void user_current_path(dir * user){
    dir * temp ;
    temp = user ;
    if(temp->name[0]!= '/'){
    printf("%s/ =>",temp->name);
    }
    else{
        printf("/ =>");
    }
//     char arr[4][12];
//     int count = -1 ; 
//     int l = 4 ;
//     while(temp->prev != NULL){
//         l--;
//         if(l){
//             break;
//         }
//         count++ ;
//         for(int i = 0 ; i<12 ; i++){
//             arr[count][i]= temp->name[i];
//         }
//         temp = temp->prev ; 
//     }

//     if(count == -1){
//         printf("/");
//     }
//     int j = count ; 
//     if(j>2){
//         printf(".../");
//     }
//     for(int i = count ; i > count-2 && i>-1 ; i--){
//         printf("/%s",arr[i]);
//     }
//     printf(" => ");
}

void pwd(dir * user_position){
   dir * temp ;
    temp = user_position ;
    char arr[10][12];
    int count = -1 ; 
    while(temp->prev != NULL){
        count++ ;
        for(int i = 0 ; i<12 ; i++){
            arr[count][i]= temp->name[i];
        }
        temp = temp->prev ; 
    }

    if(count == -1){
        printf("/");
    }
    for(int i = count ; i > -1 ; i--){
        printf("/%s",arr[i]);
    }
    printf("\n");
}

void copy_dir_content(dir * copy , dir * original){
    fill_dir_name(copy ,original->name);
    copy->count_others = original->count_others ;
    copy->others = original->others ;
    copy->prev = original->prev ;
    copy->self = original->self ;
}


void mkdir (dir * user , char * name){
    int c = user->count_others ;
    dir * temp = create_dir(c+1);
    for(int i = 0 ; i<c ; i++){
        copy_dir_content(&temp[i],&user->others[i]);
    }
    fill_dir_name(&(temp[c]),name);
    dir * abc = &temp[c];
    abc->count_others = 0;
    abc->others = NULL;
    abc->prev = user ;
    abc->self = abc ;
    user->count_others++;

    dir * rem = user->others ;
    user->others = temp ;
    free(rem);
    return ;
}

int str_comp (char * a , char * b){
    for(int i = 0 ; i<12 ; i++){
        if(a[i]=='\0' && b[i]=='\0'){
            return 1;
        }
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}

dir *  cd (dir * user){
    char arr[12];
    scanf("%s",arr);
    if(arr[0]=='.' && arr[1]=='\0'){
        return user ;
    }
    else if(arr[0]=='.' && arr[1]=='.' && arr[2]=='\0'){
        if(user->prev == NULL){
            return user ;
        }
        else{
            user = user->prev ;
            return user ;
        }
    }
    else{
        int count = user->count_others ;
        for(int i = 0 ; i < count ; i++){
            int res = str_comp((user->others[i].name),arr);
            if(res){
                user = &(user->others[i]);
                return user  ;
            }
        }
        printf("No Such directory exists : \n");
        return user  ;
    }

}

















// int main(){
//     dir * root = init_file_system();
//     dir * user_position = root ;
//     printf(" %s\n",user_position->name);  // some error
//     char arr[12]="Suman";
//     mkdir(user_position,arr);

//     ls(user_position);
//     user_position = &user_position->others[user_position->count_others - 1];
    
//     ls(user_position);
//     pwd(user_position);
// }