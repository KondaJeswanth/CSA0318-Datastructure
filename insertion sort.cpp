#include<stdio.h>
 int insertion_sort(int A[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && A[j]<A[j-1])
		{
			temp = A[j-1];
			A[j-1]=A[j];
			A[j]=temp;
			j--;
		}
	}
}

int main()
{
	int i,n,A[100];
	printf("\nEnter n:");
	scanf("%d",&n);
	
	printf("\nEnter Array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	
	insertion_sort(A,n);
		
	printf("\nAfter Sorting:\n");
	for(i=0;i<n;i++)
		printf("%d  ",A[i]);
		
	return 0;
}

