/* C Program to Perform Scalar Matrix Multiplication */

#include<stdio.h>
 
//int main()
//{
// 	int i, j, rows, columns, Multiplication[10][10], N;
//  
// 	printf("\n Please Enter Number of rows and columns\n");
// 	scanf("%d %d", &i, &j);
// 
// 	printf("\n Please Enter the Matrix Elements \n");
// 	for(rows = 0; rows < i; rows++)
//  	{
//   		for(columns = 0;columns < j;columns++)
//    	{
//      		scanf("%d", &Multiplication[rows][columns]);
//    	}
//  	}
//   	printf("\n Matrix Value  : \n ");
//   		for(rows = 0; rows < i; rows++)
//  	{
//   		for(columns = 0; columns < j; columns++)
//    	{
//      		printf("%d \t ", Multiplication[rows][columns]);
//    	}
//    	printf("\n");
//  	}
//  	
// 	printf("\n Please Enter the Multiplication Value  :  ");
// 	scanf("%d", &N);
// 	  
// 	for(rows = 0; rows < i; rows++)
//  	{
//   		for(columns = 0; columns < j; columns++)
//    	{
//      		Multiplication[rows][columns] = N * Multiplication[rows][columns];    
//   	 	}
//  	}
// 
// 	printf("\n The Result of a Scalar Matrix Multiplication is : \n");
// 	for(rows = 0; rows < i; rows++)
//  	{
//   		for(columns = 0; columns < j; columns++)
//    	{
//      		printf("%d \t ", Multiplication[rows][columns]);
//    	}
//    	printf("\n");
//  	}
// 	return 0;
//
//
//}
//	int a[2][3]={1,2,3,4,5};
//	int i=0,j=0;
//	
//	for(i=0;i<2;i++)
//	for(j=0; j<3; j++)
//	
//	printf("%d", a[i][j]);

int main(){
//	int arr[3][3]={
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	
//	int i,j,mid=1;
//	for(i=0; i<3 ; i++){
//		for(j=0;j<3;j++){
//			if(i==mid || j == mid){
//				printf("%d",arr[i][j]);
//			}
//		}
//	}
//	return 0;
	
	int arr[4][2]= {
	{1,2},
	{4,5},
	{7,8},
	{9,10}
	};
	
	int i,j,temp;
	for(i=0;i<4;i++){
		temp=arr[i][0];
		arr[i][0]=arr[i][1];
		arr[i][1]=temp;
	}
	
	for(i=3;i>=0;i--){
		for(j=1;j>=0;j--){
			printf("%d",arr[i][j]);
		}
	}
	return 0;
}
