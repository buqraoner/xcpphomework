#include <iostream>
using namespace std;
/*Ekrana 4 kolon şeklinde aşağıdaki serileri bastırınız:

Kolonda: 1'den 100'e kadar olan 15'in katları
Kolonda: 1'den 30'a kadar olan 5'in katları
Kolonda 100'den 50'ye kadar olan 10'un katları
Kolonda 2'den 64'e kadar olan 2'nin üstleri

Ekran çıktısı

15  5 100 2
30  10 90 4
45  15 80 8
60  20 70 16
75  25 60 32
90  30 50 64



*/
int main(){
int i,im=0,j,jm=0,k,km=100,u,um,l,lm;
while(i<90||j<30||k>50||u<64){

for (i=15;i<100;i++){
	if(i<im){
		i=im;
	}
	printf("%d ",i);
	im=i+15;
	break;
}  

for (j=5;j<30;j++){
	if(j<jm){
		j=jm;
	}
	printf("%d ",j);
	jm=j+5;
	break;
} 
for (k=100;k>50;k--){
	if(k>km){
		k=km;
	}
	printf("%d ",k);
	km=k-10;
	break;
}  
for (u=2;u<64;u++){	
    if(u<um){
    	u=um;
	}
	printf("%d ",u);
	um=u*2;
	break;
}
printf("\n");
}
}
	
	
	
	
	

