#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    int x,Jlh_anak;
    cout<<"Tomi_wijaya"<<endl;
    cout<<"Masukan jumlah jeruk dalam keranjang"<<endl;
    cin>>Jlh_anak;
    cout<<"Mari kita ambil Jeruk sambil berhitung mulai dari"<<Jlh_anak<<endl;
    cout<<"Mulai Berhitung !"<<endl;

    for (x=Jlh_anak;x>0;x--)
{

    if  (x>1)
    cout<<"Jumlah Jeruk Ada "<<x<<" diambil satu tinggal "<<x-1<<endl;
    else if (x=1)
    cout<<"Jumlah Jeruk ada 1 diambil satu tinggal keranjangnya"<<endl;
}
    getch();
    return 0;
}
