//Write a program to print a given number without its last digit.
#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("a given number without last digit is %d",x/10);
    return 0;
}