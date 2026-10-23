#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int op=0;
        vector<vector<bool>>vis(2,vector<bool>(n,0));
        for(int i=0;i<n;i++){
            if(!vis[0][i]){
                vis[0][i]=true;
                bool r=i<n-1?vis[0][i+1]:true;
                if(a[i]==b[i]){
                    vis[1][i]=true;
                }else if(!r && a[i]==a[i+1]){
                    vis[0][i+1]=true;
                }else{
                    vis[1][i]=true;
                    op++;
                }
            }
            if(!vis[1][i]){
                vis[1][i]=true;
                if(b[i]!=b[i+1]){
                    op++;
                }
                vis[1][i+1]=true;
            }
        }
        cout<<op<<'\n';
    }
}