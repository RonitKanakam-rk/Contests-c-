//Topic:
//Date:16/10/2022

#include<bits/stdc++.h>
using namespace std;
void PosReturn(string str,int size,char sPos){
    int startPos=0,endPos=0;
    for(int i=0;i<size;i++){
        if(str[i]==sPos){

            startPos=i+1;
            break;
        }
        

    }
    for(int i=startPos;i<size;i++){
        if(str[i]=='g'){

            endPos=i;
            break;
        }
    }
    cout<<(endPos-startPos)<<endl;

}
int main(){
    int TC;
    cin>>TC;
    while(TC--){

    int size;
    char sPos;
    string str;
    cin>>size;
    cin>>sPos;
    cin>>str;

    PosReturn(str,size,sPos);
  
    }


             
    return 0;
}