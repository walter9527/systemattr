#include "common.h"


int main(int argc, char *argv[])
{
    time_t tim = 0; 
    //tim = my_time(NULL);
    my_time(&tim);
    if (tim == -1) {
        perror("time err");
        exit(-1);
    }
    printf("%ld\n", tim);
    return 0;
}
