//Write a program to input a three-digit number and display the sum of the digits

#include <stdio.h>
int main(void) {
    int  three_digit,first,second,third;
    printf("Enter a three digit number: ");
    scanf("%d",&three_digit);
    third = three_digit%10;
    second = three_digit/10%10;
    first = three_digit/100;
    printf("you enter: %d\nAnd the sum of all digits is: %d\n\n",three_digit,third+second+first);
    return 0;
}