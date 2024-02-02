#include <iostream>
using namespace std;
void add (int a, int b)
        {
            cout<<"added value... "<<(a+b)<<endl;
        }
void sub(int c, int d)
        {
            cout<<"subtract value...."<<(c-d)<<endl;
        }
        void divide(float a, float b)
        {
            cout<<"divide value...."<<(a/b)<<endl;
        }
        void string1(string d)
        {
            cout<<"string value...."<<(d)<<endl;
        }
        void modules( int a , int b)
        {
            cout<<"modules value...."<<(a%b)<<endl;

        }
         void increment( int a)
        {
            cout<<"increment value...."<<(++a)<<endl;

        }


int main()
{

      add(10,1);
      sub(9,6);
      divide(10.1f,2.9f);
      string1("bhavani");
      modules(35,5);
      increment(22);

    return 0;
}























        /*
        //functionoverloading;
        int welcome()
        {
            cout<<"enter your name";
            string name;
            cin>>name;
            cout<<"Hi...."<<name<<endl;
        }
};
int main()
{


functionoverloading fod;
fod.welcome();

return 0;
}






















        //constructor;
        /*
        constructor()
        {


            cout<<"enter your name";
            string name;
            cin>>name;
            cout<<"Hi...."<<name<<"welcome to page";
        }
        };
        int main()
        {


      constructor co;
        return 0;
        }





















        /*

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




