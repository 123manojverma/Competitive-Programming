#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0,pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=-1){
            neg++;
        }
        if(arr[i]>=1){
            pos++;
        }
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}