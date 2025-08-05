#include<bits/stdc++.h>
using namespace std;


int search(vector<int> &nums, int k) {
       int low = 0;
       int high = nums.size()-1;
       while(low <= high){
        int mid = (low + high)/2;
        if(nums[mid]==k) return mid;
        //left sorted
        if(nums[low] <= nums[mid]){
            if(nums[low] <= k && k <= nums[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(nums[mid] <= k && k <= nums[high]){
                low = mid + 1;
            }
            else{
                 high = mid - 1;
            }
        }

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

    int x;
    cin >> x;

    cout << "Target element found in Rotated Sorted Array at index: " << search(arr,x);
    return 0;
}     