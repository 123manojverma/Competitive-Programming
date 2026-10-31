#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        string p,q;
        cin>>p>>q;
        vector<int>c1(26,0);
        for(int i=0;i<n;i++){
            c1[p[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            c1[q[i]-'a']--;
        }
        bool flag=true;
        for(int i=0;i<26;i++){
            char c=(char) ('a'+i);
            if(c=='s'){
                if(c1[i]!=1){
                    flag=false;
                }
            }else if(c=='i'){
                if(c1[i]!=1){
                    flag=false;
                }
            }else if(c=='x'){
                if(c1[i]!=1){
                    flag=false;
                }
            }else if(c1[i]>0 || c1[i]<0){
                flag=false;
            }
        }
        cout<<(flag?"YES":"NO")<<'\n';
    }
}