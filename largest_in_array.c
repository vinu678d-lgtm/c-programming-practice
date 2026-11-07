#include<stdio.h>
int main(){

    int numbers[6] = {10, 70, 20, 80, 40, 60};
    int largest = 0;
    int seclargest = 0;

    for(int i=0 ; i<=5 ; i++){

        if(largest < numbers[i]){
            largest=numbers[i];
        }
    }
  for(int i=0 ; i<=5 ; i++){
    if(largest != numbers[i]){
    

        if(seclargest < numbers[i]){
            seclargest=numbers[i];
        }
    }
  }
    printf("%d",seclargest);
    return 0;
}