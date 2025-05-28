#include "kernel/types.h"
#include "user/thread.h"
#include "user/user.h"

int thread_create(void (*start_routine)(void*, void*), void *arg1, void *arg2){
    void *raw_stack = malloc(PGSIZE * 2);
   
    int tid = clone(start_routine, arg1, arg2, raw_stack);

    return tid;
}

int thread_join(){
    void *stack;
    int tid = join(&stack);

    if(tid >= 0){
        free(stack);
    }

    return tid;
}