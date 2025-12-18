#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1="";
    cin>>s;
    if(s[0]>='a' && s[0]<='z'){
        s1=s[0]-32;
        s1+=s.substr(1,s.size()-1);
    }else{
        s1=s;
    }
    cout<<s1;
}