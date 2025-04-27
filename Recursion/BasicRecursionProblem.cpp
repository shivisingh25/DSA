#include<bits/stdc++.h> 
using namespace std;

//Print Name 5 times
void printName(int i, int n){
    if(i>n) return;
    cout << "Shivangi" << endl;
    printName(i+1,n);
}

//Print Linearly from 1 to N
void printNum(int i, int n){
    if(i>n) return;
    cout << i << endl;
    printNum(i+1,n);
}

//Print from N to 1
void printRevNum(int i, int n){
    if(i<1) return;
    cout << i << endl;
    printRevNum(i-1,n);
}

//Print Linearly from 1 to N (But By Backtrack)
void printNum1(int i, int n){
    if(i<1) return;
    printNum1(i-1,n);
    cout << i << endl;
}


//print from N to 1 (By Backtrack)
void printRevNum1(int i, int n){
    if(i>n) return;
    printRevNum1(i+1,n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    // printName(1,n);
    // printNum(1,n);
    // printRevNum(n,n);
    // printNum1(n,n);
    printRevNum1(1,n);
    return 0;
}

