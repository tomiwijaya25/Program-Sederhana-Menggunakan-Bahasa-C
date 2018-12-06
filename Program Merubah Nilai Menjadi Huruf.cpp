#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout<<" Merubah Nilai Menjadi Huruf "<<endl;
    cout<<endl;
    int Nilai;
    cout << " Masukan Nilai : ";cin>>Nilai;
    if ((100>Nilai)&&(Nilai>80))
    {
    cout<<"Nilai A "<<endl;
    cout<<"Baik";
    }
    else if ((79>Nilai)&&(Nilai>65))
    {
    cout<<"Nilai B"<<endl;
    cout<<"Cukup Baik";
    }
    else if ((64>Nilai)&&(Nilai>55))
    {
    cout<<"Nilai C"<<endl;
    cout<<"Cukup";
    }
    else if ((54>Nilai)&&(Nilai>40))
    {
    cout<<"Nilai D"<<endl;
    cout<<"Kurang";
    }
    else if ((39>Nilai)&&(Nilai>0))
    {
    cout<<"Nilai E"<<endl;
    cout<<"Sangat Kurang";
    }
    getch();
    }

