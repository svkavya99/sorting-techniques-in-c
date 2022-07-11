#include<stdio.h>
void bubblesort(int n,int arr[]);
int main()
{
int i,n;
printf("ENTER AN SIZE OF ARRAY\n");
scanf("%d",&n);
int arr[n];
printf("ENTER THE ELEMENTS IN THE ARRAY\n");
for(i=0;i<n;i++)
{	
scanf("%d",&arr[i]);	
}
bubblesort(n,arr);
return 0;	
}
void bubblesort(int n,int arr[])
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
 temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp; 
}
}	
}
for(j=0;j<n;j++)
{
printf("THE SORTED ARRAY IS %d\n",arr[j]);
}
}
