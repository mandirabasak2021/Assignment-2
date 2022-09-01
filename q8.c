/*Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    x%2==0?printf("even no"):printf("odd no");
    return 0;
}