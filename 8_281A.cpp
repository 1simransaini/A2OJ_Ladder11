#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;

    //to convert uppercase to lowercase the first letter
        if(s[0]>92)
        s[0] -= 32;

    //to print them
    for(int i=0;i<s.size(); i++){
        cout<<s[i];
    }
    return 0;

}
