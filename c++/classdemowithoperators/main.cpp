#include <iostream>
using namespace std;
class votingcheck
{
    public:
        void check(int age){


       if (age<=18)
        {
            cout<<"enter your age";
            cin>>age;

        cout<<"you are eligible to vote";
        }
        else{
        cout<<"your are not eligible to vote";
        }
        }
        };
        check1(int age){


       if (age>=18)
        {

        cout<<"you are eligible to vote";
        }
        else{
        cout<<"your are not eligible to vote";
        }
        }


        int main()
        {
int age;
votingcheck vc;
         cout<<"enter your age";
            cin>>age;
            vc.check(age);
'vc.'votingcheck1'(age)';


            return 0;
        }




















    /*

int a;
    int b;
    int division();
    int modules();
};
int main()
{
int a,b;
    std::cout<<"enter value a";
    std::cin>>a;
    std::cout<<"enter value b";
    std::cin>>b;
    a=a/b;
    std::cout<<"division value is....";
    std::cout<<a;
    a=a%b;
    std::cout<<"modules value is....";
    std::cout<<a;

    return 0;
}

















/*
using namespace std;
class myclass
{
public:
    myclass(){
    int a;
    int b;
    int add();

    cout <<"enter value a";
    cin>>a;
    cout<<"enter value b";
    cin >>b;
    a=a+b;
    cout <<a;
}
};
int main()
{
   myclass mc;

    return 0;
}
*/








/*addtion,subtraction,multiplication operators
int main()
{
    int a,b;
    cout<<"\n  Addtion";
    cout<<"\n Enter value a";
    cin>>a;
    cout<<"enter value b";
     cin>>b;
a=a+b;
 cout<<"\n the value of a+b is .....";
cout<<a;


    cout<<"\n  subtraction";
    cout<<"\n Enter value a";
    cin>>a;
    cout<<"enter value b";
     cin>>b;
a=a-b;
 cout<<"\n the value of a-b is .....";
cout<<a;

cout<<"\n  multipication";
    cout<<"\n Enter value a";
    cin>>a;
    cout<<"enter value b";
     cin>>b;
a=a*b;
 cout<<"\n the value of a*b is .....";
cout<<a;
return 0;
}
*/




