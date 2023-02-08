//Young Physicist //69A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x,y,z;
    int sumx=0, sumy=0, sumz=0;
    int n;
    cin>>n;
    
    while(n--){
        cin>>x>>y>>z;
        
        sumx += x;
        sumy += y;
        sumz += z;
    }
    
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}
