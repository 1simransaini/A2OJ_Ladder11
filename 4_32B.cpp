//32B==============B.Borze
#include<bits/stdc++.h>
using namespace std;

int main(){
    string borze;
    cin>>borze;
    
    for(int i=0;i<borze.size();i++){
        if(borze[i]=='.'){
            cout<<'0';
        }
        else if(borze[i]=='-' && borze[i+1]=='.'){
            cout<<'1';
            i++;
        }
        else if(borze[i]=='-' && borze[i+1]=='-'){
            cout<<'2';
            i++;
        }
    }
    return 0;
}
