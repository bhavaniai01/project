#include <iostream>

using namespace std;

int main()
{
    int a=10; float b=1.5f; string c="Bhavani";
    cout << "value of a" <<a << endl;

    cout << "\n Address of a "<<&a << endl;

cout << "\n size of int " << sizeof(int)<< endl;
int *p=&a;


   cout<<"value of p" <<p <<endl;
   cout<<"address of p"<< &p << endl;
   cout<<"value stored in the address of p" << &p << endl;




cout << "value of b" <<b << endl;

    cout << "\n Address of b " <<&b << endl;

cout << "\n size of float " << sizeof(float)<< endl;





cout << "value of c"<<c << endl;

    cout << "\n Address of c "<<&c << endl;

cout << "\n size of char " << sizeof(char)<< endl;



    return 0;
}
