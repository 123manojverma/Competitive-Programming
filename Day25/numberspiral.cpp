#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int y,x;
        cin>>x>>y;
        if(x>y){
            long long val=x*x;
            if(x%2==0){
                cout<<val-y+1<<endl;
            }else{
                cout<<val-x-(x-y-1)<<endl;    
            }
        }else if(x==y){
            cout<<(long long) x*x-(x-1)<<endl;
        }else{
            long long val=y*y;
            if(y%2==0){
                cout<<val-y-(y-x-1)<<endl;
            }else{
                cout<<val-(x-1)<<endl;    
            }
        }
    }
}