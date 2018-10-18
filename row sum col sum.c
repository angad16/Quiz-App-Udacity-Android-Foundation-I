#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int a[10][10],t,n,w,x,i,j,sum=0,k,d=1;
  char c;
  scanf("%d",&t);
  while(t--) {
    sum=0;
    d=1;
    scanf("%d",&n);
    scanf("%d",&w);
    scanf("%d",&x);
    fflush(stdin);
    scanf("%c",&c);
    k=(n/w)+1;
    for(i=0;i<k;i++)
    {
      for(j=0;j<w;j++)
      {
        if(d<=n)
        {a[i][j]=d;
        d++;}
        else
          a[i][j]=0;
      }
    }
   
      if(c=='C')
      {
        for(i=0;i<k;i++)
        sum=sum+a[i][x-1];
      }
    else
    {
      for(j=0;j<w;j++)
        sum=sum+a[x-1][j];
    }
    printf("%d\n",sum);
  }
    return 0;
}

