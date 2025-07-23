#include<bits/stdc++.h>
using namespace std;

// void leftRotate(int arr[],int n,int d){
//     reverse(arr,arr+d);
//     reverse(arr+d,arr+n);
//     reverse(arr,arr+n);
// }

void rotateArray(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> temp;
        for(int i=0;i<k;i++){
            temp.push_back(nums[i]);
        }

        for(int i=k;i<nums.size();i++){
            nums[i-k]=nums[i];
        }

        for(int i=nums.size()-k;i<nums.size();i++){
            nums[i]=temp[i-(nums.size()-k)];
        }
}

int main(){
    int n;
    cin >> n;

    //int arr[n];

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int d;
    cin >> d;

    //leftRotate(arr,n,d);

    rotateArray(arr,d);

    for(int i=0;i<n;i++){
        cout <<  arr[i] << " ";
    }

    return 0;
}
