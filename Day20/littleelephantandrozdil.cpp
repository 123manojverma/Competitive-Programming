#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>hm;
    int min=1,dist=arr[0];
    bool flag=false;
    hm[dist]++;
    for(int i=1;i<n;i++){
        hm[arr[i]]++;
        if(dist>arr[i]){
            dist=arr[i];
            min=i+1;
        }
    }
    if(hm[arr[min-1]]>1) cout<<"Still Rozdil";
    else cout<<min;
}