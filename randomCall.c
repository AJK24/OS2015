#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char *names[] ={ "Andrew", "Connor", "Daniel Amador","Daniel Davis","Gabe","Griffin","Kyle","Luke","Phillip","Ryan","Troy","William"};
    printf("Today's call sequence is as follows: \n");
    srand(time(NULL));
    char tmp=0;
    int i=0;
    for(i =0;i<15;i++){
        printf(" %s \n",names[rand()%12]);
        scanf("%c",&tmp);   
    }
}
