//Topic:
//Date:11/10/2022

#include<iostream>
#include<string.h>
using namespace std;
char TShirtSize(string s1,string s2){
    int lenS1=s1.length(); //length of string 1
    int lenS2=s2.length();// length of string 2

    // For the smaller size of T-shirt
    if(s1[lenS1-1]=='S' && s2[lenS2-1]=='S'){
        if(lenS1>lenS2)
            return '<';
        else if(lenS1<lenS2)
            return '>';
        else 
            return '='   ; 
    }
    else if(s1[lenS1-1]=='S' && (s2[lenS2-1]=='M' || s2[lenS2-1]=='L'))
    {
        return '<';
    }

    // For the Medium size of the T-shirt

    else if(s1[lenS1-1]=='M' && s2[lenS2-1]=='M')
    {
        return '=';
    }
    else if(s1[lenS1-1]=='M' && s2[lenS2-1]=='S'){
        return '>';
    }   
    else if(s1[lenS1-1]=='M' && s2[lenS2-1]=='L'){
        return '<';
    }

    //  For  the Large size of T-shirt

    else if(s1[lenS1-1]=='L' && s2[lenS2-1]=='L'){
        if(lenS1>lenS2)
            return '>';
        else if(lenS1<lenS2)
            return '<';
        else 
            return '=';    
    }
    else {
        return '>';
    }


}

int main(){
    int TC;
    cin>>TC;
    while(TC--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<TShirtSize(s1,s2)<<endl; 
    }
    
    return 0;
}