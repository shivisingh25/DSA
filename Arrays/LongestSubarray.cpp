#include<bits/stdc++.h>
using namespace std;

//Brute Force
// int longestSubarray(vector<int> &arr, int k){
//     int len=0;
//     for(int i=0;i<arr.size();i++){
//         int sum = 0;
//         for(int j=i;j<arr.size();j++){
//             sum += arr[j];
//             if(sum == k){
//                 len = max(len, j-i+1);
//             }
//         }
//     }
//     return len;
// }

//Better Approach - It is optimal if array contains positive and negative numbers
// int longestSubarray(vector<int> &arr, long long k){
//     map<long long,int> preSumMap;
//     long long sum = 0;
//     int maxLen = 0;

//     for(int i=0;i<arr.size();i++){
//         sum += arr[i];
//         if(sum == k){
//             maxLen = max(maxLen, i+1);
//         }
//         int rem = sum - k;
//         if(preSumMap.find(rem) != preSumMap.end()){
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen,len);
//         }
//         if(preSumMap.find(sum) == preSumMap.end()){
//             preSumMap[sum] = i;
//         }
//     }

//     return maxLen;
// }

//Optimal if array contains positive and zeroes
int longestSubarray(vector<int> &arr, long long k){
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;

    while(right < arr.size()){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < arr.size()){
            sum += arr[right];
        }
        
    }
    return maxLen;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    long long k;
    cin >> k;

    cout << "Length of Longest subarry is: " << longestSubarray(arr, k);
    return 0;

}