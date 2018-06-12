/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <stdio.h>
#include <time.h>

#include <rpc/rpc.h>
#include <rdate.h>

long bin_date(void) {
    return (long) time(NULL);
}

char *str_date(long t) {
    return ctime((time_t *) &t);
}

long *bin_date_1(void *p, struct svc_req *cl) {
    static long t;
    
    t = bin_date();
    return &t;
}

char **str_date_1(long *t,
    struct_req *cl) {
        static char *s;
        s = str_date(*t);
        return &s;
    }
    