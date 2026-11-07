#include <stdio.h>

int main()
{
int n=145;
int fact=1;
int digit;
int newfact=0;

while(n>0){
    digit = n%10;
    fact = 1;
    while(digit>0){
        fact = fact*digit; //
        digit--;
    }
    newfact = newfact + fact;
    n = n/10;
}
printf("%d",newfact);
    return 0;
}