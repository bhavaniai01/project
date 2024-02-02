#include <stdio.h>
#include <stdlib.h>

int main()
{


    float a=1.1f; int b=10; char c[20];
printf("float \t\n\n");
    printf("value of a: %f \t\n ", a);
    printf("Address of a: %p \t\n",a);
    printf("size of float : %p \t\n\n", sizeof(float));
     int *p=&a;
     printf("value of p: %f \t\n",p);
      printf("Address of p: %p\t\n",&p);
      printf("value stored in the address of p: %d \t\n",p);


printf("int \t\n\n");
     printf("value of b: %d \t\n ", b);
    printf("Address of b: %d \t\n",&b);
    printf("size of int : %d \t\n", sizeof(int));
     int **q=&a;
     printf("value of p: %d \t\n",p);
      printf("Address of p: %d \t\n",&p);
      printf("value stored in the address of p: %d \t\n",p);

       printf("value of c: %s \t\n ", c);
scanf("%s",c);
    printf("Address of c: %p \t\n",&c);
    printf("size of char : %d \t\n\n", sizeof(char));

    return 0;
}
