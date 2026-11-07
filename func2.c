#include <stdio.h>

int value = 10;
void change(int value);

int main(){
    if(1){
       int value = 30;
        printf("Inside if block: %d\n",value);
    } 
    printf("Inside main: %d\n",value);
    change(value);
    return 0;
}
void change(int value)
{
    
 printf("Inside change: %d\n",value);
}

