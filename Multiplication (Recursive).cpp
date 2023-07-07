#include <iostream>
#include "solution.h"
using namespace std;

//answer
int multiplyNumbers(int m, int n) {
    // Write your code here
    /*
if(n==0){
    return 0;
}
int ans=multiplyNumbers(m,n-1);
  return ans+m;    */

    if (m == 0) {
      return 0;
    }
    int ans = multiplyNumbers(m-1, n);
    return ans + n;
}




int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}

