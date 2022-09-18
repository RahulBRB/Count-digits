#include<bits/stdc++.h>
using namespace std;

int countDigits(int n);

int main(){

    int n;
    cin>>n;

    cout << "No. of digits in " << n<< " is " << countDigits(n);


    return 0;
}

int countDigits(int n){
    int x = n;
    int count = 0;
    while(x!=0){
        x = x/10;
        count++;
    }
    return count;
}
