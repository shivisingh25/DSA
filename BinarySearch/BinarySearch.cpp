#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target){
        int low=0;
        int high=nums.size()-1;

        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }

        return -1;
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

    cout << search(arr, target);
    return 0;
}