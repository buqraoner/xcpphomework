#include <iostream>
using namespace std;
#include <locale.h>

// 100'den 0'a kadar 13'e tam b�l�nebilen say�lar� ekrana yazd�r�n�z (b�y�kten k����e).

int main(){
	setlocale(LC_ALL, "Turkish"); // T�rk�e karakter tan�mlamak

	int i= 100;
	
	for (int i = 100; i >= 0; i--){
		
   if (i %13 == 0 ){
       cout<<i<<" ";
   }

    }
}
	

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	



	
	
	
	
