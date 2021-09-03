#include<stdio.h>
#include<conio.h>
int main()
{

int arr[15][15],size,i,k,j,temp;
//clrscr();    

printf("\nEnter the matrix size:");
scanf("%d",&size);
printf("\nEnter the element of %d x %d matrix:",size,size);

for(i=0;i<size;i++)
{
  for(k=0;k<size;k++)
  {
    scanf("%d",&arr[i][k]);
  }
}

printf("\nGiven matrix is");
for(i=0;i<size;i++)
{
  printf("\n");
  for(k=0;k<size;k++)
  {
    printf("%d\t",arr[i][k]);
  }
}

for(i=1;i<size;i++)
{
  for(k=0;k<i;k++)
  {
    temp=arr[i][k];
    arr[i][k]=arr[k][i];
    arr[k][i]=temp;
  }
}

printf("\nTranspose of given matrix is:");

for(i=0;i<size;i++)
{
  printf("\n");

  for( j=0;j<size;j++)
  {
    printf("%d\t",arr[i][j]);
  }
}
//getch();
}






