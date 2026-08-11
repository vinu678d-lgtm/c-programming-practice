#include <stdio.h>

float average(int a, int b, int c){

     return (a+b+c)/3;
}
int main() {

    float ans;
    ans = average(25,8,12);
    printf("%.2f",ans);
    return 0;
}