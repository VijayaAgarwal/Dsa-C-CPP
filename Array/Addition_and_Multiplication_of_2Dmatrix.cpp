#include<bits/stdc++.h>
using namespace std;
int main(){
	int j,i,row1,row2,col1,col2;
    cout<<"Enter rows of first matrix : ";
	cin>>row1;
    cout<<endl<<"Enter columns of first matrix : ";
    cin>>col1;
    cout<<endl<<"Enter rows of second matrix : ";
	cin>>row2;
    cout<<endl<<"Enter columns of second matrix : ";
    cin>>col2;
	int mat1[row1][col1],mat2[row2][col2];
	cout<<"enter elements of first matrix : " <<endl;
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			cin>>mat1[i][j];
		}
	}
	printf("enter elements of second matrix :\n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			cin>>mat2[i][j];
		}
	}
    if((row1==row2)&&(col1==col2)){
        int row=row1,col=col1;
	int addm[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			addm[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
    cout<<"First Matrix is :"<<endl;;
    for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
    cout<<"Second Matrix is :"<<endl;;
    for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	cout<<"sum of matrix is : "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d\t",addm[i][j]);
		}
		printf("\n");
	}
    }
    else{
        cout<<"Addition is not possible"<<endl;
    }
    
	
	if(col2!=row1){
		printf("multiplication not possible");
	}
	 
	else{
        int mulmat[row1][col2];
		for(int i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			mulmat[i][j]=0;
			for(int k=0;k<col1;k++){
				mulmat[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
    	printf("the resultant matrix is :\n");
		for(int i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			printf("%d\t",mulmat[i][j]);
		}
		printf("\n");
	}
	}

	return 0;
}
