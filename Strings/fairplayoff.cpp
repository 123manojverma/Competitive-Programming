#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        if((s1>s3 && s1>s4) && (s2>s3 && s2>s4) || (s3>s1 && s3>s2) && (s4>s1 && s4>s2)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}