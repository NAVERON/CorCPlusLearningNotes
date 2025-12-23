/*
 * =====================================================================================
 *
 *       Filename:  first.c
 *
 *    Description: first c/c++ program  
 *
 *        Version:  1.0
 *        Created:  07/09/2022 08:22:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  eron (), wangyulong.eron@gmail.com
 *   Organization:  eron visual studio
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>

int funcadd(int a, int b){
    return a + b;
}
int functimes(int a, int b){
    return a * b;
}

void swarpint(int *a, int *b){
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}
void (*swarp_pointer)(int *a, int *b) = &swarpint;

int getres(int (*myfunc)(int, int), int a, int b){
    return myfunc(a, b);
}

int main(int argc, char* argv[]) {
    int a = 0;
    int b = a + 5;
    int c = b % 3;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    int d = a & 0b00001010;
    int e = d ^ 0b00001110;
    printf("bit option : d = %d, e = %d\n", d, e);
    printf("move bit ---> %d\n", 0b00000011 >> 1);
    
    // process control 
    char f = 'A';
    printf("char --> %c\n", f);
    char g = 'B';
    int h = f + g;  // char option --> 8 bit 
    printf("char add == %d\n", h);
    unsigned int k = 0b00000010;
    printf("unsigned int = %d\n", k);
    int int4bool = 2;
    if(int4bool){
        printf("hello boolean true !!\n");
    }
    bool flag = false;
    printf("test bool type --> %d\n", flag);
    printf("int min --> %d and max -。 %d\n", INT_MIN, INT_MAX);
    float m = 10.25;
    printf("float test --- %5.3f\n", m);
    _Bool xx = true;
    if (xx) {
        printf("c99 std = %i\n", xx);
    } else {
        printf("not support ...\n");
    }
    long n = sizeof(m);
    printf("length of m = %zd\n", n);
    
    // function test 
    int res = funcadd(b, c);
    printf("res = %d\n", res);
    int *p = &b;
    *p = *p + 10;
    printf("print b = %d, address = %p\n", *p, p);
    char *pp = NULL;
    swarpint(p, &c);
    printf("changed b = %d, c = %d\n", b, c);
    swarp_pointer(&b, &c);  // or (*swarp_pointer)(&a, &b); 
    printf("changed b = %d, c = %d\n", b, c);
    int xx1 = getres(&funcadd, 3, 5);
    int xx2 = getres(&functimes, 6, 5);
    printf("function special = %d, %d\n", xx1, xx2);
    

    return 0;
}





