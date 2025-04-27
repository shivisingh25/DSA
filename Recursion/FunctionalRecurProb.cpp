#include<bits/stdc++.h>
using namespace std;

//Sum of first N numbers
int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}

//Factorial of N numbers
int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    // cout << sum(n);
    cout << fact(n);
    return 0;
}

