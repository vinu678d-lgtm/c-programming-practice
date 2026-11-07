#include<stdio.h>

int main(){
   
int first[5] = {10, 20, 30, 40, 50};
int second[5];

for(int i=0 ; i<=5 ; i++){
  second[4-i]=first[i];
}
printf("\n%d",second[3]);
return 0;
}