#include<iostream>
using namespace std;
int main(){
    const int chrg_sml_room=25;
    const int chrg_lrg_room=30;
    const float rate=0.06;
    const int estd_time=30;
    int ttl_sml_room,ttl_lrg_room,price_sml,price_lrg,cost;
    float tax,tot_estd;
    cout<<"Welcome to Pratyush's Room cleaning services"<<endl;
    cout<<"============================================"<<endl;
    cout<<"Number of small rooms:";
    cin>>ttl_sml_room;
    cout<<"Number of Large rooms:";
    cin>>ttl_lrg_room;
    cout<<"Price per small room:";
    cin>>price_sml;
    cout<<"Price per large room:";
    cin>>price_lrg;
    cost=ttl_sml_room*price_sml+ttl_lrg_room*price_lrg;
    tax=cost*0.06;
    tot_estd=tax+cost;
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"Total Estimate: $"<<tot_estd<<endl;
    cout<<"This estimate is valid for "<<estd_time<<" days"<<endl;


}
