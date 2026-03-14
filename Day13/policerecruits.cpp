#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int officer=0;
    int crime=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>0){
            if(x>10){
                officer+=10;
            }else{
                officer+=x;
            }
        }
        if(x<0){
            if(officer>0){
                officer--;
            }else{
                crime++;
            }
        }
    }
    cout<<crime<<endl;
}