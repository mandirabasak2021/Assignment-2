//Write a program to print unit digit of a given number
#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("The unit digit of a given number is %d",x%10);
    return 0;
}
