#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>freq(n+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    int val=0,total=0;
    while(n>=k){
        total+=freq[val];
        if(total>=k && freq[val]>0){
            val++;
        }else{
            break;
        }
        total-=k;
        n-=k;
    }
    cout<<val<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}