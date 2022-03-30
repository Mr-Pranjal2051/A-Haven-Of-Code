#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h=0,m=0,s=0,x;
    cin>>n;
    in
    int arr[n];
    int brr[n];
    /*for(int i=0;i<n;i++){
        cin>>arr[i];
        s+=arr[i];
    }*/
    for(int i=0;i<n;i++){
        cin>>brr[i];
        m+=brr[i];
    }
    /*if(s>=60){
        x=s/60;
        m+=x;
        s=s%60;
    }*/
    if(m>=60){
        h=m/60;
        m=m%60;
    }
    cout<<"Total time in HH:MM:SS :- "<<h<<":"<<m<<":"<<s<<endl;
}
