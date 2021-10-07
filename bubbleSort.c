#include<stdio.h>
void main()
{
	int x[10],i,j,temp;
	printf("enter elements in array");
	for(i=0;i<=9;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<=9;i++){
		for(j=0;j<=8;j++){
			if(x[j]>x[j+1]){
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	printf("sorted array: ");
	for(i=0;i<=9;i++){
		printf("%d",x[i]);
	}

}
