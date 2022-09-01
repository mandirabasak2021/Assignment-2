//wap to make the last digit of the number stored in a variable as zero.
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
