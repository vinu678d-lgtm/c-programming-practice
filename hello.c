#include <stdio.h>
#include <string.h>

int main()
{
   char name[30] = "";
   float price = 0.0f;
   int items = 0;
   float total = 0.0f;

    printf("Enter the Name of the item you have purchased : ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter the price of the %s : ",name);
    scanf("%f",&price);
    printf("What is the quantity of the iteam : ");
    scanf("%d",&items);
    total=price*items;
    printf("BILLING SUMMARY\n");
    printf("You have bought %d %s\n",items,name);
    printf("The total price of the item is : $%.2f",total);
    return 0;
}