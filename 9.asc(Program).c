#include<stdio.h>
#include<stdlib.h>
void main(){
int i,n,temp,j;
printf("Enter the number of elements you are going to enter");
scanf("%d",&n);
int *a;
a=((int *)malloc(sizeof(int)*n));
printf("Enter the numbers\n");
for(i=0; i<n; i++){
	scanf("%d",a+i);
}
for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		if(*(a+i)<*(a+j)){
			temp=(*(a+i));
			(*(a+i))=(*(a+j));
			(*(a+j))=temp;
		}
	}
}
for(i=0; i<n; i++){
	printf("%d",(*(a+i)));
}
}