#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int>s;
        for(int i=0;i<n;i++){
            if(!s.count(a[i])){
                cout<<a[i]<<" ";
            }
            s.insert(a[i]);
        }
        for(int j=1;j<=n;j++){
            if(!s.count(j)){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}