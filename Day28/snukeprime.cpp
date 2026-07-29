#include<bits/stdc++.h>
using namespace std;

// Snuke Prime

int main(){
    int n;
    long long C;
    cin>>n>>C;
    vector<int>a(n),b(n),c(n);
    int maxi=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        maxi=max(maxi,b[i]);
    }


    // Using difference Array
    // vector<int>diff(maxi+2,0);
    // for(int i=0;i<n;i++){
    //     diff[a[i]]+=c[i];
    //     diff[b[i]+1]-=c[i];
    // }
    // int cost=0;
    // for(int i=1;i<=maxi;i++){
    //     diff[i]+=diff[i-1];
    //     if(diff[i]>C){
    //         cost+=C;
    //     }else{
    //         cost+=diff[i];
    //     }
    // }
    // cout<<cost<<endl;

    // Using coordinate mapping
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
        s.insert(b[i]+1);
    }
    map<int,int>m;
    int idx=0;
    for(int x:s){
        m[x]=idx;
        idx++;
    }
    vector<long long>diff(idx,0);
    for(int i=0;i<n;i++){
        diff[m[a[i]]]+=c[i];
        diff[m[b[i]+1]]-=c[i];
    }
    for(int i=1;i<=idx;i++){
        diff[i]+=diff[i-1];
    }

    long long cost=0;
    vector<int>arr(s.begin(),s.end());
    for(int i=1;i<=idx;i++){
        int d=arr[i]-arr[i-1];
        cost+=d*min(diff[m[arr[i-1]]],C);
    }
    cout<<cost;
}