#include<stdio.h>

int main(){
int numbers[6] = {2, 5, 4, 7, 6, 9};
for(int i=0 ; i<6 ; i++){
      if(numbers[i]%2==0){
        numbers[i]=numbers[i]*numbers[i];
      }
      printf("%d ",numbers[i]);
}
return 0;
}