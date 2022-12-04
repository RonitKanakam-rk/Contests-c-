//Topic:
//Date:

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
// 
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main(){
    int TC;
    cin>>TC;
    while(TC--){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        selectionSort(arr,size);
        int count=0;
        for(int i=0;i<size;i++){
            if(arr[i]<arr[i+1])
                {
                    // cout<<arr[i]<<" ";
                    count++;
                }

               
        }
                // cout<<endl;
        if(count==size-1){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}