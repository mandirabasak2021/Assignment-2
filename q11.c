//wap  to input  number from the user and also input a digit .Append a digit in the number and print the resulting number.
//(ex- number=234 and digit =9 then the resulting number is 2349).
#include <stdio.h>

int main(void) {
    int number,digit;
    printf("enter a number:\n ");
    scanf("%d",&number);
    printf("enter a digit:\n ");
    scanf("%d",&digit);
    number=number*10;
    number=number+digit;
    printf("Then the resulting number is %d",number);
    return 0;
}
