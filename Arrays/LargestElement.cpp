#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int largestElement = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largestElement){
            largestElement=arr[i];
        }
    }

    cout << "Largest Element in the Array is " << largestElement;
    return 0;
}