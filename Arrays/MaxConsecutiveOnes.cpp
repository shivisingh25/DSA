#include<bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count++;
                maxi = max(maxi,count);
            }
            else{
                count = 0;
            }
        }
        return maxi;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }

    cout << findMaxConsecutiveOnes(arr);
    return 0;
}