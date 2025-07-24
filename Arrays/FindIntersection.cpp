#include<bits/stdc++.h>
using namespace std;

//Brute Force
/*
vector<int> findIntersection(vector<int> &a,int n,vector<int> &b,int m){
    vector<int> ans;
    //vector<int> vis(m, 0);
    int vis[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i] == b[j] && vis[j] == 0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }

            if(b[j] > a[i]) break;
        }
    }

    return ans;
}
*/

//Optimal
vector<int> findIntersection(vector<int> &a,int n,vector<int> &b,int m){
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
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

    vector<int> res = findIntersection(arr1,n1,arr2,n2);
    
    for(int i=0;i<res.size();i++){
        cout << res[i] << " ";
    }    

    return 0;
}