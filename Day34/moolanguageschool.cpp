#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,cnt=0;
        while(i<n){
            int v=k-1;
            bool flag=true;
            while(v>=0){
                if(s[v+i]=='0'){
                    flag=false;
                    break;
                }
                v--;
            }
            i+=k;
            if(flag){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}