#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int key;
    cin >> key;
    
  
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element is found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element is not found" << endl;
    }
    

    return 0;
}