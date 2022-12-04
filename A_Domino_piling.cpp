//Date:10/10/2022

#include<iostream>
using namespace std;
int compare(int len,int bre)
{
    return ((len*bre)/2);
}
int main(){
    int lenM,breN;
    cin>>lenM>>breN;
    cout<<compare(lenM,breN);
    return 0;
}//This is t he new code