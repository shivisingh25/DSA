#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high-1){ i++; }
        while(arr[j] > pivot && j >= low+1){ j--; }
        if(i < j){
            swap(arr[i],arr[j]);
        }    
    }
    swap(arr[low],arr[j]);
    return j;
}


void quick_sort(vector<int> &arr,int low,int high){
    if(low < high){
        int partitionIndex = partition(arr,low,high);
        quick_sort(arr,low,partitionIndex-1);
        quick_sort(arr,partitionIndex+1,high);
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}