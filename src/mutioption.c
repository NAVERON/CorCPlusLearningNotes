/*
 * =====================================================================================
 *
 *       Filename:  mutioption.c
 *
 *    Description: io option and files  
 *
 *        Version:  1.0
 *        Created:  07/11/2022 02:03:46 PM
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


int main(void){
    FILE *fp = fopen("README.md", "r");
    if(!fp){
        printf("fp is null");
    }
    char c;
    while((c = fgetc(fp)) != EOF){
        if(c == '\n'){
            continue;
        }
        printf("%c", c);
    }
    printf("\n");
    fclose(fp);
    
    // ====
    FILE *q = fopen("../build/out.txt", "a");
    char x;
    while((x = getchar()) != 'q'){
        fputc(x, q);
    }
    fclose(q);

    // === 
    char str[1024];
    int linecount = 0;
    FILE *w = fopen("../build/data.txt", "r");
    while(fgets(str, sizeof(char) * 1024, w) != NULL){
        printf("%d : %s", ++linecount, str);
    }
    fclose(w);
    // fgets from stdin 模拟用户输入字符串 
    char s[1024];
    w = fopen("../build/out.txt", "a");
    puts("please string (x to quit)");
    while(fgets(s, 1024, stdin) != NULL){
        if(s[0] == '\n') continue;
        if(s[0] == 'x' && s[1] == '\n'){
            break;
        }
        puts(s);
        fputs(s, w);
    }
    fclose(w);
    
    // fwrite fread usage 
    FILE *f1 = fopen("../build/data.txt", "rb");
    FILE *f2 = fopen("../build/out.txt", "ab");
    unsigned char fc;
    while(!feof(f1)){  // feof check end of file 
        fread(&fc, sizeof(char), 1, f1);
        fwrite(&fc, sizeof(char), 1, f2);
        printf("read char --> %d\n", fc);
    }
    fclose(f1); fclose(f2);
    
    char *env = getenv("HOME");
    if(env == NULL){
        printf("HOME env is NULL");
        return 1;
    }
    printf("get env HOME = %s\n", env);


    return 0;
}









