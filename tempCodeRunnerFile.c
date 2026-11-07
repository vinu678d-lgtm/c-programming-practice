#include <stdio.h>

int main (){

    int age , choice ;

    printf("Enter your age : ");
    scanf("%d",&age);
    if(age >= 18){
    printf("Enter choice 1 if you have DL or choice 2 for not having DL : ");
    scanf("%d",&choice);

    if (age >= 18){

        if(choice == 1){
            printf("Can drive");
            if(age >= 60){
    printf("Can drive, senior driver");
    }
        }
        else {
            printf("Cannot drive without license");
        }
    }
    
    
}
else {
        printf("Underage");
    }
    return 0;
}