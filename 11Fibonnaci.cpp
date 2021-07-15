/*
Fibonacci serisinin ilk iki elemaný 1'dir ve diðer elemanlarý, 
kendisinden önce gelen son iki elemanýn toplamýdýr. 
Klavyeden bir sayý okuyarak, 
girilen sayý kadar fibonacci serisinin elemanýný ekrana bastýran kodu yazýnýz.


//Bir sayi giriniz: 10
1 1 2 3 5 8 13 21 34 55

*/

#include <iostream>

using namespace std;           

int main()
{
   int a=1;
   int s=1;
   int e;
   cout << "Lutfen basamagi giriniz" << endl;
   cin >> e;
   if(e<=0 ){
    cout <<" " <<endl;
   }
    else if (e==1){
    cout << a << endl;
   }

    else{
        cout << a << endl << s << endl;

   for(int i=2;i<e;i++){
   int c=a+s;
   a=s;
   s=c;
   cout << c << endl;
   }
}



}
