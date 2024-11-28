#include<stdio.h>
int main(){
	int mang[2][3]={
		{1,2,0},
		{6,4,8}
		};
		int i,j,hang,cot,dieukien=0;
		int n;
     	printf("nhap vao 1 phan tu bat ki:");
    	scanf("%d",&n);
		for(int i=0;i<2;i++){
			for(j=0;j<3;j++){
				if(n==mang[i][j]){
					hang=i;
					cot=j;
					dieukien=1;
					break;}}}
				
					
			        if(dieukien==1){
					printf("phan tu %d ban vua nhap thuoc: hang%d,cot%d\n",n,hang,cot);
					}else{
						printf("phan tu ban vua nhap khong co trong mang");
						
					}	
					return 0;
					}
						
			
					
		
