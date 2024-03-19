#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool isanagram(string s,string t){
    if(s.size()!=t.size()) return false;
        vector<int>cnt(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;
        }
        int flag=0;
        for(int i=0;i<26;i++){
            if(cnt[i]!=0){
                return false;
            }
        }
    return true;
}
int main(){
    string s,t;
    cin>>s>>t;
    isanagram(s,t)?cout<<"yes":cout<<"no";
}