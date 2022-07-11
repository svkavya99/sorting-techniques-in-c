#include<stdio.h>
void linearsearch(int n,int arr[],int ele);
int main()
{
int arr[50],n,ele,i;
printf("ENTER THE SIZE OF ARRAY\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);	
}
printf("ENTER THE ELEMENT TO BE SEARCHED\n");
scanf("%d",&ele);
linearsearch(n,arr,ele);
return 0;
}
void linearsearch(int n,int arr[],int ele)
{
int i,c=0;
for(i=0;i<n;i++)
{
if(arr[i]==ele)
{
printf("THE SEARCH ELEMENT IS FOUND %d\n",i+1);
break;
}	
}
if(i==n)
{
printf("THE ELEMENT IS NOT FOUND\n");	
}	
}
