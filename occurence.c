#include<stdio.h>

int main(){
    
    int numbers[8] = {10, 20, 30, 20, 40, 20, 50, 10};
    int search=10;
    int fp;
    int lp;
    int fcount=0;
    int lcount=0;
    int dup=0;

    for(int i=0 ; i<8 ;i++){
       if( numbers[i]==search){
        dup++;
       }
    }
if(dup==0){
    printf("The number is not in the list");
}
else if(dup==1){
    for(int i=0; i<8 ;i++){
        if(fcount<1){
        if(numbers[i]==search){
            fp=i;
            fcount++;
            printf("The position is %d",fp);
        }
    }
    }

}
else{
    for(int i=0; i<8 ;i++){
        if(fcount<1){
        if(numbers[i]==search){
            fp=i;
            fcount++;
            printf("First position is %d",fp);
        }
    }
    }
    for(int i=7 ; i>=0 ; i--){
        if(lcount<1){
        if(numbers[i]==search){
            lp=i;
            lcount++;
            printf("\nlast position is %d",lp);
        }
    }
    }
}
return 0;
    }


