#include<stdio.h>
#define max(a,b)(a>b?a:b)

int main(int argc, char **argv){
  int x = '0';
    char c1, c2, *p;
    c1 = 'd';
    p = &c1;
    c2=*p;
    printf("c1 == %c \n ",c1);
    printf("c2 == %c \n",c2);
    printf("%c\n ",*p);
    
    int a = max(2,3);
    printf("%d \n", a);

    int j ;
    int *ptr;
    ptr = &j;
    printf("value of j == %d \n",j);

    ptr = 4444;
    printf("value of j == %d \n", j);
    j = *ptr;
    printf("j == %d \n" , j);

}
