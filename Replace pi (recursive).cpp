#include <iostream>
#include "solution.h"
using namespace std;

//answer
// Change in the given string itself. So no need to return or print anything
#include<cstring>
void replacePi(char input[]) {
	// Write your code here
	int n=strlen(input);
if(n==0||n==1){
	return;
}
replacePi(input+1);
  if (input[0] == 'p' && input[1] == 'i') {
	  int count=0,i=0;                   //counting number of characters 
        while(input[i]!='\0'){
			count++;
			i++;
		}
		for(i=count;i>=2;i--){    //shifting by 2 places
			input[i+2]=input[i];
		}
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
  }
}


int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

