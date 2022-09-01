/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include <stdio.h>

int main(void) {
    int number,c,d;
    printf("Enter a number: ");
    scanf("%d",&number);
    c=number/10;
    d=number%10;
    number=d*100+c;
    printf("After rotate the number %d",number);
    return 0;
}