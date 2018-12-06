#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    cout<<"Program inner & outer looping";
    cout<<endl;
{
    for (int a=1;a<=10;a++){
    for ( int b=1;b<=10;b++){
        cout<< a << "-" << b << "=";
        cout<< a - b <<"\t";
    }
    cout<<endl;
    }
    cout<<endl<<endl;
}
{
cout<< "Program continue";
cout<<endl;
{
    for ( int a=1;a<=10;a++)
    {
        if (a == 4)
        {
            continue;
        }
        cout<< a <<"\n";
    }
    cout<<endl;
}
getch();
}
}
