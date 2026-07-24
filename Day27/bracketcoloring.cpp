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
        int l=0,r=0;
        bool flag1=false,flag2=false;
        int color=1;
        vector<int>res;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(r==0){
                    flag1=true;
                    l++;
                    color=1;
                }else{
                    r--;
                }
                res.push_back(color);
            }else if(s[i]==')'){
                if(l==0){
                    flag2=true;
                    r++;
                    color=2;
                }else{
                    l--;
                }
                res.push_back(color);
            }
        }
        if(l>0 || r>0){
            cout<<-1<<endl;
            continue;
        }

        if(flag1 && flag2){
            cout<<2<<endl;
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
        }else{
            cout<<1<<endl;
            for(int i=0;i<res.size();i++){
                cout<<1<<" ";
            }
        }

        cout<<endl;
    }
}