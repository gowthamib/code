# code
#include<stdio.h>
#include<conio.h>
void main()
{
 int ar[100],i,j,n,tmp;
 printf(" Enter the size of the array \t");
 scanf("%d",&n);
 printf("Now enter the elements in the array \t");
 for(i=0;i<n;i++)
 {
  scanf("%d",&ar[i]);
}
printf("\n Array is - ");
for(i=0;i<n;i++)
{
printf("\t %d",ar[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(ar[j]<ar[j+1])
{
tmp=ar[j+1];
ar[j+1]=ar[j];
ar[j]=tmp;
}
}
}
printf("\n\n Array in the Descending order is - \n");
for(i=1;i<=n;i++)
{
 printf("\t %d",ar[i]);
}
 getch();
}
