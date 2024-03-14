//selection sort on array
#include<bits/stdc++.h>
using namespace std;
#define max_size 100
int main(){
    int arr[max_size],i,j,loc,min,temp,n;
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
    min=arr[0];
    for(i=0;i<=n-1;i++){
        min=arr[i];
        loc=i;
        for(j=i+1;j<=n-1;j++){
            if(arr[j]<min){
                min=arr[j];
                loc=j;
            }
        }
        if(loc!=i){
            temp=arr[i];
            arr[i]=arr[loc];
            arr[loc]=temp;
        }
    }
    cout<<"Elements of array after sorting are :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


