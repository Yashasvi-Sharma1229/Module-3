#include <iostream>
#include "solution.h"
using namespace std;

//answer
int sumOfDigits(int n) {
    // Write your code here
if(n==0){
    return 0;
}
int ans=sumOfDigits(n/10);
return ans+n%10;
}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}

