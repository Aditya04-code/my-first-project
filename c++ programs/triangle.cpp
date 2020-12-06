#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    
    if(s1==s2 && s1==s3){
        cout<<"triangle is equilateral";
    }
    else{
        if(s1==s2 || s1==s3 ||s3==s2){
            cout<<"triangle is isoscalen";

        }else{
            cout<<"triangle is scalen";
        }
    }
    return 0;

}