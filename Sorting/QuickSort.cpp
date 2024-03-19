//quick sort on array
#include<bits/stdc++.h>
using namespace std;
#define max_size 100
int arr[max_size],l,h;
void quick_sort(int arr[],int l,int h){
     int temp,low,high,key;
     low=l;
     high=h;
     key=arr[(low+high)/2];
     do{
        while(key>arr[low]){
            low++;
        }
        while(key<arr[high]){
            high--;
        }
        if(low<=high){
            temp=arr[low];
            arr[low++]=arr[high];
            arr[high--]=temp;
        }
     }
     while(low<=high);
     if(l<high){
        quick_sort(arr,l,high);
     }
     if(low<h){
        quick_sort(arr,low,h);
     }
     
}
int main(){
    void quick_sort(int arr[],int l,int h);
    int i,j,temp,n;
 
    cout<<endl<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    
    cout<<"Elements before sorting : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quick_sort(arr,l,h);
    cout<<endl<<"Elements of array after sorting are : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


