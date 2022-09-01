# Assignment-2
//1. Write a program to print unit digit of a given number
#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("The unit digit of a given number is %d",x%10);
    return 0;
}
//2. Write a program to print a given number without its last digit.
#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("a given number without last digit is %d",x/10);
    return 0;
}
//3. Write a program to swap values of two int variables
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
//4. Write a program to swap values of two int variables without using a third variable

#include <stdio.h>

int main(void) {
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping is %d %d",a,b);
    return 0;
}
//5. Write a program to input a three-digit number and display the sum of the digits

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
//6. Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    printf("you enter: %c\nIts ASCII code is: %d\n\n",ch,ch);
    return 0;
}
/*8. Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    x%2==0?printf("even no"):printf("odd no");
    return 0;
}
//9. Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>

int main(void){

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    printf("%d", sizeof(double));
    return 0;
}
//10. wap to make the last digit of the number stored in a variable as zero.
//(Ex-if x=2345 then make it x=2340).

#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("now x value is %d",x);

    return 0;
}
//11. wap to make the last digit of the number stored in a variable as zero.
//(Ex-if x=2345 then make it x=2340).

#include <stdio.h>

int main(void) {
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("now x value is %d",x);

    return 0;
}
/*13. Write a program to take a three-digit number from the user and rotate its digits by
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
