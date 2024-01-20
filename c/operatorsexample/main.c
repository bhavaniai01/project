


#include <stdio.h>

int main()
{
    int a=20;
    int b=10;
    float c;
    additionprogram(a,b);
    subtractionprogram(a,b);
    //multiplicationprogram(a,b);
    divisionprogram(a,b);
    modulusprogram(a,b);
    greaterprogram(a,b);
    addprogram(a,b);
    locationprogram(a,b);
    Incrementprogram(a,b);
    logicalprogram(a,b);
    return 0;
}
int additionprogram(int a,int b)
{
    int c=a+b;
    printf("Added value is a+b  is: %d",c);
}

int subtractionprogram(int a,int b)
{
    int c=a-b;
    printf("\nSubtracted value for c is:%d",c);
}
//int multiplicationprogram(int a, int b);
//{
    //int c=a*b;
    //printf("\nMultiplicated value for c is:%d",c);
//}/*
int divisionprogram(int a,int b)
{
    float c=(float) a/b;
    printf("\nDivided value for z is:%f",c);
}
int modulusprogram(int a,int b)
{
    int c=a%b;
    printf("\nModulus value for c is:%d",c);
}
int greaterprogram(int a,int b)
{
    if (a>b)
    {
        printf("\na is greater than b");
    }
    else
    {
        printf("\na is less than b");
    }
}
int addprogram(int x,int y)
{
    for (x=0;x<10;x++)
    {
        printf("\nEnter the value of x:%d",x);
    }
    for (y=10;y>5;y--)
    {
        printf("\nEnter the value of y:%d",y);
    }
}
int locationprogram(int x,int y)
{
    switch (x)
    {
    case 1:
        printf("\nMy location is Trichy");
        break;
    case 2:
        printf("\nMy location is Chennai");
        break;
    default:
        printf("\nNo available location");
    }
}
int Incrementprogram(int x,int y)
{
    while (x<10)
    {
        printf("\nEnter the value of x:%d",x);
        x++;
    }
}

int logicalprogram(int x,int y)
{
    printf("\nEnter the value:%d",(x<30 && y<20));
    printf("\nEnter the value:%d",(x<10 || y<10));
}



