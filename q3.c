//Write a program to swap values of two int variables
#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swaping is %d %d",a,b);
    return 0;
}