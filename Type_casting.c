#include<stdio.h>
int main (){
    int total_marks , no_of_subjects;

    printf("Enter total marks : ");
    scanf("%d",&total_marks);

    printf("Enter Number of Subjects : ");
    scanf("%d" ,&no_of_subjects);

    float average = ((float)total_marks/no_of_subjects);

    printf("%.2f average",average);

    return 0;

}