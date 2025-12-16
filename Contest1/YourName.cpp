#include<iostream>
using namespace std;

int main(){
    int c;
    cin>>c;
    while(c--){
        int size;
        cin>>size;
        int arr[26]={0};
        string s1,s2;
        cin>>s1>>s2;
        if(s1.length()!=size || s2.length()!=size){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<s1.size();i++){
            arr[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            arr[s2[i]-'a']--;
        }
        bool flag=true;
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}