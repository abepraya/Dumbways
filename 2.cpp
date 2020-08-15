#include <iostream>
using namespace std;

void buyEgg(int tanggal,int uang){
    int butir,jumlah,lusin = 12;
    int i,j = 0;
    butir=uang/2500;

    for (int i = 1; i <= 31; i++) 
    {
        if (tanggal % i == 0) 
        {
            j++;
        }
        else if (tanggal % 5 == 0 && butir % 2 == 0)
        {
            jumlah = butir * 10; 
            cout<<"Jumlah: "<<jumlah<<endl;  
        }
        else if (tanggal % 5 == 0 && butir % 2 != 0)
        {
            jumlah = butir * 5;
            cout<<"Jumlah: "<<jumlah<<endl;
        }
    }
    if (j == 2 && butir >= 12) 
    {
        jumlah = butir + 2;
        cout<<"Jumlah: "<<jumlah<<endl;
        if(butir/12==2)
        {
        jumlah = butir + 4;
        cout<<"Karena bonus 2x,maka jumlah: "<<jumlah<<endl;
        }
    }
    else if(j != 2 && butir >= 12)
    {
        jumlah = butir + 3;
        cout<<"Jumlah: "<<jumlah<<endl;
    }
    else {
        jumlah = butir;
        cout<<"Jumlah: "<<jumlah<<endl;
    }

}


int main() {
    buyEgg(13,60000);
    
    cin.get();
    return 0;
}