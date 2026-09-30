#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int i=0,j=n-1,op=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;j--;
                continue;
            }else if(s[i]==c || s[j]==c){
                op+=1;
            }else{
                op+=2;
            }
            i++;j--;
        }
        cout<<op<<endl;
    }
}