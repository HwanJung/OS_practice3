#include "kernel/types.h"
#include "user/user.h"
#include "user/thread.h"

#define NUM_THREAD 5
int threads[NUM_THREAD];

void
thread_basic(void *arg1, void *arg2)
{
    uint64 num = (uint64)arg1;
    printf("Thread %lu start\n", num);
    if (num == 0) {
        sleep(20);
    } else{
        while(1);
    }
    printf("Thread %lu end\n", num);
    exit(0);
}

int
main(int argc, char *argv[])
{
    int i;
    int pid;

    pid = fork();
    if (pid < 0) {
        printf("Fork error\n");
        exit(1);
    } else if (pid == 0) {
        for (i = 0; i < NUM_THREAD; i++) {
            threads[i] = thread_create(thread_basic, (void *)(uint64)i, (void *)(uint64)getpid());
        }
        sleep(1);
        exit(0);
        
        for (i = 0; i < NUM_THREAD; i++) {
            int ret = thread_join();
            if (ret < 0) {
                printf("Thread %d join failed\n", i);
                exit(1);
            }
        }
    } else {
        sleep(30);
        wait(0);
    }
}