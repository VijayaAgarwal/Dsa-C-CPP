//merge sort implementation
#include<bits/stdc++.h>
using namespace std;
#define max 10
void merge(int *a,int *temp,int low,int mid,int high);
void m_sort(int *arr,int *temp,int low,int high){
    int mid;
    if(high>low){
        mid=(low+high)/2;
        m_sort(arr,temp,low,mid);
        m_sort(arr,temp,mid+1,high);
        merge(arr,temp,low,mid+1,high);
    }
}
void merge(int *arr,int *temp,int low,int mid,int high){
    int i,end,num,pos;
    end=mid-1;
    pos=low;
    num=high-low+1;
    while((low<=end)&&(mid<=high))
    {
        if(arr[low]<=arr[mid]){
            temp[pos]=arr[low];
            pos=pos+1;
            low=low+1;
        }
        else{
            temp[pos]=arr[mid];
            pos=pos+1;
            mid=mid+1;
        }
    }
    while(low<=end){
        temp[pos]=arr[low];
        low=low+1;
        pos=pos+1;
    }
    while(mid<=high){
        temp[pos]=arr[mid];
        mid=mid+1;
        pos=pos+1;
    }
    for(i=0;i<num;i++){
        arr[high]=temp[high];
        high=high-1;
    }
}
int main(){
    int num,arr[max],temp[max],i;
    cout<<"Enter number of elements : ";
    cin>>num;
    if(num>max)
     cout<<"Array out of bound ";
    else{
        for(i=0;i<num;i++){
            cin>>arr[i];
        }
        m_sort(arr,temp,0,num);
        cout<<"the list after sorting is : ";
        for(i=0;i<num;i++){
            cout<<arr[i]<<" ";
        }
    } 
}