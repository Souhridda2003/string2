#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    char max1='!';
    char max2='!';
    for(int i=0;i<s.length();i++){
        if(max1<s[i]){
            max2=max1;
            max1=s[i];
        }
        else if(max2<s[i] && max1!=max2){
            max2=s[i];
        }
    }
    if(max2=='!') cout<<"no largest number";
    else cout<<max2<<" "<<"is the 2nd largest number";
}