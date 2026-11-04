#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;

    if(n==1){
      cout<<0<<endl;
      return;
    }

    if(n==2){
      cout<<1<<endl;
      cout<<1<<" "<<1<<endl;
      return;
    }
    
    if(n==3||n==4){
      cout<<2<<endl;
      cout<<1<<" "<<2<<endl;
      cout<<2<<" "<<3<<endl;
      return;
    }

    vector<pair<int,int>>res;
    
    if(n%2==0){
      res.push_back({1,2});
      for(int i=2;i<n-2;i+=2){
        res.push_back({i,i+2});
        

      }
      res.push_back({n-2,n-1});
    }else{
      res.push_back({1,2});
      for(int i=2;i<n-1;i+=2){
        res.push_back({i,i+2});
        
      }
      res.push_back({n-1,n});
    }

    cout<<res.size()<<endl;
    for(auto it:res){
      cout<<it.first<<" "<<it.second<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}