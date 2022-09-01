//Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    printf("you enter: %c\nIts ASCII code is: %d\n\n",ch,ch);
    return 0;
}