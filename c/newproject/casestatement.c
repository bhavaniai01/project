#include<stdio.h>
int casestatementprogram()
{
    int a;
        printf("enter your operator");
        printf("1. Addtion\n 2. subtraction\n 3. Multiplication\n");
        scanf ("%d",& a);

        if(a > 2)
        {
        int a1,b1, operator;
        printf("enter a value");
        scanf("%d",&a1);
        printf("enter b value");
        scanf("%d",&b1);
        
        printf("select operators");
        scanf(" %c",&operator); 
        
        

        switch(operator)
        {
        case '+':
         printf("%d + %d =%d\n", a1, b1 , (a1+b1));
         break;
         case '-':
         printf("%d - %d =%d\n", a1 , b1 , (a1-b1));
         break;
         case 3:
         printf("%d * %d =%d\n", a1 , b1 , (a1*b1));
         break;
         
        }
    }
    else
    {
        int a1,b1,c1,operator;
    printf ("enter a1 value \n");
    scanf("%d",&a1);
    printf ("enter value b1");
    scanf("%d",&b1);
    printf ("enter value c1");
    scanf("%d",&c1);    
    printf ("select operators");
    scanf("%d",&operator);
    

   switch(operator)
   {
    case 1:
     printf("%d + %d =%d\n", a1, b1,c1, (a1+b1+c1));
     break;
     case 2:
     printf("%d - %d =%d\n", a1, b1,c1, (a1-b1-c1));
     break;
     case 3:
     printf("%d * %d =%d\n", a1,b1,c1, (a1*b1*c1));
     break;
     }
    }
    return 0;
}
