#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    int a,n,pilih;
    do{
        cout<<endl;
            cout<<"Tomi Wijaya"<<endl;
    cout << "Menentukan suatu bilangan" << endl;
    cout<<"1. Penjumblahan "<<endl;
    cout<<"2. Pengurangan "<<endl;
    cout<<"3. Perkalian "<<endl;
    cout<<"4. Pembagian "<<endl;
    cout<<"5. Selesai "<<endl;
    cout<<"Masukan Pilihan Anda =";cin>>pilih;
    cout<<endl;
    switch(pilih)
    {
case 1:
    {
        cout<<" Penjumblahan "<<endl;
        cout<< "Masukan Bilangan Pertama = ";cin>>a;
        cout<< "Masukan Bilangan Kedua = ";cin>>n;
    {
        int b=a+n;
        cout<< "Hasilnya adalah = ";
        cout<< ("\n Hasil Bilangan = ",b)<<endl;
    }
    getch();
    break;
    }
    case 2:
    {
        cout<<" Pengurangan "<<endl;
        cout<< "Masukan Bilangan Pertama = ";cin>>a;
        cout<< "Masukan Bilangan Kedua = ";cin>>n;
    {
        int b=a-n;
        cout<< "Hasilnya adalah = ";
        cout<< ("\n Hasil Bilangan = ",b)<<endl;
    }
    getch();
    break;
    }
    case 3:
    {
        cout<<" Perkalian "<<endl;
        cout<< "Masukan Bilangan Pertama = ";cin>>a;
        cout<< "Masukan Bilangan Kedua = ";cin>>n;
    {
        int b=a*n;
        cout<< "Hasilnya adalah = ";
        cout<< ("\n Hasil Bilangan = ",b)<<endl;
    }
    getch();
    break;
    }
    case 4:
    {
        cout<<" Pembagian "<<endl;
        cout<< "Masukan Bilangan Pertama = ";cin>>a;
        cout<< "Masukan Bilangan Kedua = ";cin>>n;
    {
        int b=a/n;
        cout<< "Hasilnya adalah = ";
        cout<< ("\n Hasil Bilangan = ",b)<<endl;
    }
    getch();
    break;
    }
}
    }while(pilih!=5);
    getch();
}
