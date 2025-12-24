#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // bool flag=false;
    // int cnt=0;
    // string s=to_string(n);
    // for(int i=0;i<s.length();i++){
    //     if(s[i]=='1'){
    //         cnt=0;
    //         continue;
    //     }else if(i>0 && s[i]=='4' && s[i-1]=='1' && cnt==0){
    //         cnt=1;
    //     }else if(i>1 && s[i]=='4' && s[i-1]=='4' && cnt==1){
    //         cnt=2;
    //     }else{
    //         flag=true;
    //         cout<<"NO"<<endl;
    //         break;
    //     }
    // }
    // if(!flag){
    //     cout<<"YES"<<endl;
    // }
    // return 0;

    int n;cin>>n;
    string s=to_string(n);
    int i=0;
    bool ok=true;
    while(i<s.length()){
        if(s.substr(i,3)=="144"){
            i+=3;
        }else if(s.substr(i,2)=="14"){
            i+=2;
        }else if(s[i]=='1'){
            i+=1;
        }else{
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}