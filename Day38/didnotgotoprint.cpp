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
        stack<int>st;
        vector<bool>printed(n,0);
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                st.push(i);
            }else if(s[i]=='2'){
                if(st.empty()){
                    printed[i]=1;
                }else{
                    printed[st.top()]=1;
                    st.pop();
                }
            }else{
                printed[i]=1;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!printed[i])cnt++;
        }
        cout<<cnt<<endl;
        if(cnt==0){
            cout<<" "<<endl;
        }else{
            for(int i=0;i<n;i++){
                if(!printed[i]){
                    cout<<i+1<<" ";
                }
            }
        }
        cout<<endl;
    }
}