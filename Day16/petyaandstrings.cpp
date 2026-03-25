#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    for(auto& x:a){
        x=tolower(x);
    }
    for(auto& x:b){
        x=tolower(x);
    }
    if(a>b){
        cout<<1;
    }else if(a<b){
        cout<<-1;
    }else{
        cout<<0;
    }
}