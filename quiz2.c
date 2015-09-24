#include <stdio.h>

void swap(int, int);

main() {
  int num1 =2294967292, num2 = 2493499392;
  printf("num1 == %d and num2 == %d \n",num1,num2);
  swap(num1, num2);
  printf("num1 = %d and num2 = %d\n", num1, num2);
}

void swap(int a, int b) {
    a=a+b;
    printf("the new value of a is %d \n",a);
    b=a-b;
    a=a-b;
}
             
