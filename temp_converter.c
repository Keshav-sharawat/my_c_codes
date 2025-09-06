#include <stdio.h>
#include <stdlib.h>
float cel_to_ferh(float var);
float ferh_to_cel(float var);
float var;
int main()
{
    int choice;
    do
    {
        printf("Enter the Choice : \n 1.Celsius to Fahrenheit:    2.Fahrenheit to Celsius:  3. Exit \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the temp to be converted: \n");
            scanf("%f", &var);
            printf("The %.2f Celsius in fahrenheit is =%.2f \n", var, cel_to_ferh(var));
            break;
        case 2:
            printf(" Enter the temp to be converted: \n");
            scanf("%f", &var);
            printf("The %.2f fahrenheit in Celsius is= %.2f \n", var, ferh_to_cel(var));
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Enter a valid choice");
            break;
        }
    } while (choice != 3);
    return 0;
}
float cel_to_ferh(float var)
{
    var = (((9.0 / 5.0) * var) + 32.0);
    return var;
}
float ferh_to_cel(float var)
{
    var = ((5.0 / 9.0) * (var - 32.0));
    return var;
}