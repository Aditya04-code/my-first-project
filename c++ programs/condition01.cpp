#include<iostream>
using namespace std;
int main(){
    int saving;
    cin>>saving;
    if (saving>5000){
        if (saving>10000){
            cout<<"go on a road trip\n";
        } else {
            cout<<"go to party\n";
        }
    } else if (saving>2500){
        cout<<"go to shooping\n";
        
    } else {
        cout<<"go with friends\n";
    }
    

    return 0;
    
}






    
