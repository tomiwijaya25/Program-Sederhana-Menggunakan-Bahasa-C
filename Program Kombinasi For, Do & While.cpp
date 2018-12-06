#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int pilih;
    do{
    cout<<"1. Atas "<<endl;
    cout<<"2. Bawah "<<endl;
    cout<<"3. Bawah kiri "<<endl;
    cout<<"4. Bawah kanan "<<endl;
    cout<<"5. Selesai "<<endl;
    cout<<"Masukan Pilahan Anda:";cin>>pilih;
    switch(pilih)
        {
        case 1:
            {
            for (int i=1;i<=10;i++)
            { for (int j=1;j<=10;j++)
            if  (i+j<=11)
            cout<<"*";
            else
            cout<<" ";
            cout<<endl;
            }
            getch();
            break;
            }
        case 2:
        {
            for (int i=1;i<=10;i++)
            { for (int j=1;j<=10;j++)
            if  (i+j>=11)
            cout<<"*";
            else
            cout<<" ";
            cout<<endl;
            }
            getch();
            break;
        }
        case 3:
        {
            for (int i=1;i<=10;i++)
            { for (int j=1;j<=10;j++)
            if  (i>j)
            cout<<"*";
            else
            cout<<" ";
            cout<<endl;
            }
            getch();
            break;
        }
        case 4:
        {
            for (int i=1;i<=10;i++)
            { for (int j=1;j<=10;j++)
            if  (i<j)
            cout<<"*";
            else
            cout<<" ";
            cout<<endl;
            }
            getch();
            break;
            }
            }
            }while(pilih!=5);
            getch();
            }
