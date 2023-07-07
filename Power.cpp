#include<iostream>
#include "Solution.h"
using namespace std;

int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  int small;
  if(n==0){
    return 1;
  }
 small=power(x,n-1);
 return x*small;
}


int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}



