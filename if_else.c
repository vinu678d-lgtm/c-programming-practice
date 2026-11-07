#include<stdio.h>

int main ()
{
int a , b , c ;

printf("Enter first number : ");
scanf("%d",&a);

printf("Enter second number : ");
scanf("%d",&b);

printf("Enter third number : ");
scanf("%d",&c);
{
if (a > b && a > c){
    printf("%d is greter number",a);
    if (a % 2 == 0){
        printf(" and even");
    }
    else{
        printf(" and odd");
    }
}
else if (b > a && b > c){
    printf("%d is greter number",b);
     if (b % 2 == 0){
        printf(" and even");
    }
    else{
        printf(" and odd");
    }
}

 else if (c > a && c > b){
    printf("%d is greter number",c);
     if (c % 2 == 0){
        printf(" and even");
    }
    else{
        printf(" and odd");
    }
}
}
{
    if (a > 0 && b > 0 && c > 0){
        printf("\n All numbers are even");
    }
    else if (a < 0 && b < 0 && c < 0){
        printf("\n All numbers are odd");
    }
}
{
    if (a == b && a == c){
        printf("\n Two numbers are equal ");
    }
    else if (b == c && b == a){
        printf("\n Two numbers are equal ");
    }
    else if (c == b && c == a){
        printf("\n Two numbers are equal ");
    }
}
return 0;
}

