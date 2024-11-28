#include<stdio.h>
int main(){
	int array[5]={1,2,3,4,5};
	int i;
	int j=5;
	printf("gia tri cua mang tu cuoi ve dau la:\n");
	for(int i=(sizeof(array)/sizeof(int))-1;i>=0;i--){
		printf("phan tu thu %d =%d\n",j,array[i]);
		j--;
		}
		return 0;
		}
