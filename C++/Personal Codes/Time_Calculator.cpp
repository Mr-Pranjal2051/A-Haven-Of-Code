#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j,a=0,b=0,c=0,d;
    cin>>n;
    n*=3;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        a+=arr[i];
        b+=arr[i+1];
        c+=arr[i+2];
        i+=2;
    }
    if(c>60){
        d=c/60;
        b+=d;
        c=c%60;
    }
    if(b>60){
        j=b/60;
        a+=j;
        b=b%60;
    }
    cout<<"Total time in HH:MM:SS :- "<<a<<":"<<b<<":"<<c<<endl;
}
