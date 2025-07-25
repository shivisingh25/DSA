#include<bits/stdc++.h>
using namespace std;

//Better
// string twoSumProblem(vector<int> &a,int n,int target){
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         int num1 = a[i];
//         int num2 = target - num1;
//         if(mpp.find(num2)!=mpp.end()){
//             return "Yes"; // return {mpp[num2],i};
//         }
//         mpp[num1] = i;
//     }
//     return "No";
// }

//Optimal 
string twoSumProblem(vector<int> &a,int n,int target){
    int left = 0, right = n-1;
    sort(a.begin(),a.end());
    while(left < right){
        int sum = a[left] + a[right];
        if(sum == target){
            return "Yes";
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return "No";
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    cout << "Is two numbers present to achieve target number? " << twoSumProblem(arr,n,target);

    return 0;
}
