#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

int main(int argc, char ** argv){

    int pid = fork();
    int i;
    int status;
    if(pid > 0){
        for(i = 0; i < 15 && pid > 0; i++){
            pid = fork();
            if(pid < 0)
                printf(1,"errors occur!\n");
        }
        if (pid == 0){
            int j = 0;
            while(j++ < 1000);
            if(getpid() == 5) sleep(50);
            
            printf(1,"pid = %d\n",getpid());
            if(getpid() == 10){
                printf(1,"pid 10 waiting for 5\n");
                int wpid = waitpid(5,&status,0);
                printf(1,"success clean %d\n",wpid);
            }
            if(getpid() == 12){
                printf(1,"pid 12 waiting for 5\n");
                int wpid = waitpid(5,&status,0);
                if(wpid == -1)
                    printf(1,"no more waiting for 5\n");
            }
            if(getpid() == 5)
                exit(5);
            exit(0);
        }
    }else if(pid == 0){
        int j = 0;
        while(j++ < 1000);
        exit(0);
    }
    int going = 1;
    while(going >= 0){
        going = wait(&status);
        printf(1,"kill %d process\n",going);
    };
    exit(0);
    return 0;
}
