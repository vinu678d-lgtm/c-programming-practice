#include <stdio.h>

int main(){
int numbers[8] = {10, 20, 10, 30, 10, 40, 20, 10};
int count=0;
int search;
int found = 0;
int sum=0;

printf("Enter the number to search : ");
scanf("%d",&search);

for(int i=0 ; i<8 ; i++){
      
    if(numbers[i]==search){
        found=1;
        count++;
    }
}
if(found==1){
    printf("%d apears %d times\n",search,count);
sum = count * search;
printf("Sum is %d",sum);
}
else{
    printf("Number not found");
}
return 0;
}