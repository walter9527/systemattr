#include "common.h"

int main(int argc, char *argv[])
{
    struct group *p = NULL;

    //p = my_getgrgid(0);
    p = my_getgrnam("sys");

    char   *gr_name = p->gr_name;    
    char   *gr_passwd = p->gr_passwd;
    gid_t   gr_gid = p->gr_gid;      
    char  **gr_mem = p->gr_mem;      

    // 组名
    printf("gr_name = %s\n", gr_name);
    // 密码
    printf("gr_passwd = %s\n", gr_passwd);
    // 组 ID
    printf("gr_gid = %d\n", gr_gid);

    // 组成员 
    while (gr_mem[0] != NULL) {
        printf("gr_mem = %s\n", *gr_mem++);
    }


    return 0;
}
