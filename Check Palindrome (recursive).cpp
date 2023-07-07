#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stack>
using namespace std;
#include "solution.h"

class Runner
{
    string t;

public:
    void takeInput()
    {
        cin>>t;
    }

    void execute()
    {
        auto ans = isPalindrome(t);
    }

    void executeAndPrintOutput()
    {
        auto ans = isPalindrome(t);
        ans ? cout<<"true" : cout<<"false";
    }
};

//answer
#include<cstring>

bool helper(char input[], int start, int end) {
  if (end == 0 || end == 1) {
    return true;
  }
  if (input[start] != input[end]) {
    return false;
  }
  bool ans = helper(input, start + 1, end - 1);
  return ans;
  if (start >= end) {
    return true;
  }
}
bool checkPalindrome(char input[]) {
  // Write your code here
  int start = 0;
  int end = strlen(input) - 1;
  if (strlen(input) == 0 || strlen(input) == 1) {
    return true;
  }
  int ans=helper(input,start,end);
     return ans;
}

int main()
{
    // for (int i = 1; i <= 50; i++)
    // {
    //     string filename1 = "./Testcases/large/in/input" + to_string(i) + ".txt";
    //     string filename2 = "./Testcases/large/out/output" + to_string(i) + ".txt";
        
    //     ifstream inputFile(filename1);
    //     ofstream outputFile(filename2);
        
    //     if (inputFile.is_open() && outputFile.is_open())
    //     {
    //         cin.rdbuf(inputFile.rdbuf());   // Redirect cin to input file
    //         cout.rdbuf(outputFile.rdbuf()); // Redirect cout to output file
            
    //         Runner runner;
    //         runner.takeInput();
    //         runner.executeAndPrintOutput();
            
    //         cin.rdbuf(nullptr);   // Reset cin to standard input
    //         cout.rdbuf(nullptr);  // Reset cout to standard output
            
    //         inputFile.close();
    //         outputFile.close();
    //     }
    //     else
    //     {
    //         cerr << "Failed to open input or output file." << endl;
    //     }
    // }
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
