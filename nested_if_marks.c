#include <stdio.h>

int main()
{
    int marks ;

    printf("Enter your marks : ");
    scanf("%d" , &marks);

     if (marks > 100){

            printf("Invalid Marks !!!");
            return 0;
            }
      
    if( marks >= 35 ) {
        if (marks >= 75 ) {
            printf("Distinction");
        }
            else {

                printf("Pass");
    
            }
        }
         
            else {
                printf("Fail");
            }
            return 0;
            
        }

