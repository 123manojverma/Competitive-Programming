#include<bits/stdc++.h>
using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int x,y,n;
        cin>>x>>y>>n;
        x%=n;
        int z=1;
        while(y>0){
            if(y&1){
                z=(z*x)%n;
            }
            y>>=1;
            x=(x*x)%n;
        }
        cout<<z<<endl;
    }
}