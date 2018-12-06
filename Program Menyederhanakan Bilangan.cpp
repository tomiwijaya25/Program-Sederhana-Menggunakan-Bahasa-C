#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    cout<<"Tomi Wijaya"<<endl<<endl;
    int n,c,l,t;
    printf("Masukan Pembilang =");scanf("%d",&n);
    printf("Masukan Penyebut =");scanf("%d",&c);
    t=n/c;
    l=n%c;
    if (n%c==0)
        printf("Bilangan (%d/%d)\ndi sederhanakan menjai %d",n,c,t);
    else if (n%c !=0)
        printf("Bilangan (%d/%d)\ndi sederhanakan menjai %d %d/%d",n,c,t,l,c);
    getch();
}
