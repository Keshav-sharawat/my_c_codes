#include<stdio.h>
int main()
{
    char spell;
    printf("Please enter the character=");
    scanf("%c",&spell);
    if(spell=='a'||spell=='A')
    {
       printf("\n Given character is a vowel");
    }
    else
    {
       if(spell=='e'||spell=='E')
       {
         printf("\n Given character is a vowel");
       }
       else
       {
        if(spell=='i'||spell=='I')
        {
          printf("\n Given character is a vowel");
        }
        else
        {
        if(spell=='o'||spell=='O')
        {
           printf("\n Given character is a vowel");
        }
        else
        {
            if(spell=='u'||spell=='U')
            {
              printf("\n Given character is a vowel");
            }
            else
            {
              printf("\n Given character is a consonant");
            }
        }
       }
    }
}
    return 0;
}