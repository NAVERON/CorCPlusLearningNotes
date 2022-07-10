/*
 * =====================================================================================
 *
 *       Filename:  define.c
 *
 *    Description: structure, typedef and more data structure  
 *
 *        Version:  1.0
 *        Created:  07/10/2022 10:07:23 PM
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

// pre processing 
#define MAX 100 
#define MESSAGE "hello world !" 

struct car {
    int id;
    char *name;
    float price;
};

typedef struct ship {
    long id;
    char *name;
    char *message;
    int shipid;
} shiplite;

// 一般传入是局部变量 函数改变不会反映到外部, 除非使用指针 
void happy(shiplite *shiper){
    shiper->shipid = shiper->shipid + 1;
}

typedef struct node {
    long id;
    char name[50];
    struct node *next;
} tree_node;

typedef union {
    short count;
    float weight;
    float volumn;
} quantity;

typedef enum {
    RED, BLUE, GREEN
} color;

int main(void){
    struct car instance = {0, "hello", 145.0};
    shiplite shiper = {1, "arch", "call", 12};
    printf("shiper --> %d\n", shiper.shipid);

    happy(&shiper);
    printf("shiper changed --> %d\n", shiper.shipid);
    quantity q;
    q.count = 4;
    printf("quantity --> %d\n", q.count);

    color c = BLUE;
    printf("color --> %d\n", c);

    // pre processing .... 预处理的写法 


    return 0;
}









