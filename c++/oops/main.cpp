#include <iostream>

using namespace std;

int main()
{
   string firstname;
   string lastname;
   cin>>firstname>>lastname;
   cout<< firstname+ " "+lastname<<endl;
   firstname.push_back (' ');
    firstname.insert(0,"R .");
   cout<<firstname<<endl;
   string fullname=firstname.append(lastname);
   cout<<fullname<<endl;
   cout<<firstname<<endl;

    string fname=lastname.append(firstname);
    cout<<fname<<endl;



   return 0;
}














    /*
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<name<<endl;
    fflush(stdin);
    cout<<"Enter your name"<<endl;
    getline(cin,name);
    cout<<name<<endl;

    return 0;
}
*/
