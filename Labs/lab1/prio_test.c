#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

int main(){
    int i;
    int begin = getpid();
    int pid = fork();
    if(pid > 0){
        for(i = 0; i < 10 && pid > 0; i++){
            pid = fork();
            if(pid == 0){
                break;
            }
            if(pid < 0)
                printf(1,"errors occur!\n");
        }
        if (pid == 0){
            int j = 0;
            if(getpid() == begin+8){
                printf(1," pid = %d, get higher priority\n\n",getpid());
                change_priority(33);
            }
            while(j++ < 30000000);
            exit(0);
        }
    }else if(pid == 0){
       // sleep(100);
        int j = 0;
        while(j++ < 30000000);
        exit(0);
    }
    int ki = 1;
    int status;
    while(ki >= 0){
        ki = wait(&status);
        if(ki == begin+8)
            printf(1," [%d] I should be done first\n",ki);
        else
            printf(1," [%d] done runing\n",ki);
    }
    exit(0);
    return 0;
}
