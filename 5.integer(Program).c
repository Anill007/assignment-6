//program that uses pointers to copy an array of integer
#include<stdio.h>
void main(){
	int max;
	printf("Enter number of elements to be included in array:\n");
	scanf("%d",&max);
    printf("Now enter the numbers\n");
	int a[max];
	int i;
	int *p[max];
	for (i=0; i<max; i++){
	scanf("%d",a+i);
	p[i]=a+i;
	}
	printf("The elements in array are:\n");
	for (i=0; i<max; i++){
	printf("%d\t",*p[i]);
	}
}