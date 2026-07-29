#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    k=k%10;
    for(int i=1;i<10;i++){
        int val=(k*i)%10;
        if(val==0 || val-r==0){
            cout<<i;
            return 0;
        }
    }
    cout<<10;
}