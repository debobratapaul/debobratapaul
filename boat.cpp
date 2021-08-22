#include <stdio.h>
int main()
{
  int i,j,n,b;
  float k;
  printf("Enter the size of the boat\n");
  scanf("%d",&n);
  b=n-1;


  for(i=0;i<n;i++)
  {
    for(j=0;j<(b+(n*2));j++)
    {
      printf(" ");
    }
    b--;

    for(k=0;k<=i;k+=0.5)
    {
      printf("*");
    }
    printf("\n");
  }

  int l,p=0,r;
  r=(n*6);
  for(i=0;i<n;i++)
  {
    for(j=0;j<p;j++)
    {
      printf(" ");
    }
    p++;

    for(l=0;l<r;l++)
    {
      printf("*");
    }
    r-=2;
    printf("\n");
  }

  return 0;
}


