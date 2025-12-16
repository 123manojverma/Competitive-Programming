#include<iostream>
using namespace std;

int main(){
    int t,i=0;
    cin>>t;
    while(t--){
        int a,b,c,cnt=0;
        cin>>a>>b>>c;
        if(a==1)cnt++;
        if(b==1)cnt++;
        if(c==1)cnt++;
        if(cnt>=2){i++;}
    }
    cout<<i;
}