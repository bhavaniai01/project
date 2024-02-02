#include <iostream>
using namespace std;
class Bike

{

public:
      string bike="DUKE";
      void ktm()
      {
          cout<<" welcome to DUKE"<<endl;

};
class car:
    public Bike{
public:
    string car="leno";
};
int main()
{

    car ca;
    ca.ktm();
    cout<<ca.bike + " " + ca.car<<endl;
   return 0;
}




























/*
private:
    int b=5;
public:
    int a=10;
    int printc()
    {
        int c;
        c=b;


    }
};





int main()
{
    acessspecifier as;
    cout<<as.a;
cout<<as.printc();

    return 0;




}














/*
private:
    int salary;
    public:
        void setsalary (int s)
        {

            salary= s;
        }
        int getsalary()
        {
            return salary;
        }
        int getsalaryprint()
        {
            cout<<salary;
        }




};
int main()
{
    salaryprint sp;
    sp.setsalary (500);
   cout<< sp.getsalary();
    return 0;
}
*/
