#include "kernel/types.h"
#include "user/user.h"
#include "user/thread.h"

// #define NUM_THREAD 5
// int threads[NUM_THREAD];

// int *ptr;

// void
// thread_sbrk(void *arg1, void *arg2)
// {
//     uint64 num = (uint64)arg1;
//     char *old_break = sbrk(0);

//     // Global memory allocation
//     if (num == 0) {
//         printf("Thread %lu sbrk: old break = %p\n", num, old_break);
//         ptr = (int *)malloc(4096 * 4 * NUM_THREAD);
//         printf("Thread %lu sbrk: increased break by %x\nnew break = %p\n", num, 4096 * 4 * NUM_THREAD, sbrk(0));
//         sleep(50);
//         printf("Thread %lu sbrk: free memory\n", num);
//         free(ptr);
//         ptr = 0;
//     }
//     else {
//         while (ptr == 0) {
//             sleep(1);
//         }
//         printf("Thread %lu size = %p\n", num, sbrk(0));
//         for (int i = 0; i < 4096; i++) {
//             ptr[num*4096 + i] = num;
//         }
//     }

//     while (ptr != 0) {
//         sleep(1);
//     }

//     // Local memory allocation
//     for (int i = 0; i < 1000; i++) {
//         int *p = (int *)malloc(4096);
//         if (p == 0) {
//             printf("Thread %lu malloc failed\n", num);
//             exit(1);
//         }
//         for (int j = 0; j < 4096 / sizeof(int); j++) {
//             p[j] = num;
//         }
//         for (int j = 0; j < 4096 / sizeof(int); j++) {
//             if (p[j] != num) {
//                 printf("Thread %lu found %d\n", num, p[j]);
//                 exit(1);
//             }
//         }
//         free(p);
//     }
//     printf("Thread %lu end\n", num);
//     exit(0);
// }


int
main(int argc, char *argv[])
{
    // int i;

    // printf("Thread exec test %s\n", argv[1]);
    // for (i = 0; i < NUM_THREAD; i++) {
    //     threads[i] = thread_create(thread_sbrk, (void *)(uint64)i, (void *)(uint64)0);
    // }
    // for (i = 0; i < NUM_THREAD; i++) {
    //     int ret = thread_join();
    //     if (ret < 0) {
    //         printf("Thread %d join failed\n", i);
    //         exit(1);
    //     }
    // }
    printf("Thread exec test %s\n", argv[1]);
    return 0;
}