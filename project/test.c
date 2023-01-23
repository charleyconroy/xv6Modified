#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char **argv){
    int prio, i;
    int pid = fork();
    if(pid == 0){
	int pid2 = fork();
	if(pid2 == 0){
	    prio = nice(getpid(), 0);
	    for(i = 0; i < 10000000; i++);
	    printf(1, "Process %d has priority %d\n", getpid(), prio);
	} else{
	    prio = nice(getpid(), 1);
	    for(i = 0; i < 10000000; i++);
	    printf(1, "Process %d has priority %d\n", getpid(), prio);
	    wait();
	}
    } else{
	wait();
    }
    exit();
}

