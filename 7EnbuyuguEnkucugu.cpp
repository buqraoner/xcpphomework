/*Klavyeden 3 say� okuyarak bu say�lardan en b�y���n� veya en k�����n� ekrana yazan kodu yaz�n�z.
Birinci Say�y� Giriniz: 5
�kinci Say�y� Giriniz: 7
���nc� Say�y� Giriniz: 6
En B�y�k Say� 7, En K���k Say� 5*/


#include <iostream>
using namespace std;
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Turkish"); //T�rk�e Karakter Deste�i
	int a , b ,c ;
	cout << " Birinci sayiyi giriniz : ";     cin >>a;
    cout << " �kinci sayiyi giriniz : ";          cin >>b;
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


 

	
	
	
	
	
	

