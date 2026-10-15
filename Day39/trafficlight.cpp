#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        if(c=='g'){
            cout<<0<<'\n';
            continue;
        }
        int start=-1,dist=INT_MIN,first=-1;
        for(int i=0;i<n;i++){
            if(s[i]==c && start==-1){
                start=i;
            }else if(s[i]=='g'){
                if(first==-1){
                    first=i;
                }
                if(start!=-1){
                    dist=max(dist,i-start);
                    start=-1;
                }
            }
        }
        if(start!=-1){
            dist=max(dist,n-start+first);
        }
        cout<<dist<<'\n';
    }
}