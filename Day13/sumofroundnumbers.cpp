#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int power=1;
        while(n>0){
            int digit=n%10;
            if(digit!=0){
                arr.push_back(digit*power);
            }
            power*=10;
            n/=10;
        }
        cout<<arr.size()<<endl;
        for(int i=arr.size()-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}