#include<stdio.h>

int main(){
	int L[6]={6,5,4,3,2,1}, temp, i, j , n =6, idx;
	
	for(i=0;i<(n-1);i++){
		idx=i;
		for(j=i+1;j<n;j++){
			if(L[j]<L[idx]){
				idx=j;
			}
		}
		temp=L[i];
		L[i]=L[idx];
		L[idx]=temp;
	}
	printf("\n Array : ");
	for(i=0;i<n;i++){
		printf("%d", L[i]);
	}
	printf("\n");
	return 0;
}
