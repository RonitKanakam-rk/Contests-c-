//Topic:
//Date:11/10/2022

#include<iostream>
using namespace std;
void swap(int *n1,int *n2){
    int temp;
    temp= *n1;
    *n1=*n2;
    *n2=temp;
}
// int* compare(int size){
// //    int arr1[size];

// //     //  When n is even number
// //     if(size%2==0){
// //         for(int i=0;i<size;i++)
// //             {
// //                 arr1[i]=size-i;
// //             }
// //             return arr1;
// //     }
// //     else{
// //         for(int i=0;i<size;i++){
// //             arr1[i]=size-i;
// //         }

// //         int mid=(size/2)+1;
// //         int i=0;
// //         for(int i=mid;i<size;i++){
// //             swap(arr1[mid],arr1[size-i]);
// //             i++;
// //         }
// //         return arr1;

// //     }


// }

int main(){
    int TC;
    cin>>TC;
    while(TC--){
        int size;
        cin>>size;
        int arr1[size];
        if(size==0 || size==1 || size==3){
            cout<<"-1"<<endl;
            
        }
        // int *ptr =compare(size);
        // for(int i=0;i<size;i++){
        //     cout<<ptr[i];
        // 

    //  When n is even number
    else if(size%2==0){
        for(int i=0;i<size;i++)
            {
                arr1[i]=size-i;
            }
            for(int i=0;i<size;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<size;i++){
            arr1[i]=size-i;
        }

        int mid=(size/2);
        int i=1;
        for(int i=mid;i<size;i++){
            swap(arr1[mid],arr1[size]);
            size--;
        }
        for(int i=0;i<size;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;

    }
            

    }
    return 0;
}