#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0;
    int freq[26]={0};
    for(auto& x:s){
        x=tolower(x);
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cnt++;
        }
    }
    if(cnt%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}