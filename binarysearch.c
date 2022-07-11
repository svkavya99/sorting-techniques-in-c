#include<stdio.h>
int binarysearch(int arr[],int n,int ele);
int sort(int n,int arr[]);
int main()
{
int arr[50],n,i,ele,k=0;
printf("ENTER THE SIZE OF ARRAY\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);	
}
printf("ENTER THE ELEMENT TO BE SEARCHED\n");
scanf("%d",&ele);
k=binarysearch(arr,n,ele);
printf("%d\n",k);
(k==-1)?printf("THE ELEMENT IS NOT FOUND"):printf("THE ELEMENT IS FOUND %d\n",k);
return 0;

}
int binarysearch(int arr[],int n,int ele)
{
sort(n,arr);
int l=0,r=n-1,mid=l+r/2;
while(l<r)
{
if(ele==arr[mid])
 return mid;
else if(ele<arr[mid])
return r=mid-1;
else
return l=mid+1;	
}
return -1;

}
int sort(int n,int arr[])
{
int i,j,temp;	
for(i=0;i<n;i++)
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
}
}
