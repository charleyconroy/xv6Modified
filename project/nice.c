#include "types.h"
#include "user.h"

int main(int argc, char **argv){
    int priority, pid;
    pid = atoi(argv[1]);
    priority = atoi(argv[2]);
    nice(pid, priority);
    exit();
}
