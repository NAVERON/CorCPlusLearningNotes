/*
 * =====================================================================================
 *
 *       Filename:  advance.c
 *
 *    Description: advance usage of C/C++  
 *
 *        Version:  1.0
 *        Created:  07/10/2022 12:02:37 PM
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

// n -> rows of array 
int sum_array(int arr[][4], int n){
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
    }

    return sum;
}


int main(void){
    
    // array copy 
    int a[4] = {2, 4, 6, 9};
    int b[4];
    printf("size of a = %zu\n", sizeof(a)/sizeof(int));
    memcpy(b, a, sizeof(a));
    /*
    for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        b[i] = a[i];
    }
    */
    for(int i = 0; i < sizeof(b)/sizeof(b[0]); i++){
        printf("b[%d] = %d\n", i, b[i]);
    }
    
    int arr[2][4] = {
        {4, 5, 6, 7}, 
        {1, 2, 3, 4}
    };
    int res_sum = sum_array(arr, 2);
    printf("sum of array --> %d\n", res_sum);
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("char array -> %s\n", str);
    char greeting[] = "hi, "
        "here is my space ! "
        "WELCOME ~";
    printf("greeting = %s\n", greeting);
    const char *sp = "hello eron...";
    printf("hello = %s\n", sp);
    char news[10];
    strcpy(news, "kike");
    printf("kike = %s, str length = %zu\n", news, strlen(news));
    // str compare 
    printf("string compare = %d\n", strcmp(sp, news));
    char first[20];
    sprintf(first, "%s | %s", sp, news);
    printf("first str : %s\n", first);
    char *array_list[] = {
        "hello", 
        "my", 
        "world"
    };
    int n = 3;
    n = sizeof(array_list)/sizeof(char*); // more check 
    for(int i = 0; i < n; i++){
        printf("array list = %s\n", array_list[i]);
    }
    

    return 0;
}










