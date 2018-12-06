#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout << "Mencari Bentuk Zat Beku Atau Tidak" << endl;
    int a;
    //menghitung sebuah zat
    cout<<"Masukan drajat benda = "; cin>>a;
if (a<0)
    //jika a kurang dari 0 maka tergolong zat beku
    cout<<"Suhu = "<<a<<" (Maka Zat Beku)"<<endl;
    else if (a>100)
    //jika a lebih dari 100 maka tergolong zat Gas
    cout<<"Suhu = "<<a<<" (Maka Zat Gas)"<<endl;
    else
    //dan jika a tida kurang dari 0 dan tidak lebih dari 100 maka tergolong zat Cair
    cout<<"Suhu = "<<a<<" (Maka Zat Cair)"<<endl;
    getch();
}
