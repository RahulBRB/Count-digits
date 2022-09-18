#include<bits/stdc++.h>
using namespace std;

int countDigits(int n);

int main(){
  
  int n;
  cin>>n;
  cout<<"Number of digits in "<<n<<" is "<<countDigits(n);
   
  return 0;
}

int countDigits(int n){
  string num = to_string(n);
  return num.length();
}
