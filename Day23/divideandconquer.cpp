#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        bool flag=false;
        for(int i=1;i<=100;i++){
            if(x==y*i){
                flag=true;
                break;
            }else if(x<y*i)break;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}