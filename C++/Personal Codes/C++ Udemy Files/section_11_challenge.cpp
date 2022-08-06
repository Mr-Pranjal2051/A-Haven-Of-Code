#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int print(const vector<int> &v){
    if(v.size()==0)cout<<"[] - The list is empty"<<endl;
    else {
        cout<<"[ ";
        for(auto x:v)cout<<x<<" ";
        cout<<"]"<<endl;
    }
}
int add_ele(vector<int> &v){
    int a {};
    char c {};
    cout<<"Enter a value for addition:"<<endl;
    cin>>a;
    v.push_back(a);
    cout<<"Element added successfully."<<endl;
    /*cout<<"Would you like to add again ?(Y/N)"<<endl;
    if(c=='N'|| c=='n')return 0;
    else add_ele(v);*/
}
int mean(vector<int> &v){
    double temp {};
    for(auto c:v){
        temp+=c;
        temp=temp/v.size();
    }
    cout<<"The mean of the elements is: "<<temp<<endl;
}
int smallest(vector<int> &v){
    cout<<"The smallest element of the list is: "<<*min_element(v.begin(),v.end())<<endl;
}
int largest(vector<int> &v){
    cout<<"The largest element of the list is: "<<*max_element(v.begin(),v.end())<<endl;
}
inline int clear_list(vector<int> &v){
    v.clear();
    cout<<"List cleared."<<endl;
}
/*inline void Quit(){
    exit();
}*/
int main(){
    vector<int> v;
    char ch {};
    do{
        cout<<"------------------OPTIONS-------------------"<<endl;
        cout<<"P - Printing the elements in the list.\n";
        cout<<"A - Add an element in the list.\n";
        cout<<"M - Finding the mean of all the elements.\n";
        cout<<"S - Finding the smallest number in the list.\n";
        cout<<"L - Finding the largest number in the list.\n";
        cout<<"C - Clearing the list.\n";
        cout<<"Q - Quit.\n";
        cout<<"--------------------------------------------"<<endl;
        cout<<"Please select the operation:"<<endl;
        cin>>ch;
        switch(ch){
            case 'P':
            case 'p':
                print(v);
                break;
            case 'A':
            case 'a':
                add_ele(v);
                break;
            case 'M':
            case 'm':
                mean(v);
                break;
            case 'S':
            case 's':
                smallest(v);
                break;
            case 'L':
            case 'l':
                largest(v);
                break;
            case 'C':
            case 'c':
                clear_list(v);
                break;
            case 'Q':
            case 'q':
                //Quit(v);
                return 0;
                break;
            default:
                cout<<"Unknown selection, please try again..."<<endl;
        }cout<<endl;
    }while(ch!='Q' || ch!='q');
    return 0;
}
