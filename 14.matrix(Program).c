#include<stdio.h>
#include<stdlib.h>
void main(){
int m,n;
printf("Enter number of rows in the matrix");
scanf("%d",&m);
printf("Enter number of columns in the matrix");
scanf("%d",&n);
int *a[m][n];
for(i=0; i<m; i)