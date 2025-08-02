#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &nums, int x){
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= x){
                ans = mid;
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

    cout << "Lower Bound at Index: " << lowerBound(arr, x);
    return 0;
} 