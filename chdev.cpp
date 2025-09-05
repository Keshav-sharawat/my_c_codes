#include<stdio.h>
main()
{
	int a,b,c,d,e,num,choice;
	 printf("1. Sum of 1st and 4th digit\n");
    printf("2. Sum of 2nd and 3rd digit\n");
    printf("3. Another 1st and 3rd calculation\n");
    printf("4. Sum of all digits\n");
    printf("5. Sum of 2nd and 4th digits\n");
    printf("6. exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
	
	switch(choice){
		case 1:
				printf("Enter a 4 digit number: ");
			scanf("%4d",&num);
a = num%10;
b=num/1000;
c=a+b;
printf("sum of first and last digit is: %d",c);
     break;
     case 2:
     		printf("Enter a 4 digit number: ");
    scanf("%4d",&num);
     
     num = num/10;
     a = num %10;
     num = num/10;
     b= num%10;
     
     c=a+b;
    printf("the sum of 2nd and 3rd digit is: %d",c);
      break;
      case 3: 	printf("Enter a 4 digit number: ");
scanf("%4d",&num);

num = num/10;
a = num%10;
b= num/100;

c= a+b;
printf("sum of first and third digit is: %d",c);
break;
case 4:
		printf("Enter a 4 digit number: ");
scanf("%4d",&num);

a= num%10;
num = num/10;
b= num%10;
num = num/10;
c= num%10;
num = num/10;
d= num%10;
e = a+b+c+d;
printf("sum of all digit is: %d",e);
break;
 
 case 5:
 	
printf("Enter a 4 digit number: ");
scanf("%4d",&num);

a = num%10;
num = num/100;
b = num%10;

c= a+b;
printf("sum of second and last digit is: %d",c); 

case 6:
	printf("Thankyou!");
	break;

	}
	return 0;
}

