#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
cout<<"Mencari Bilangan Terbesar"<<endl;
cout<<endl;
int a,b,c;
    cout<< "Masukan Bilangan Pertama = ";cin>>a;
    cout<<"Masuan Bilangan Kedua = ";cin>>b;
    cout<<"Masukan Bilangan Ketiga = ";cin>>c;
    cout<<endl;
    if  (a > b)
    {
    cout<< a <<" Bilangan Terbesar "<<endl;
    }else if  (b > c)
    {
    cout<< b <<" Bilangan Terbesar "<<endl;
    }else{
    cout<< c <<" Bilangan Terbesar "<<endl;
}
getch();
}
