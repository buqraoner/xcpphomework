/*Klavyeden �� say� alarak mant�k ba�la�lar�n� kullanan �rnek bir kod yaz�n�z. 
�rne�in okunan say�lar a, b ve c olsun. 
S�ras�yla, a�a��daki sorular� cevaplayan kodu yaz�n�z:
Birinci Say�y�(a) Giriniz: 5
�kinci Say�y�(b) Giriniz: 5
���nc� Say�y�(c) Giriniz: 7
a, b ile c aras�nda bir say� de�ildir
a, b veya c'den daha b�y�k de�ildir
a, b'ye e�it ve ayn� zamanda c'den k���kt�r
�� say� birbirine e�it de�ildir	*/
	
	
	
	#include <iostream>
    #include <locale.h>
	using namespace std;

	int main()
{
	setlocale(LC_ALL, "Turkish"); //T�rk�e Karakter Deste�i
	int a, b, c;
	cout<<"Birinci Say�y� (a) Giriniz : "; cin>>a;
	cout<<"�kinci Say�y� (b) Giriniz : "; cin>>b;
	cout<<"���nc� Say�y� (c) Giriniz : "; cin>>c;
	cout<<endl;
	

//a'n�n b ve c aras�nda olup olmad���
	if (a<b && a>c || a<c && a>b)
		cout<<"a, b ve c aras�ndad�r.";
	else
		cout<<"a, b ve c aras�nda de�ildir.";
	cout<<endl;

	//a'n�n b'ye e�it ve ayn� zamanda c'den k���k olup olmad���
	if (a==b)
	{
		if (a<c)
			cout<<"a, b'ye e�it ve ayn� zamanda c'den k���kt�r.";
		else if(a>c)
			cout<<"a, b'ye e�it ve ayn� zamanda c'den b�y�kt�r.";
	}
	else if (a!=b)
		cout<<"a, b'ye e�it de�ildir.";
	cout<<endl;

	//a'n�n b'den veya c'den b�y�k olup olmad���n�
	if (a>b || a>c)
		cout<<"a, b veya c'den b�y�kt�r.";
	else
		cout<<"a, b veya c'den k���kt�r.";
	cout<<endl;

	//�� say�n�n birbirine e�it olup olmad���
	if (a==b && a==c)
		cout<<"�� say� birbirine e�ittir.";
	else
		cout<<"�� say� birbirine e�it de�ildir.";
	cout<<endl;

	system("pause");
	return 0;
}
	
	
	
