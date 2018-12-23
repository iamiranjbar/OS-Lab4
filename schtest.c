#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "syscall.h"

int
main(int argc, char* argv[])
{
    int pid = 1;
    // int j = 0;
    //chmfq(getpid(),3);
    //chpr(getpid(),1);
    int i;
    int z;
    for(i = 0; i< 15; i++){
        if(pid>0)
            pid=fork();
    }
    if(pid<0)
        printf(1,"error\n");
    else if(pid == 0){
        //chmfq(getpid(),3);
        //ps();
        for (z = 0; z < 100000; z+=1){
            int s;
            s = uptime();
            while((uptime() - s) > 100000){
                ;
            }
        }
    }
    else {
        for(i = 0; i< 15; i++)
            wait();
        printf(1,"finished:D\n");
    }
    exit();
}
