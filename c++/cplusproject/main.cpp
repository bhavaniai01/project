#include <iostream>


using namespace std;

int main()
{
    int a,b,total,op;
    cout << "Enter value a";
    cin >> a;
    cout << "Enter value b";
    cin >> b;
    cout << "Enter operator";
    cin >> op;

   switch(op)



   case 1:

{


       total=a+b;
    cout << "\n added value of a and b"<<total;
    break;

   case 2:

      total=a-b;
        cout << "\n subtract value of a and b"<<total;
        break;

   case 3:
    total=a*b;
    cout << "\n multiple value a and b"<<total;
    break;
   case 4:
    total=a/b;
    cout << "\n division of value a and b"<<total;
    break;
   case 5:
    total=++a;
    cout <<"\n increment of value a"<<total;
    break;
   case 6:
       total=--b;
    cout << "\n decrement of value b"<<total;
    break;


}

    return 0;
}
