#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
using namespace std;

#include "solution.h"

class Runner
{
    int N;

public:
    void takeInput()
    {
        cin >> N;
    }

    void execute()
    {
        int ans = countDigits(N);
    }

    void executeAndPrintOutput()
    {

        int ans = countDigits(N);
        cout << ans << endl;
    }
};

//answer
int count(int n){
    //write your code here
  int small;
  if(n==0){
      return 0;
  }
  small=count(n/10);
  return 1+small;
}



int main()
{
    // freopen("testcases/large/in/input11.txt", "r", stdin);
    // freopen("testcases/large/out/output11.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
