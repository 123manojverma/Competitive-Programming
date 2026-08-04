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
        int cnt=1;
        int flag=0;
        for(int i=1;i<n-1;i++){
            if(flag==0 && s[i+1]==s[i-1] && s[i]!=s[i+1]){
                flag=i;
                break;
            }
        }

        bool pre=true;
        if(flag==0){
            pre=false;
        }
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])continue;
            if(!pre && i<n-1){
                if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                    pre=true;
                }else{
                    cnt++;
                }
            }else if(flag!=0 && i==flag){
                continue;
            }else if(flag!=0 && i==flag+1){
                if(s[i]==s[i-2]){
                    continue;
                }else{
                    cnt++;
                }
            }else{
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}