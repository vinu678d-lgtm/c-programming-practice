#include <stdio.h>
#include <string.h>

void birthday(char name[20] , int age)
{
printf("\nHappy birthday to you %s", name);
printf("\nHappy birthday to you %s", name);
printf("\nHappy birthday to you %s", name);
printf("\nHappy birthday to you %s", name);
printf("\nYou are %d years old ",age);
}
int main()
{
  char name[20];
  int age ;
  printf("Whats your Name : ");
  fgets(name,sizeof(name),stdin);
  name[strlen(name) -1 ] = '\0';
  printf("Enter your age : ");
  scanf("%d" , &age);

  birthday(name,age);

    return 0;
}

