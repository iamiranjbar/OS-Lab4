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
    int i;
    for(i = 0; i< 1; i++)
	if(pid>0)
		pid=fork();
    if(pid<0)
	   printf(1,"error\n");
    else if(pid == 0){
	//printf(1,"child add to shared counter....\n");
	   ps();
    } else {
	for(i = 0; i< 1; i++)
		wait();
	printf(1,"finished:D\n");
    }
    exit();
}
