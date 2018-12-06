#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color e");
    cout << "Menentukan Nilai Ujian" << endl;
    cout << "--------------------------" << endl;
    cout << "Tomi Wijaya" << endl;
    cout << "--------------------------" << endl;

    int Nilai;
    cout<<"Masukan Nilai Ujian : ";
    cin>>Nilai;
    if (Nilai>=60)
        cout<<"Anda Lulus";
    else
        cout<<"Anda Tidak Lulus!\n";
    getch();
}
