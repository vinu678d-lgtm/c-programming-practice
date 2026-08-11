#include <stdio.h>

void electricity(int units) {
    int bill ;
 if (units <= 100 && units > 0) {
  bill = units * 5;
  printf("Bill : %d" , bill);
 }
 else if(units > 100 && units <= 200 ) {
    bill = units * 7;
    printf("Bill : %d" , bill);
 }
    else {
        bill = units * 10;
        printf("Bill : %d" , bill);
    }

 }
int main () {
    electricity(24);
    return 0;
}