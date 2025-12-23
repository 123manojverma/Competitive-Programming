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
        int count=0;
        bool countinous=false;
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+2<n && s[i+1]=='.' && s[i+2]=='.'){
                countinous=true;
                break;
            }
            if(s[i]=='.')count++;
        }
        if(countinous){
            cout<<2<<endl;
        }else{
            cout<<count<<endl;
        }
    }
    return 0;
}