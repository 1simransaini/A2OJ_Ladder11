#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int low=0,upper=0;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]<97)
        upper++;
        else
        low++;
    }

    if(upper>low){
        for(int i=0;i<s.length();i++){
            if(s[i]>=97){
                s[i]=s[i]-32;
            }
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            if(s[i]<97){
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s;
    return 0;
}
