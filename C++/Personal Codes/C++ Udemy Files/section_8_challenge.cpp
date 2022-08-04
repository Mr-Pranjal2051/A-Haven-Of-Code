#include<iostream>
using namespace std;
int main(){
    /*
    1 dollar = 100 cents
    1 quarter = 25 cents
    1 dime = 10 cents
    1 nickel = 5 cents
    1 penny = 1 cent
    */
    int m,temp=0,d=0,q=0,di=0,n=0,a,p;
    cout<<"Enter the total amount in cents:\n";
    cin>>m;
    cout<<"Which method would you like to use ?"<<endl;
    cout<<"1. Modulo Method"<<endl<<"2. Non-Modulo Method"<<endl;
    cout<<"Just enter the option number:\n";
    cin>>a;
    if(m>0){
        if(a==1){
            d=m/100;
            temp=m%100;
            q=temp/25;
            temp%=25;
            di=temp/10;
            temp%=10;
            n=temp/5;
            temp%=5;
            cout<<"Solving through the modulo method\n";
        }
        if(a==2){
            while(m<0){

            }
        }
    }
    cout<<"You can provide change for this values following:\n";
    cout<<"Dollars  : "<<d<<endl;
    cout<<"Quarters : "<<q<<endl;
    cout<<"Dimes    : "<<di<<endl;
    cout<<"Nickels  : "<<n<<endl;
    cout<<"Pennies  : "<<temp<<endl;

}
