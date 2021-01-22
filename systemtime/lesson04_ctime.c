#include "common.h"


int main(int argc, char *argv[])
{
    printf("=========== time ===========\n");

    time_t tim = time(NULL);

    printf("time = %ld\n", tim);

    printf("=========== ctime ===========\n");

    char *c_time = ctime(&tim);

    printf("ctime = %s", c_time);

    printf("========== gmtime ============\n");

    struct tm *gm_time = gmtime(&tim);

    int tm_sec = gm_time->tm_sec;    /* 秒 (0-60) */
    int tm_min = gm_time->tm_min;    /* 分 (0-59) */
    int tm_hour = gm_time->tm_hour;   /* 时 (0-23) */
    int tm_mday = gm_time->tm_mday;   /* 一个月的第几天 (1-31) */
    int tm_mon = gm_time->tm_mon;    /* 月 (0-11) */
    int tm_year = gm_time->tm_year;   /* 年 - 1900 */
    int tm_wday = gm_time->tm_wday;   /* 一周的第几天 (0-6, 周天 = 0) */
    int tm_yday = gm_time->tm_yday;   /* 一年的第几天 (0-365, 一月一日 = 0) */
    int tm_isdst = gm_time->tm_isdst;  /* 夏时令时间 */
    
    printf("tm_sec = %d\n", tm_sec);
    printf("tm_min = %d\n", tm_min);
    printf("tm_hour = %d\n", tm_hour);
    printf("tm_mday = %d\n", tm_mday);
    printf("tm_mon = %d\n", tm_mon);
    printf("tm_year = %d\n", tm_year);
    printf("tm_wday = %d\n", tm_wday);
    printf("tm_yday = %d\n", tm_yday);
    printf("tm_isdst = %d\n", tm_isdst);

    printf("========== localtime ============\n");

    struct tm *local_time = localtime(&tim);

    tm_sec = local_time->tm_sec;    /* 秒 (0-60) */
    tm_min = local_time->tm_min;    /* 分 (0-59) */
    tm_hour = local_time->tm_hour;   /* 时 (0-23) */
    tm_mday = local_time->tm_mday;   /* 一个月的第几天 (1-31) */
    tm_mon = local_time->tm_mon;    /* 月 (0-11) */
    tm_year = local_time->tm_year;   /* 年 - 1900 */
    tm_wday = local_time->tm_wday;   /* 一周的第几天 (0-6, 周天 = 0) */
    tm_yday = local_time->tm_yday;   /* 一年的第几天 (0-365, 一月一日 = 0) */
    tm_isdst = local_time->tm_isdst;  /* 夏时令时间 */
    
    printf("tm_sec = %d\n", tm_sec);
    printf("tm_min = %d\n", tm_min);
    printf("tm_hour = %d\n", tm_hour);
    printf("tm_mday = %d\n", tm_mday);
    printf("tm_mon = %d\n", tm_mon);
    printf("tm_year = %d\n", tm_year);
    printf("tm_wday = %d\n", tm_wday);
    printf("tm_yday = %d\n", tm_yday);
    printf("tm_isdst = %d\n", tm_isdst);


    printf("========== mktime ============\n");
    
    time_t tim_re1 = mktime(gm_time);
    time_t tim_re2 = mktime(local_time);

    printf("gm_mk = %ld\n", tim_re1);
    printf("local_mk = %ld\n", tim_re2);


    printf("========== asctime ============\n");
    
    char *asc_time_gm = asctime(gm_time);
    char *asc_time_local = asctime(gm_time);

    printf("asc_time_gm = %s", asc_time_gm);
    printf("asc_time_local = %s", asc_time_local);


    printf("========== strftime ============\n");

    char buf[128] = "";

    strftime(buf, sizeof(buf), "%Y:%m:%d %H:%M:%S", gm_time);

    printf("strftime = %s\n", buf);
    return 0;
}
