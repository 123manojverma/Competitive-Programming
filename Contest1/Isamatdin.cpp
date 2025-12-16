#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int a;
        cin>>a;
        vector<int>arr(a);
        bool even=false;
        bool odd=false;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even=true;
            }else{
                odd=true;
            }
        }
        if(even && odd){
            sort(arr.begin(),arr.end());
        }
        for(int i=0;i<a;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}