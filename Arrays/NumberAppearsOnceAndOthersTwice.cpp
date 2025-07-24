#include<bits/stdc++.h>
using namespace std;

//Brute Force
// int numberAppearsOnceAndOthersTwice(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//        int num = a[i];
//        int cnt = 0;
//        for(int j=0;j<a.size();j++){
//             if(a[j] == num){
//                 cnt++;
//             }
//         }
//         if(cnt == 1){
//             return num;
//         }
//     }
// }

//Optimal
int numberAppearsOnceAndOthersTwice(vector<int> &a){
    int XOR = 0;
    for(int i=0;i<a.size();i++){
       XOR = XOR ^ a[i];
    }
    return XOR;
}


int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
       cin >> arr[i];
    }

    cout << numberAppearsOnceAndOthersTwice(arr);

    return 0;
}
