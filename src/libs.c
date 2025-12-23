/*
 * =====================================================================================
 *
 *       Filename:  libs.c
 *
 *    Description: libraries of c standard libs, list all  
 *
 *        Version:  1.0
 *        Created:  07/11/2022 05:27:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  eron (), wangyulong.eron@gmail.com
 *   Organization:  eron visual studio
 *
 * =====================================================================================
 */

#include <stdio.h>  // 标准io库 包含控制台输入输出
// printf scanf getchar putchar=单个字符操作 gets()=fhets()旧版本废除  puts() fputs 
#include <string.h>  // strcpy strcat strcmp strlen 字符串相关 
#include <assert.h>  // 宏 assert断言 
#include <ctype.h>  // 字符处理函数 isalnum isalpha isdigit issupper isspace 
#include <errno.h>  // 错误码宏 
#include <float.h>  // 浮点类型的宏 FLT_ROUNDS FLT_RADIX FLT_MAX DBL_MAX 
#include <inttypes.h>  // 提供对stdint 输出的支持 
#include <stdint.h>  // 固定宽度的整数类型 int8_t int64_t 
#include <iso646.h>  // 常见运算符的替代拼写 如 and=&& bitand=& or=|| xor=^ xor_eq=^=
#include <limits.h>  // 定义各种整数类型 如int最大值等 INT_MAX,INT_MIN 
#include <locale.h>  // 数字格式 货币格式 字符集 localeconv() 获取当前格式的详细信息 
#include <math.h>  // 数学函数 pow(double x, double y) powf(float x, float y) powl(long double x, long double y)
// 三角函数 sin cos tan 双曲函数 cosh tanh sinh 等 指数函数 exp() log() 
// modf 提取一个数的整数和小数部分 round 四舍五入 trunc 截取浮点数的小数部分 
// ceil floor 向上/向下取舍 fmod 浮点数计算余数的版本 
// 浮点数比较函数 isgreater isless 
#include <signal.h>  // 信号处理的工具 系统与程序之间的信号量 signal(SIGINT, handler) 信号不同的处理函数 raise(SIGINT) 发出信号触发handler函数 
#include <stdlib.h> // 类型别名宏 NULL定义 size_t 定义 wchar_t 定义等 atoi 字符串转换成int类型函数 atof atol atoll 等函数 
// rand 函数 srand函数=伪随机函数，根据seed生成，一般默认时间作为seed 
// 内存管理函数 malloc realloc calloc free 释放内存 
// qsort 排序函数 bsearch() 二分搜索 
#include <time.h>  // time_t 事件类型 tsruct tm保存时间的各个部分  time() 获取当前事件 ctime 转换成字符串 char* ctime( time_t const * time_value ); 
#include <wchar.h>  // 款字符宏的定义 多字节字符 
#include <wctype.h>  // 对ctype函数宽字符方法函数 towlower towupper 



int main(int argc, char *argv[]){
    printf("Hello World !\n");
    for(int i = 0; i < argc; i++){
        printf("arg %d : %s\n", i, argv[i]);
    }


    return 0;
}







