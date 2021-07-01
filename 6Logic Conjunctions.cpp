/*Klavyeden üç sayý alarak mantýk baðlaçlarýný kullanan örnek bir kod yazýnýz. 
Örneðin okunan sayýlar a, b ve c olsun. 
Sýrasýyla, aþaðýdaki sorularý cevaplayan kodu yazýnýz:
Birinci Sayýyý(a) Giriniz: 5
Ýkinci Sayýyý(b) Giriniz: 5
Üçüncü Sayýyý(c) Giriniz: 7
a, b ile c arasýnda bir sayý deðildir
a, b veya c'den daha büyük deðildir
a, b'ye eþit ve ayný zamanda c'den küçüktür
üç sayý birbirine eþit deðildir	*/
	
	
	
	#include <iostream>
    #include <locale.h>
	using namespace std;

	int main()
{
	setlocale(LC_ALL, "Turkish"); //Türkçe Karakter Desteði
	int a, b, c;
	cout<<"Birinci Sayýyý (a) Giriniz : "; cin>>a;
	cout<<"Ýkinci Sayýyý (b) Giriniz : "; cin>>b;
	cout<<"Üçüncü Sayýyý (c) Giriniz : "; cin>>c;
	cout<<endl;
	

//a'nýn b ve c arasýnda olup olmadýðý
	if (a<b && a>c || a<c && a>b)
		cout<<"a, b ve c arasýndadýr.";
	else
		cout<<"a, b ve c arasýnda deðildir.";
	cout<<endl;

	//a'nýn b'ye eþit ve ayný zamanda c'den küçük olup olmadýðý
	if (a==b)
	{
		if (a<c)
			cout<<"a, b'ye eþit ve ayný zamanda c'den küçüktür.";
		else if(a>c)
			cout<<"a, b'ye eþit ve ayný zamanda c'den büyüktür.";
	}
	else if (a!=b)
		cout<<"a, b'ye eþit deðildir.";
	cout<<endl;

	//a'nýn b'den veya c'den büyük olup olmadýðýný
	if (a>b || a>c)
		cout<<"a, b veya c'den büyüktür.";
	else
		cout<<"a, b veya c'den küçüktür.";
	cout<<endl;

	//üç sayýnýn birbirine eþit olup olmadýðý
	if (a==b && a==c)
		cout<<"Üç sayý birbirine eþittir.";
	else
		cout<<"Üç sayý birbirine eþit deðildir.";
	cout<<endl;

	system("pause");
	return 0;
}
	
	
	
