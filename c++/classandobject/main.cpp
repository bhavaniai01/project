#include <iostream>


class myfirstclass
{

public:
    int a;
    int b;
    int add()
    {

        std::cout<<(a+b);
        std::cin>>a>>b;

    }
    };

int main()
{

    int a,b;
    std::cout <<"Enter your number a\n";
    std::cin>>a;
    std::cout <<"Enter your number b\n";
    std::cin>>b;

    a=a+b;
    std::cout<<a;
    std::cout <<"\n Thank you";
    return 0;
}
