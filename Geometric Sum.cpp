#include <iostream>
#include <math.h>
#include <iomanip>
#include "solution.h"
using namespace std;

//answer

double geometricSum(int k) {
    // Write your code here
if(k==0){
    return 1;
}
double ans = geometricSum(k - 1);
if (k != 0) {
  return ans + pow(.5, k);
}
else{
    return ans; 
}
}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}

