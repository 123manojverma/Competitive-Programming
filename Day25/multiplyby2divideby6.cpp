#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=true;
        int two=0,three=0;
        while(n>1){
            if(n%3==0){
                n/=3;
                three++;
            }else if(n%2==0){
                n/=2;
                two++;
            }else{
                flag=false;
                break;
            }
        }
        if(two>three || !flag){
            cout<<-1<<endl;
        }else{
            cout<<three-two+three<<endl;
        }
    }
}