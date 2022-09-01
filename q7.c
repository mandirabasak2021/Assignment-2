//Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main(void){
    printf("Enter your bit: ");
    int lsb ;
    scanf("%d",&lsb);
     printf("your first bit is on: %d\n(n&~(n-1)) (lsb));
     printf("your total bit is: %d\n",lsb_total(lsb));
    return 0;
}