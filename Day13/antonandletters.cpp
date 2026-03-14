#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    unordered_set<char>set;
    for(int i=0;i<s.size();i++){
        if(s[i]!='{' && s[i]!='}' && s[i]!=' ' && s[i]!=','){
            set.insert(s[i]);
        }
    }
    cout<<set.size();
}