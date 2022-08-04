#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    vector<int> vec;
    do{
        cout<<"-----------------------------------------------"<<endl;
        cout<<"P - Print the elements of the list."<<endl;
        cout<<"A - Add an element to the list."<<endl;
        cout<<"M - Print the mean of the elements in the list."<<endl;
        cout<<"S - Print the smallest element in the list."<<endl;
        cout<<"L - Print the largest element in the list."<<endl;
        cout<<"C - Count the total occurance of a given element in the list."<<endl;
        cout<<"Q - To quit from the program."<<endl;
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Enter the operation you want to perform:\n";
        cin>>c;
        switch(c){
            case 'P':
            case 'p':
                if(vec.size()==0)cout<<"[] - The list is empty."<<endl;
                else{
                    for(int i=0;i<vec.size();i++){
                        if(i==0)cout<<"[ ";
                        cout<<vec[i]<<" ";
                        if(i==vec.size()-1)cout<<"]"<<endl;
                    }
                }cout<<endl;
                break;
            case 'A':
            case 'a':
                int m;
                cout<<"Enter the value you wish to add in the list:"<<endl;
                cin>>m;
                if(!count(vec.begin(),vec.end(),m)){
                    vec.push_back(m);
                    cout<<m<<" entered."<<endl;
                    cout<<endl;
                }
                else{
                    cout<<"Value already exits, please input a different value."<<endl;
                }
                break;
            case 'M':
            case 'm':
                double mean;
                if(vec.size()==0)cout<<"Unable to determine mean - list is empty."<<endl;
                else{
                    for(int i=0;i<vec.size();i++){
                        mean+=vec[i];
                    }mean=mean/vec.size();
                    cout<<"The value of mean is: "<<mean<<endl;
                }cout<<endl;
                break;
            case 'S':
            case 's':
                if(vec.size()==0)cout<<"Unable to determine smallest value - list is empty."<<endl;
                else{
                    int minn=0;
                    minn=*min_element(vec.begin(),vec.end());
                    cout<<"The value of the smallest value is: "<<minn<<endl;
                }cout<<endl;
                break;
            case 'L':
            case 'l':
                if(vec.size()==0)cout<<"Unable to determine largest value - list is empty."<<endl;
                else{
                    int maxx=0;
                    maxx=*max_element(vec.begin(),vec.end());
                    cout<<"The value of the largest value is: "<<maxx<<endl;
                }cout<<endl;
                break;
            case 'C':
            case 'c':
                if(vec.size()==0)cout<<"List is empty, so, the count is 0."<<endl;
                else{
                    int n;
                    cout<<"Enter the value you wish to find the count of: "<<endl;
                    cin>>n;
                    cout<<"The count of the given value is: "<<count(vec.begin(),vec.end(),n)<<endl;
                }cout<<endl;
                break;
            case 'Q':
            case 'q':
                cout<<"Goodbye..."<<endl;
                return 0;
            default:
                cout<<"Unknown selection, please try again..."<<endl<<endl;
        }
    }while(c!='q'||c!='Q');
}
