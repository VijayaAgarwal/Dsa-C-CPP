//radix or bucket sort on array
#include<bits/stdc++.h>
using namespace std;
#define max 100
int a[max],n,i;
int main(){
    void input(void);
    input();
}
void input(void){
    void output(int a[],int n);
    void radix_sort(int a[],int n);
    cout<<"Enter number of elements in array : ";
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    radix_sort(a,n);
    cout<<" Sorted array : ";
    output(a,n);
}
void radix_sort(int a[],int n){
    int bucket[10][5],buck[10],b[10];
    int i,j,k,l,num,div,large,passes;
    div=1;
    num=0;
    large=a[0];
    for(i=0;i<n;i++){
        if (a[i]>large)
        large=a[i];
    }
    while(large>0){
        num++;
        large=large/10;
    }
    for(passes=0;passes<n;passes++){
        for(k=0;k<10;k++)
             buck[k]=0;
        for(i=0;i<n;i++){
            l=(a[i]/div)%10;
            bucket[l][buck[l]++]=a[i];
        }     
        i=0;
        for(k=0;k<10;k++){
            for(j=0;j<buck[k];j++){
                a[i++]=bucket[k][j];
            }
        }
        div*=10;
    }
}
void output(int a[],int n){
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
