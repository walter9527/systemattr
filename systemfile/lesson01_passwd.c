#include "common.h"

int main(int argc, char *argv[])
{
    struct passwd *p = NULL;
    
    //p = my_getpwuid(1000);
    p = my_getpwnam(argv[1]);
	
	char   *pw_name = p->pw_name;  
    char   *pw_passwd = p->pw_passwd;
    uid_t   pw_uid = p->pw_uid;   
    gid_t   pw_gid = p->pw_gid;   
    char   *pw_gecos = p->pw_gecos; 
    char   *pw_dir = p->pw_dir;   
    char   *pw_shell = p->pw_shell; 
	
	printf("pw_name = %s\n", pw_name);
	printf("pw_passwd = %s\n", pw_passwd);
	printf("pw_uid = %d\n", pw_uid);
	printf("pw_gid = %d\n", pw_gid);
	printf("pw_gecos = %s\n", pw_gecos);
	printf("pw_dir = %s\n", pw_dir);
	printf("pw_shell = %s\n", pw_shell);

    return 0;
}
