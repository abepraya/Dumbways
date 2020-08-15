#include <iostream>
using namespace std;
/* Muhammad Jadid AbiPraya - Kloter 3 */


//fungsi untuk melakukan pattern
void looping(char word[9]){
	int i,j; //i adalah column dan j adalah baris
	int n=7; //panjang atau length dari column
	
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(i == j || i+j == n + 1) //i==j untuk membuat tulisan menyilang ke kanan sedangkan i+j == n+1 membuat tulisan menyilang ke kiri
			{
			cout<<word[i];
			}
		
			else
			{
			cout<<"=";
			}
			
		}
			cout<<endl;
		}

}

int main() {
	char input[9]={'D','U','M','B','W','A','Y','S'}; //input dengan total index 9[0...8] dengan tipedata char[huruf/abjad]
	looping(input);
	
    cin.get();
	return 0;
}
