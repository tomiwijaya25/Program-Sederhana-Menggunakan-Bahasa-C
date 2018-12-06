#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Menjumblahkan deret" << endl;
    cout<<endl;
    int a,n,jml;
    jml=0;
    cout<<"Masukan Jumlah Deret =";cin>>n;
    for (a=1;a<=n;a+=1)
    {
    cout<<a<<endl;
    jml=jml+a;
    }
    cout<< "Total Deret Dari 1 Sampai "<< n <<" = "<<jml;
    getch();
}

