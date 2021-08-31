#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/


  int max_of_four(int s1,int s2,int s3,int s4)

     {
           
         if (s1>s2 && s1>s3 && s1>s4){
             
             return s1;
            
         }
          else if (s2>s3 && s2>s4 )
         {
             return s2;
             
             }
             
             else if (s3>s4)
             {
                 return s3;
             }
             else {
                 
                 return s4;
             }
         
  
     
    
}



int main() {
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
