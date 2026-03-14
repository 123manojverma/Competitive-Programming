#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int op=0;
        for(int i=1;i<n-1;i++){
            if(s[i]=='a' && s[i-1]=='m' && s[i+1]=='p'){
                if(i+3<n && s[i+1]=='p' && s[i+2]=='i' && s[i+3]=='e'){
                    i+=3;
                }
                op++;
            }else if(s[i]=='i' && (s[i-1]=='p' && s[i+1]=='e')){
                op++;
            }
        }
        cout<<op<<endl;
    }
}