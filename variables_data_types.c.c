#include<stdio.h>
#include<string.h>

int main()
{
    int age;
    char name[20];
    char city[20];

    printf("Enter the age of the user : ");
    scanf("%d",&age);
    getchar();

    printf("Enter the name of the user : ");
    fgets(name , sizeof(name) , stdin);
    name[strcspn(name,"\n")]='\0';

    printf("Enter the name of the city : ");
    fgets(city , sizeof(city) , stdin);
    city[strcspn(city,"\n")]='\0';  

    printf("User age : %d\n",age);
    printf("User name : %s\n",name);
    printf("User city : %s\n",city);

    return 0;

}