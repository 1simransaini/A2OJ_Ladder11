//A. Beautiful Year====271A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    int a,b,c,d;
    cin>>year;
    
    while(true){
        year++;         //incremented the year one by one!!
        
        //1st digit of the year
        a=year/1000;
        
        //2nd
        b=year/100 %10;
        
        //3rd digit
        c=year/10 %10;
        
        //4th digit
        d=year%10;
        
        //now we check whether we get the year as distinct or not
        if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d){
            cout<<year;
            break;
        }
    }
    return 0;
}
