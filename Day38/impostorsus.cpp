#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string r;
        cin>>r;
        int op=0;
        int n=r.size();
        for(int i=0;i<n;i++){
            if((i==0 || i==n-1) && r[i]=='u'){
                r[i]='s';
                op++;
            }else if(r[i]=='u'){
                if(r[i-1]=='s' && r[i+1]=='s'){
                    continue;
                }else{
                    r[i-1]='s';
                    r[i+1]='s';
                    op++;
                }
            }
        }
        cout<<op<<endl;
    }
}