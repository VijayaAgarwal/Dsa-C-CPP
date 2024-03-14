//Bubble sort on array
#include<bits/stdc++.h>
using namespace std;
#define max_size 100
int main(){
    int arr[max_size],i,j,temp,n;
    cout<<endl<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements before sorting : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }   
    }
   cout<<endl<<"Elements of array after sorting are :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }
}


