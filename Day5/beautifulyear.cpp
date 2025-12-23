#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    int arr[4];
    for(int i=0;i<4;i++){
        arr[i]=n%10;
        n=n/10;
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=9012;i++){
        if(check(i)){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}