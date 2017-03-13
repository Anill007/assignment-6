#include<stdio.h>
#include<stdlib.h>
void main(){
	int n;
	int i;
	printf("Enter the number of employee\n");
	scanf("%d",&n);
	printf("Input the ages of employee:\n");
	int *a;
	int count=0;
	a=((int *)malloc(sizeof(int)*n));
	for(i=0; i<n; i++){
		scanf("%d",a+i);
		if(*(a+i)>80){
			count++;
		}
	}
	if (count==0){
		
	printf("No employee is aged more than 80 years");
	}
	else if(count==1){
		
	printf("only one employee has age greater than 80 years");
	}
	else {
	printf("There are %d number of employee with age more than 80",count);
}
	}	