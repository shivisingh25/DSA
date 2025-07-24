#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
// int  missingNumber(vector<int> &a,int n){
//     for(int i=1;i<=n;i++){
//         int flag = 0;
//         for(int j=0;j<n-1;j++){
//             if(a[j] == i){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             return i;
//         }
//     }
// }

//Better Approach
// int  missingNumber(vector<int> &a,int n){
//     int hash[n+1] = {0};
//     for(int i=0;i<n-1;i++){
//         hash[a[i]] =1;
//     }

//     for(int i=1;i<=n;i++){
//         if(hash[i]==0){
//             return i;
//         }
//     }
// }

//Optimal Approach
int missingNumber(vector<int>& nums, int n) {
        int XOR1=0;
        int XOR2=0;
        for(int i=0;i<nums.size()-1;i++){
            XOR2 = XOR2^nums[i];
            XOR1 = XOR1^(i+1);
        }
        XOR1=XOR1^nums.size();
        return (XOR1^XOR2);
    }

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }

    cout << missingNumber(arr,n);
    return 0;
}