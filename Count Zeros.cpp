#include <iostream>
#include "solution.h"
using namespace std;

//answer
int countZerosHelper(int n){
  
    // Write your code here

 if(n==0){
     return 0;
 }

int ans=countZerosHelper(n/10);
  if(n%10==0){
     return ans+1;
   }
   else{
       return ans;
   }
  }


int countZeros(int n) {
    // Write your code here

   if(n==0) return 1;
   else{  
     int  ans=countZerosHelper(n);
   
   return ans;

       } 
    
    
}


int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}

