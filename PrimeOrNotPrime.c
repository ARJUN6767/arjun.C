// Name:Arjun more PRN:24030331378012

#include<stdio.h>
int main()  
{
    int num, rem, i, check = 0;
    printf("Enter The Number: ");  
    scanf("%d", &num);
    for(i = 2; i < num; i++)  
    {
        rem = num % i;
        if(rem == 0)
        {
            check = 1;       
        }
    }
     if(num <= 1) 
    {
        check = 1;  
    }
    if(check == 0)
    {
        printf("Prime");  
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}