/* These Linux codes are system- and OS-dependent and might behave differently */

/* Include the standard I/O header for printf() */
#include <stdio.h>

/* Include definitions for resource limits: getrlimit, setrlimit, struct rlimit */
#include <sys/resource.h>

/* Entry point: implicit int return type (older C). Prefer `int main(void)` in modern code. */
main(){

    /* `v` will hold the resource limits (soft and hard) for a resource. */
    struct rlimit v;

    /* Read current limits for core-file size (RLIMIT_CORE) into `v`. */
    getrlimit(RLIMIT_CORE,&v);

    /*
     * Print the current soft (`rlim_cur`) and hard (`rlim_max`) limits.
     * Note: the format string labels "CPU Time" which is misleading here;
     * this program is inspecting the core-file size limit.
     */
    printf("CPU Time: Soft limit=%u, hard limit=%u\n",(int)v.rlim_cur,(int)v.rlim_max);

    /* Set the soft limit (`rlim_cur`) to 10000 (units are bytes for RLIMIT_CORE on most systems). */
    v.rlim_cur=10000;

    /* Apply the new limits for RLIMIT_CORE. This call may fail (returns -1) if increasing above the hard limit without privileges. */
    setrlimit(RLIMIT_CORE,&v);

    /* Read the limits again to verify the change took effect. */
    getrlimit(RLIMIT_CORE,&v);

    /* Print the limits after attempting to change them. */
    printf("CPU Time: Soft limit=%u, hard limit=%u\n",(int)v.rlim_cur,(int)v.rlim_max);

    /*
     * Infinite loop to keep the process running so you can inspect it or trigger a crash
     * (which might produce a core dump subject to the set limits).
     */
    while(1);
}