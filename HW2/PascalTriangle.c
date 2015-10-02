#include  "stdio.h"
#define  LINE  18

void triangle(){
    int  array[LINE][LINE], n;
    printf("Please  input  N(N<=18)  numbers:\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;  i<=n;  i++)    {
        for(int j=0;  j<=n;  j++){
            array[i][j]  =  0;
        }
    }
    array[0][0]  =  1;
    for(int i=1;  i<=n;  i++){
        for(int j=1;j<=n;  j++){
            array[i][j]  =  array[i-1][j-1]  +  array[i-1][j];
        }
    }

    for(int i=1;  i<=n;  i++){
        for(int j=1;  j<=n-i;  j++){
            printf("    ");
        }
        for(int j=1;  j<=i;  j++){
            printf("%5d",array[i][j]);
        }
        printf("\n");
    }
    getchar();
}
