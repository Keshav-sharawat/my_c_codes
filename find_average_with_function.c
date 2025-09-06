// find_average_with_function.c
#include <stdio.h>
// function declaration
float average();
// global variable declaration
int i, sub, a[100];
float avg = 0;
int main()
{
    // askng no of subjects
    printf("Enter the number of subjects:");
    scanf("%d", &sub);
    printf("Enter the Marks out of 100:");
    for (i = 0; i < sub; i++)
    {
        scanf("%d", &a[i]); // entering marks in array
    }
    printf("The marks are:\n");
    for (i = 0; i < sub; i++)
    {
        printf("\n Subject no =%d marks=%d ", i + 1, a[i]); // showing marks array
    }
    average();

    return 0;
}
float average() // funciton defination
{
    avg = 0;
    for (i = 0; i < sub; i++)
    {
        avg = avg + (a[i]);
    }
    avg = avg / sub;
    printf("\n The average is=%f ", avg);
    return avg;
}