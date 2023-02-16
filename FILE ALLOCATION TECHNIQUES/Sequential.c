#include<stdio.h>
#include<stdlib.h>

void main()
{
  int f[50],i,j,k,count,st,len;
  for(i=0;i<50;i++)
  {
    f[i]=0;
  }
  while(1)
  {
   printf("Files allocated are:\n");
    x:count=0;
    printf("Enter starting address & length of file\n");
    scanf("%d%d",&st,&len);
    for(k=st;k<(st+len);k++)
    {
      if (f[i]==0)
      {
        count++;
      }
    }
    if(len==count)
    {
      for(j=st;j<(st+len);j++)
      {
        if(f[j]==0)
        {
          f[j]=1;
          printf("%d\t%d",j,f[j]);
        }
      }
    }
    if(st>=50)
    {
      printf("Cannot allocate\n");
    }
    else if(j!=(st+len-1))
    {
      printf("File is allocated to disk\n");
    }
    else
    {
      printf("File is not allocated to disk\n");
    }
    printf("Do you want to enter more file \t Yes->1\t No->0\n Enter your choice\n");
    scanf("%d",&c);
    if(c==1)
    {
      goto x;
    }
    else
    {
      exit(0);
    }
  }
}
  
