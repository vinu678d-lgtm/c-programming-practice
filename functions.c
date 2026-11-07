#include <stdio.h>

int largest(float a , float b , float c)
{
    
   if (a > b && a > c ){
    printf("%.2f is largest" , a);
   }
   else if (b > a && b > c ){
    printf("%.2f is largest" , b);
   }
else {
    printf("%.2f is largest" , c);
   }

}
int main (){

    largest(5.11,4,5);
    return 0;
}