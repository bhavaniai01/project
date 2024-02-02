#include <iostream>

using namespace std;
class animal
{
public:
    void myfunction()
    {
        cout<<"this is purple";
    }

        void purplecolor()
        {


        cout<<"bubble is purple";
    }
};
//Dervied class
class lion: public animal
{
};
class tiger:public lion
{
};
 int main()
 {
     lion l;
     l.myfunction();

     .purplecolor();

     return 0;
 }

























    /*
    public:
        void dove()
   {
       string name;
       cin>>name;

      cout<<" birds name is...."<<name<<endl;



   }
};
int main()
{
    birds b;
    b.dove();
    return 0;
}











    /*
public:
    void eat()
    {
        cout<<"I can eat"<<endl;
    }
    string mycolor()
    {
        string color="pink";
        return color;
    }
};

    class dove: public birds {};
    class parrot: public dove {};


int main()
{
   birds b;
    b.eat();
    cout<<b.mycolor()<<endl;
    parrot p;
    p.eat();
    cout<<p.mycolor()<<endl;



    return 0;
}
*/
