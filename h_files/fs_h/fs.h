typedef struct dir{
    char name[12];
    struct dir * self ;
    struct dir * prev ;
    struct dir * others ;
    int count_others ; 
}dir;

dir * create_dir(int );
void fill_dir_name(dir * , char *);
dir * init_file_system();
void ls(dir *);
void pwd(dir *);
void copy_dir_content(dir *, dir * );
void mkdir (dir *, char *);
void user_current_path(dir * );
dir *  cd (dir * );
int str_comp (char *  , char *);

