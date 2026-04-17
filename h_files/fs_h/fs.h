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