#include<bits/stdc++.h>
using namespace std;

//Brute Force
/*
vector<int> findUnion(vector<int> &a,vector<int> &b){
    set<int> st;
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}
*/


//Optimal
vector<int> findUnion(vector<int> &a,vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;

    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
        }
        j++;
    }

    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
}


int main() {
    int n1,n2;
    cin >> n1 >> n2;


    vector<int> arr1(n1),arr2(n2);
    
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }

    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }

    vector<int> res = findUnion(arr1,arr2);
    
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }    

    return 0;
}