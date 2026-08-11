#include <stdio.h>

int main()
{
    int age;
    char citizen;
    char voterid;

    printf(" Enter your age : ");
    scanf("%d" , &age);
     if (age >= 18){
        printf("Are you citizen of india (Y for Yes, N for No) : ");
        scanf(" %c" , &citizen);
        if(citizen == 'Y'){
            printf("Are you having voter ID (Y for Yes, N for No) Rules: ");
            scanf(" %c" , &voterid);
            if(voterid == 'Y'){
                printf("Congratulations your Eligible to vote \n");
            }
            else if(voterid == 'N') {

                printf("You dont have Voter ID");
                }
                else{
                    printf("Invalid input ");

                }
            }
            
             else if(citizen == 'N'){
                printf("Your not a citizen of India");
            }
            else{
                printf("Invalid input");
            }
        }
        


     
     else {
        printf("Your underage");
     }
}


