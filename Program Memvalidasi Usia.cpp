#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    int Usia;
    system("color e");
        cout<<" Validasi Usia Manusia "<<endl;
        cout<<" ############## "<<endl;
        cout<<" Tomi Wijaya "<<endl;
        cout<<" ############## "<<endl;
        cout<<" Masukan Usia = ";
        cin>>Usia;
    if  (Usia<15)
        //jika usia kurang dari 15 tahun termasuk ank"
        cout<<" Anak-Anak "<<endl;
    if  (Usia<=57)
        //jika usia kurang dari 57 tahun termasuk Dewasa
        cout<<" Dewasa "<<endl;
    else
    //jika usia Lebih dari 58 tahun termasuk Lansia
        cout<<" Lansia ";
getch();
}
