#include<bits/stdc++.h>
using namespace std;

int firstOcurrence(const vector<int>& arr,int x){
        int low = 0;
        int high = arr.size()-1;
        int first = -1;

        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                first = mid;
                high = mid - 1; 
            }
            else if(arr[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return first;
    }
    int lastOcurrence(const vector<int>& arr,int x){
        int low = 0;
        int high = arr.size()-1;
        int last = -1;

        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == x){
                last = mid;
                low = mid + 1; 
            }
            else if(arr[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return last;
    }
   
   
int countOccurrences(const vector<int>& arr, int target) {
        int first = firstOcurrence(arr, target);
        if (first == -1) return 0; 
        int last = lastOcurrence(arr, target);
        return last - first + 1;
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

    cout << "Count occurrences of a number in a sorted array: " << countOccurrences(arr,x);
    return 0;
} 