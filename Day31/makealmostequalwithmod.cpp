#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=60;i++){
            set<long long>s;
            long long val=1LL<<i;
            for(int j=0;j<n;j++){
                s.insert(a[j]%val);
            }
            if(s.size()==2){
                cout<<val<<endl;
                break;
            }
        }
    }
}