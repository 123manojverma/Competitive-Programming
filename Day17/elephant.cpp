#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int ans=x/5;
    if(x%5==0){
        cout<<ans<<endl;
    }else{
        cout<<ans+1<<endl;
    }
}