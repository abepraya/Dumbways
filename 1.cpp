/*
Muhammad Jadid AbiPraya
 Dumbways Bootcamp Kloter 3
*/
#include <iostream>
using namespace std;

int main()
{
    
    int t1=23,t2=12,t3=23; //waktu
    int jam,sec,menit,detik;
    int totalMenit;
    int x,y,z,m;
    
    totalMenit=t1+t2+t3; //untuk menghitung total waktu
    
    //konversi menit ke detik
    sec=totalMenit*60;
    
    //konversi waktu dari detik ke bentuk jam dan menit
    jam = sec/3600;
    x = jam*3600;
    y = sec-x;
    menit = y/60;
    z = menit*60;
    detik = y-z;

    //menampilkan nilai waktu yang diketahui
    cout <<"t1: "<<t1<<",t2: "<<t2<<",t3: "<<t3<<endl;
    //menampilkan nilai total waktu
    cout <<"Total Waktu: "<<t1<<"+"<<t2<<"+"<<t3<<" ="<< totalMenit <<"menit"<<endl;
    cout <<"\n"; //memberikan enter/jarak
    cout <<"Konversi waktu ke detik: "<<totalMenit<<" x "<<"60 = "<<sec<<"detik"<<endl;
    cout <<"Tampilkan waktu dalam jam,menit,dan detik: ";
    cout <<jam<<"jam\t"<<menit<<"menit\t"<<detik<<"detik"<<endl;
 
    cin.get();
    return 0;
}