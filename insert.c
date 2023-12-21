#include <stdio.h>
main()
{
  int a[10],n,i,x;
  printf("enter the number");
  scanf("%d",&n);
  printf("enter the number you want");
  scanf("%d",&x);
  printf("enter the elements");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  int k;
  printf("enter the postion to insert :: \n");
  scanf("%d",&k);
  for(i=n;i>=k;i--)
  {
    a[i+1]=a[i];
  }
  a[k]=x;
  for(i=1;i<=n+1;i++)
  {
    printf("%d  ",a[i]);
  } 
}
