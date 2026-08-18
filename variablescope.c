#include <stdio.h>

int marks = 80;

int test(){
    int marks = 60;
    printf("Local variable = %d",marks);
}
int main(){
printf("Global variable = %d",marks);
test();
return 0;
}