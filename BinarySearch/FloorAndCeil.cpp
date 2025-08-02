#include<bits/stdc++.h>
using namespace std;

int floor(vector<int> nums, int x){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] <= x){
                ans = nums[mid];
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }

    int ceil(vector<int> nums, int x){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= x){
                ans = nums[mid];
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
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

    cout << "Floor value: " << floor(arr, x) << endl;
    cout << "Ceil Value: " << ceil(arr,x);
    return 0;
} 

    