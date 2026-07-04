#include<bits/stdc++.h>
using namespace std;

bool isPossible(int mid,int unique,int dup){
    if((unique==mid && dup>mid) || (unique>mid && dup>=mid)){
        return true;
    }else{
        return false;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        unordered_map<int,int>hm;
        int dup=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            hm[a[i]]++;
            dup=max(hm[a[i]],dup);
        }
        int r=n/2;
        int l=0;
        int unique=hm.size();
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isPossible(mid,unique,dup)){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}