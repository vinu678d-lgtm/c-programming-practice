#include <stdio.h>
#include <string.h>

int main (){
   char opp[10];
   int a,b;

   printf("Enter the operation : ");
   fgets(opp,sizeof(opp),stdin);
   opp[strcspn(opp,"\n")]='\0';

   printf("Enter first number :");
   scanf("%d",&a);
   printf("Enter second number :");
   scanf("%d",&b);


   if(opp == "add"){
     "add" == 1;
   }
   else if(opp == "sub"){
     "sub" == 2;
   }
   else if(opp == "mul"){
     "mul" == 3;
   }
else if(opp == "div"){
     "div" == 4;
   }
else {
    printf("Invalid");
}

switch ('opp') 
{
    case 1:
    printf("%d",a+b);
    case 2:
    printf("%d",a-b);
    case 3:
    printf("%d",a*b);
    case 4:
    printf("%d",a/b);
}

    return 0;
}