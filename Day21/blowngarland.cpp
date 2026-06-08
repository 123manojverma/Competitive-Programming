#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0,b=0,c=0,d=0;
    char a1,b1,c1,d1;
    for(int i=0;i<s.size();i+=4){
        for(int j=0;j<4 && i+j<s.size();j++){
            if(j==0){
                if(s[i+j]=='!')a++;
                else a1=s[i+j];
            }
            
            if(j==1){
                if(s[i+j]=='!')b++;
                else b1=s[i+j];
            }
            
            if(j==2){
                if(s[i+j]=='!')c++;
                else c1=s[i+j];
            }
            
            if(j==3){
                if(s[i+j]=='!')d++;
                else d1=s[i+j];
            }
        }
    }
    int arr[]={0,0,0,0};
    if(a1=='R')arr[0]=a;
    if(b1=='R')arr[0]=b;
    if(c1=='R')arr[0]=c;
    if(d1=='R')arr[0]=d;

    if(a1=='B')arr[1]=a;
    if(b1=='B')arr[1]=b;
    if(c1=='B')arr[1]=c;
    if(d1=='B')arr[1]=d;

    if(a1=='Y')arr[2]=a;
    if(b1=='Y')arr[2]=b;
    if(c1=='Y')arr[2]=c;
    if(d1=='Y')arr[2]=d;

    if(a1=='G')arr[3]=a;
    if(b1=='G')arr[3]=b;
    if(c1=='G')arr[3]=c;
    if(d1=='G')arr[3]=d;

    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

}