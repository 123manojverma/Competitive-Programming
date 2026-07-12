#include<bits/stdc++.h>
using namespace std;

int main(){
    // string -> a set of characters, yes can change the characters
    // string literals -> a set of characters it is not editable
    // string s="abcde";
    // auto i="452";
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n<10){
            cout<<s<<endl;
            continue;
        }
        int length=n-2;
        char first=s[0];
        char last=s[n-1];
        cout<<first<<length<<last<<endl;
    }

}