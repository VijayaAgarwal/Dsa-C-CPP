//implementation of array
#include<bits/stdc++.h>
using namespace std;
#define max_size 100
int arr[max_size],len=0;
void insert(){
    int a,pos;
    cout<<"Enter element to be entered : ";
    cin>>a;
    cout<<"Enter position for insertion :";
    cin>>pos;
    --pos;
    if(pos>len){
        cout<<"Insertion outside array ";
        return;
    }
    else{
    for(int i=len;i>=pos;i--){
            arr[i+1]=arr[i];
        }
    arr[pos] =a;
    len++;
    cout<<"New array : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;  
}
}
void del(){
    int pos,i;
    cout<<"Enter position to be deleted : ";
    cin>>pos;
    --pos;
    if (pos>len){
        cout<<"Invalid position";
        return;
    }
    else{
        for(i=pos;i<=len-1;i++){
            arr[i]=arr[i+1];
        }
        len--;
        cout<<"New array : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl; 
    }
}
void print(){
    cout<<"Array : ";
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl; 
}
void find(){
    int no,f=0;
    cout<<"Enter number to be searched : ";
    cin>>no;
    for(int i=0;i<len;i++){
        if(arr[i]==no){
            f++;
        }
    }
    if(f>0){
            cout<<"Found";
        }
    else{
        cout<<"Not Found";
    }
}
void update(){
    int pos,n;
    cout<<"Enter position to be updated : ";
    cin>>pos;
    pos--;
    if(pos+1>len){
        cout<<"Invalid position ";
        return;
    }
    else{
        cout<<"Enter new element at the given position : ";
        cin>>n;
        arr[pos]=n;
        cout<<"Updated array is :"<<endl;
        print();
    }
}
int main(){
   int i,j,n,ch,ex=0;
    while(!ex){
   cout<<endl<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Traversal"<<endl<<"4. Serch"<<
   endl<<"5. Update"<<endl<<"6. Exit"<<endl;
   cin>>ch;
  
   switch(ch){
    case 1:
       insert();
       break;
    case 2:
       del();
       break; 
    case 3:
      print();
      break;
    case 4:
      find();
      break;
    case 5:
      update();
      break;         
    case 6:
       cout<<"Bye...";
       ex=1;   
   }
   }
}