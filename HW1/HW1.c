/**  Delete me and Write down your name on this line
 *
 *  Problem discription:
 *      Given two input numbers, say lower and upper,  there are some numbers that cannot be divided exactly  by 7
 *      calculate the sum  of these numbers. (inclusive)
 *      For example : lower = 0, upper = 15, you should print 99 (== ( 1+ 2 +..+6+8+...+13+15 )
 *      Another example is : lower = -1, upper = 0, then you should print  -1
 *
 *      NOTE:
 *      You can NOT assume that the input are all valid
 *          i.e. you need to deal with these naughty user
 *      The user might need to play more than one time, i.e. use loop 
 */
#include<stdio.h>
int main(int argc, char** argv){
    // you might consider to use scanf() for user input
   int low = 0, up = 0;
    while(1){
        printf("please q and hit Enter to exit \n");

        do{
            printf("Please enter the lower limit ( an integer only :) ");
        }while(scanf("%d",&low) == -1 );
        

        printf("please input the upper limit, upper ==\n ");
        scanf("%d",&up);
        

        printf("the total sum of numbers between lower and upper that cannot be divided exactly by 7 is %d \n", 0);




    }


    return 0;// do not change this line
}
