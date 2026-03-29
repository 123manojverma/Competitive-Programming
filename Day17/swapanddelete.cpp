#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int z=0,o=0,n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                z++;
            }else{
                o++;
            }
        }
        int i=0;
        for(i=0;i<n;i++){
            if(s[i]=='0' && o>0){
                o--;
            }else if(s[i]=='1' && z>0){
                z--;
            }else{
                break;
            }
        }
        cout<<n-i<<endl;
    }
}