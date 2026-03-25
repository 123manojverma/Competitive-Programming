#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]=='+' || arr[i][2]=='+'){
            val++;
        }else if(arr[i][0]=='-' || arr[i][2]=='-'){
            val--;
        }
    }
    cout<<val;
}