//function that uses pointers to search for the address of a given integer in a given array.
#include<stdio.h>
int *ain(){
 int r;
 int counter=0;
 int call;
 int *z;
printf("Enter number of elements:");
scanf("%d",&r);
int a[r];
int i;
int *p[r];
printf("Enter the numbers in array:\n");
for (i=0; i<r; i++){
	scanf("%d",a+i);
	p[i]=a+i;
	}
	printf("Enter the number you are searching for:\n");
	scanf("%d",call);

	for(i=0; i<r; i++){
		if(call==(*p[i])){
		z=p[i];
		return z;
		break;
		}
			else{
				counter++;
			}
	}	
		if(counter==r){
			return NULL;
		}
		
		
 }
 void main(){
	printf("The number is in address %p",ain());
 }