#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int sum=x+y+z;
        if(x>=y && x>=z){
            for(int i=0;i<sum;i++){
                cout<<"P";
            }
            cout<<'\n';
        }else if(y>=x && y>=z){
            for(int i=0;i<sum;i++){
                cout<<"R";
            }
            cout<<'\n';
        }else{
            for(int i=0;i<sum;i++){
                cout<<"S";
            }
            cout<<'\n';
        }
    }
}