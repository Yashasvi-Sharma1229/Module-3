#include<iostream>
#include "Solution.h"
using namespace std;

//answer
int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  /*     Right To Left approach
if(size==0){
  return -1;
}
if(input[size-1]==x){
  return size-1;
}
int sample=lastIndex(input,size-1,x);
if(sample==-1){
  return -1;
}
else{
  return sample;
}       
                                     */
// Left to Right approach
  
  if (size == 0) {
    return -1;
  }
  int sample = lastIndex(input + 1, size - 1, x);
  /*
  if(sample != -1){
    return sample + 1;
  }
  else {
    if (input[0] == x) {
      return 0;
    }
    return sample;
  }
  */
  if(sample!=-1){
    return sample+1;
  }
  else {
    if(input[0]==x){
      return 0;
    }
    else{
      return -1;
    }
  }
}
                                                            


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}



