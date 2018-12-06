#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout<<" Menentukan Kuadran "<<endl;
    int x,y;
    cout << "Masukan Nilai X =";cin>>x;
    cout << "Masukan Nilai Y =";cin>>y;
    cout<<endl;
    cout<<" Koordinat Titik (x,y) =" <<x<<" "<<y<<endl;{
    if (x>0 && y>0){
    cout<<" Kuadran 1 "<<endl;
    }else if ( x<0 && y>0){
    cout<<" Kuadran 2 "<<endl;
    }else if ( x<0 && y<0){
    cout<<" Kuadran 3 "<<endl;
    }else{
    cout<<" Kuadran 4 "<<endl;}
    cout<<endl;
    cout<< "|";
    cout<< "|";
    cout<< "Kuadran 2 | Kuadran 1";
    cout<< "|";
    cout<< "|";
    cout<<endl;
    cout<<"----------------------";
    cout<<endl;
    cout<< "|";
    cout<< "|";
    cout<< "Kuadran 3 | Kuadran 4";
    cout<< "|";
    cout<< "|";
    }getch();}
