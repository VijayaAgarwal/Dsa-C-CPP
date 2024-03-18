#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    int a[r][c];
    int b[c][r];
    
    cout<<endl<<"Enter elements : "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            b[j][i]=a[i][j];
        }
    }
    cout<<"Matrix is : "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<< " ";

        }
        cout<<endl;
    }
    cout<<"Transpose of matrix is :"<<endl;
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<b[i][j]<< " ";

        }
        cout<<endl;
    }
}