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

//Reverse an array
void revArray(int arr[],int i,int n){
    if(i >= n/2) return;
    swap(arr[i],arr[n-i-1]);
    revArray(arr,i+1,n);
}


int main(){
    int n;
    cin >> n;
    // cout << sum(n);
    //cout << fact(n);
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    revArray(arr,0,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

