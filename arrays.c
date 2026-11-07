#include<stdio.h>

int main(){
    int numbers[8] = {10, 20, 30, -40, -40, -40, 50, 30};
    int count = 0;

    for (int i=0 ; i<8 ; i++){
for(int j=i+1 ; j<8 ; j++){
    if(numbers[i]==numbers[j]){
        count++;
printf("%d is a duplicte number\n",numbers[j]);

    }
}

    }
printf("%d numbers has been repeated \n",count);
    return 0;
}