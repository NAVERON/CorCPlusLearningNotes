/*
 * =====================================================================================
 *
 *       Filename:  memory.c
 *
 *    Description: memory manager and manipulate  
 *
 *        Version:  1.0
 *        Created:  07/10/2022 05:36:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  eron (), wangyulong.eron@gmail.com
 *   Organization:  eron visual studio
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// about memeory usage 

int main(void){
    int *p = (int*)malloc(sizeof(int));
    if(!p) {
        // malloc fail 
        printf("p malloc error");
        return 1;
    }else {
        *p = 15;
    }
    printf("p -> %d\n", *p);
    free(p);
    int *p2 = calloc(3, sizeof(int));
    int *t = p2;
    for(int i = 0; i < 3; i++){
        *t = 1 + i;
        t += 1;

        printf("p2>%d--=> %d\n", i, p2[i]);
    }
    free(p2);
    // malloc realloc calloc memset 
    int* restrict rp = realloc(NULL, sizeof(int) * 5);
    memset(rp, 0, sizeof(int) * 5);
    for(int i = 0; i < 5; i++){
        printf("rp --> %d ||| ", rp[i]);
    }
    printf("\n");
    
    // memcpy  memory copy from source to target 
    // memmove move data to another, similar to memcpy 
    

    return 0;
}






