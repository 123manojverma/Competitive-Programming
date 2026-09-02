#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string res="";
        int j=-1,k=-1;
        for(int i=0;i<s.size();i++){
            if(j==-1 && s[i]=='0'){
                j=i;
            }
            if(k==-1 && s[i]=='1'){
                k=i;
            }
        }

        for(int i=0;i<s.size();i++){
            if(j==i || k==i){
                continue;
            }
            res+=s[i];
        }
        cout<<res<<endl;
    }
    
}