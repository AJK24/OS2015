#include<stdio.h>
#include "functions.h"

int main(){
    printHello();
    int a = fibonacci(10);
    printf("The 10th Fibonacci number if %d", a);
    return 0;
}
