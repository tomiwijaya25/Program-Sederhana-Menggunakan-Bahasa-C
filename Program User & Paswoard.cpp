#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color b");
    cout << "User Name" << endl;
    cout << "###################" << endl;
    cout << "Tomi Wijaya" << endl;
    cout << "###################" << endl;
string user,pass;
    cout << "Login User HP : ";
    cin >> user;
    cout << "Login Pass HP : ";
    cin >> pass;
    if( user=="Tommy"&&pass=="1933")
        cout<<"Login Sukses";

        else
        cout<< "Login Tidak Sukses";
        getch();
}
