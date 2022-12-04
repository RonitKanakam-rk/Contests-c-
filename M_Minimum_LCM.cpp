// //Topic:Minimum LCM
// //Date:02/12/2022

#include<bits/stdc++.h>
using namespace std;
void minLCM(long int n){
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
    }
    else if(n%3==0){
        cout<<n/3<<" "<<n-(n/3)<<endl;
    }
    else{
        cout<<"1"<<" "<<n-1<<endl;
    }
}
int main(){
    int TC;
    // cin>>TC;
    scanf("%d",&TC);
    // long int arr[TC];
    // for(int i=0;i<TC;i++){
    //     // cin>>arr[i];
    //     scanf("%ld",&arr[i]);
        
    // }
    //  for(int i=0;i<TC;i++){
    //     minLCM(arr[i]);
    // }
	while(TC--){
		int num;
		cin>>num;
		minLCM(num);
	}
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int q,n,y,i;
// 	cin>>q;
// 	while(q--)
// 	{
// 		cin>>n,y=1;
// 		for(i=2;i<=sqrt(n);i++)
// 		if(n%i==0)
// 		{
// 			y=n/i;
// 			break;
// 		}
// 		printf("%d %d\n",y,n-y);
// 	}
// }