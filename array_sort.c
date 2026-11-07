#include<stdio.h>

int main(){
    int numbers[6] = {40, 10, 60, 20, 50, 30};
    int temp=0;

    for (int i=0 ; i<6 ; i++){
        for(int j=i+1 ; j<6 ;j++){
            if(numbers[i]>numbers[j]){
                temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;

            }
        }
    }
        for(int i = 0; i < 6; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}