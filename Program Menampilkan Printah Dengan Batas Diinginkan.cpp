#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,n;
    cout << "Menampilkan nama sampai 30 kali" << endl;
    cout << "Masukan Angaka yang ada pilih = "; cin>>n;
    for (int a=1;a<=n;a++)
    {
        if ( a>30)
            break;
        {
            cout<<" Pagi Hari & Siang Hari "<<endl;
        }
    } cout << "\nHasil Hanya Bisa Menampilkan 30 Kali\n"<<endl;
    getch();
}
