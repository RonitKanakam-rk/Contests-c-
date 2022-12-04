//Topic:
//Date:

#include<iostream>
using namespace std;
char compare(int num1,int num2,int num3){


   int sum=abs((num1+num2+num3)/2);
       if(sum==num1 || sum==num2 || sum==num3)
            return 1;

        return 0;

}
int main(){
    int TC;
    cin>>TC;
    while(TC--){
        int num1,num2,num3;
        cin>>num1>>num2>>num3;
char c=compare(num1,num2,num3);
    if(c==1)
        cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;  
    }
    
    return 0;
}