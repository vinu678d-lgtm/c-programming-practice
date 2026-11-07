#include<stdio.h>

int main (){

    int a , b;
    
    printf("Enter the first number: ");
    scanf("%d" , &a);

    printf("Enter the second number: ");
    scanf("%d" , &b);

    printf("Addition %d\n",a+b);
    printf("Subtraction  %d\n",a-b);
    printf("Multiplication %d\n",a*b);
    printf("Division %d\n",a/b);
    printf("Reminder %d\n",a%b);

    if(a>b){
        printf("%d is greater than %d\n",a,b);
    }
    else{
        printf("%d is greater than %d\n",b,a);
    }
    return 0;
}
