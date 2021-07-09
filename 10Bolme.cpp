#include <iostream>
using namespace std;
#include <locale.h>

// 100'den 0'a kadar 13'e tam bölünebilen sayýlarý ekrana yazdýrýnýz (büyükten küçüðe).

int main(){
	setlocale(LC_ALL, "Turkish"); // Türkçe karakter tanýmlamak

	int i= 100;
	
	for (int i = 100; i >= 0; i--){
		
   if (i %13 == 0 ){
       cout<<i<<" ";
   }

    }
}
	

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	



	
	
	
	
