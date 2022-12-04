//Topic:
//Date:

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<4;i++){
        cin>>s[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(s[i]=="++X")   
            x=++x;
        else if(s[i]=="X++")
            x++;
        else if(s[i]=="--X")
            x=--x;
        else 
            x--;    

    }
    cout<<x;
    return 0;

}