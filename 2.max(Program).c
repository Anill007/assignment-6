#include<stdio.h>
#include<stdlib.h>
int max(){
int i,n,temp,j,k;
printf("Enter the number of elements you are going to enter\n");
scanf("%d",&n);
int *a;
a=((int *)malloc(sizeof(int)*n));
printf("Enter the numbers\n");
for(i=0; i<n; i++){
	scanf("%d",a+i);
}
for(i=0; i<n; i++){
	for(j=0; j<n; j++){
		if(*(a+i)>*(a+j)){
			temp=(*(a+i));
			(*(a+i))=(*(a+j));
			(*(a+j))=temp;
		}
	}
}
k=*(a+0);
return k;
}
void main(){
	printf("The max value is %d",max());
}