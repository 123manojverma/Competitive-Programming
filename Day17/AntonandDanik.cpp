#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int A=0,D=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            A++;
        }else{
            D++;
        }
    }
    if(A==D){
        cout<<"Friendship"<<endl;
    }else if(A>D){
        cout<<"Anton"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }
}