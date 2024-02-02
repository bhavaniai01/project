#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;
    float d;


printf(" enter  the value a");
scanf("%d",&a);
printf("enter the value b");
scanf("%d",&b);
    addition(a,b);
    subtraction(a,b);
    mutiple(a,b);
    division(a,b);
    modules(a,b);
    increment(a,b);
    decrement(a,b);
    greaterthan(a,b);
    whilests(a,b);
     intstruct(a,b);

    return 0;

}
int addition (int a , int b)
{


int c;
   c=a+b;
printf( "\n add the value a+b is %d",c);
}
int subtraction ( int a , int b)
{


    int c;
    c=a-b;
    printf(" \n subtract the value a-b is %d",c);

}
int mutiple ( int a , int b)
{
    int c;

    c=a*b;
    printf("\n mutiple the value a*b is %d",c);

}
int division(int a,int b)
{

    float d=(float)a/b;
    printf("\n divide the value a/b is %f",d);
}
int modules( int a,int b)
{

    int c;
    c=a%b;
   printf("\n modules the value a%b is %d",c);

}
int increment(int a)
{
    while(a<20)
    {
   printf("\n increment value is %d",a);
    a++;

    }
}
int decrement(int b)
{

    while(b<15)
    {

    printf("\n decrement value is %d",b);
        b++;
    }
}
 int greaterthan  (int a, int b)
{

    if(a>b)
    {

        printf("\n a is greater than b %d");
    }
    else
    {

        printf("\n a is less than b %d");
    }
}
int whilests (int a, int b)
{
    while(a>b)
    {
        printf("\n while value is  %d",a);
        return 0;

    }
}
struct structure
{
    int myvalue;
    char myletter;
};
{
    struct structure f;
    f.myvalue;
    f.myletter;

    printf("\n myvalue is..%d",f.my value);
    printf("\n myletter is..%d",f.myletter);
    adition(f.myvalue,f.myletter);

}

