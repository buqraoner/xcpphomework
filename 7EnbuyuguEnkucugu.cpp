/*Klavyeden 3 sayý okuyarak bu sayýlardan en büyüðünü veya en küçüðünü ekrana yazan kodu yazýnýz.
Birinci Sayýyý Giriniz: 5
Ýkinci Sayýyý Giriniz: 7
Üçüncü Sayýyý Giriniz: 6
En Büyük Sayý 7, En Küçük Sayý 5*/


#include <iostream>
using namespace std;
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish"); //Türkçe Karakter Desteði
	int a , b ,c ;
	cout << " Birinci sayiyi giriniz : ";     cin >>a;
    cout << " Ýkinci sayiyi giriniz : ";          cin >>b;
	cout << " 3rd sayiyi giriniz : ";         cin >>c;
	int enbuyuk, enkucuk;
	
	 enbuyuk = a;
   if(enbuyuk < b)
   enbuyuk = b;
   if(enbuyuk < c)
   enbuyuk = c;
   enkucuk = a;
    if(enkucuk > b)
    enkucuk = b;
    if(enkucuk >c)
    enkucuk = c;
     cout << "En buyuk sayi : " << enbuyuk << endl;
     cout << "En kucuk sayi : " << enkucuk << endl;

     return 0;  
   }


 

	
	
	
	
	
	

