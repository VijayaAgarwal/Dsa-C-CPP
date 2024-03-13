//insertion sort on array
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
    for(int k=1;k<=n-1;k++){
       temp=arr[k];
       j=k-1;
       while((temp<arr[j])&&(j>=0)){
        arr[j+1]=arr[j];
        j=j-1;
       }
       arr[j+1]=temp;
    }
    cout<<"Elements of array after sorting are :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


