 #include <iostream>
 #include <conio.h>
 #include <windows.h>
 #include <stdlib.h>
 #include <iomanip>
 using namespace std;
 void gotoxy(int x, int y) // start format data struk
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 int main()

 {
  string Wisata[1000],nama,kode[1000];
  long int harga[1000],jumlah[1000],total[1000],total_b,jumlahb[1000];
  int data;
  float diskon[1000],ppn[1000];
 system("color a");
  cout<<"==========================================="<<endl;
  cout<<"    Program Penjualan Tiket Wisata    "<<endl;
  cout<<"     AIR PANAS WISATA ALAM WIJAYA        "<<endl;
  cout<<" Jl.Lembang Bandung No.45 Telp.082111036454 "<<endl;
  cout<<"#############################################"<<endl;

  cout<<"#############################################"<<endl;
  cout<<"    Berikut adalah kode Wisata Alam    "<<endl;
  cout<<"    CLT = CURUG LIMA TERJUN "<<endl;
  cout<<"    AP = AIR PANAS ALAM  "<<endl;
  cout<<"    ATK = AIR TERJUN KABUT  "<<endl;
  cout<<"    WAD = DUA DANAU "<<endl;

  cout<<"   Jl.Matahari No.37 Telp.0411872780   "<<endl;
  cout<<"============================================"<<endl;
  cout<<"Masukkan Nama Pengurus: "; cin>>nama;
  cout<<"Masukkan Jumlah Tiket Wisata :";cin>>data;

  for (int i=1; i<=data; i++)
  {cout<<"Data Ke-"<<i<<endl;
  cout<<"Masukkan Kode Wisata Alam :" ;
  cin>>kode[i];
  if (kode[i] =="CLT")
   { Wisata[i] ="Curug Lima Terjun";
   harga[i] = 25000; }else
  if (kode[i] =="AP")
   { Wisata[i] ="Air Panas Alam";
    harga[i] = 18000; }else
  if (kode[i] =="ATK")
   { Wisata[i] ="Air Terjun Kabut";
    harga[i] = 27000; }else
  if (kode[i] =="WAD")
   { Wisata[i] ="Wisata alam dua danau";
    harga[i] = 65000; }else
 if (kode[i] =="CLT")
   { Wisata[i] ="Curug Lima Terjun";
   harga[i] = 25000; }else
  if (kode[i] =="AP")
   { Wisata[i] ="Air Panas Alam";
    harga[i] = 18000; }else
  if (kode[i] =="ATK")
   { Wisata[i] ="Air Terjun Kabut";
    harga[i] = 27000; }else
  if (kode[i] =="WAD")

   { Wisata[i] ="Wisata alam dua danau";
    harga[i] = 65000; }

 cout<<"Nama Wisata Alam               :"<<Wisata[i]<<endl;
 cout<<"Harga Wisata Alam              :"<<harga[i]<<endl;
 cout<<"Masukkan Jumlah Pembelian      :";
  cin>>jumlah[i];
   total[i] = harga[i]*jumlah[i];
 cout<<"Total                          :"<<total[i]<<endl;
  if (jumlah[i] >10)
  { diskon[i] = 0.1*total[i]; }
   else { diskon[i] = 0; }
 cout<<"Diskon                         :"<<diskon[i]<<endl;
 ppn[i] = 0.1 * total[i];
 cout<<"PPN                            :"<<ppn[i]<<endl;
 jumlahb[i]=total[i]-diskon[i]+ppn[i];  }

system("cls");

 cout<<"Nama Pengurus  : "<<nama; cout<<"           TIKET MASUK WISATA ALAM     "<<endl;
   cout<<"|NO|Kode| Nama Wisata           |  Harga  | Total | Diskon | PPN  | Jumlah Bayar |","\t";
    cout<<endl<<endl<<endl;
 total_b;
 for ( int  j=1; j<=data; j++)

    {
cout<<endl;
 gotoxy(0,1+j);
 cout<<"|"<< j <<endl;
 gotoxy(3,1+j);
 cout<<"|"<< kode [j]<<endl;
 gotoxy(8,1+j);
 cout<<"|"<< Wisata [j]<<endl;
 gotoxy(32,1+j);
 cout<<"|"<< harga [j]<<endl;
 gotoxy(42,1+j);
 cout<<"|"<< total [j]<<endl;
 gotoxy(50,1+j);
 cout<<"|"<< diskon [j]<<endl;
 gotoxy(59,1+j);
 cout<<"|"<< ppn [j]<<endl;
 gotoxy(66,1+j);
 cout<<"|"<<"Rp."<< jumlahb [ j ]<<endl;
 gotoxy(81,1+j);
 cout<<"|";
 cout<<endl;

 total_b=total_b+jumlahb[j];

}
cout<<endl;
 cout<<"Total :Rp."<<total_b<<endl;
getch();

}





