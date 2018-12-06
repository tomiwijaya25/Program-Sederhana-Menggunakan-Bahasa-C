#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
cout<<"Mencari Bilangan Terkecil"<<endl;
cout<<endl;
int a,b,c;
    cout<< "Masukan Bilangan Pertama = ";cin>>a;
    cout<<"Masuan Bilangan Kedua = ";cin>>b;
    cout<<"Masukan Bilangan Ketiga = ";cin>>c;
    cout<<endl;
    if  (a < b)
    {
    cout<< a <<" Bilangan Terkecil "<<endl;
    }else if  (b < c)
    {
    cout<< b <<" Bilangan Terkecil "<<endl;
    }else{
    cout<< c <<" Bilangan Terkecil "<<endl;
}
getch();
}
