#include<stdio.h>
int main()
{
    int num,ele,ary[10],i,count=0;
    printf("Enter number");
    scanf("%d",&num);
    printf("\nEnter element");
    for(i=0;i<num;i++)
    {
        scanf("%d",&ary[i]);
    }
    printf("\nEnter element to be find");
    scanf("%d",&ele);
 for(i=0;i,i<num;++i)
  { if(ary[i]==ele)
  {
    printf("The Position of the element is %d\n",i+1);
   count++;
  }
  }
  printf("Total no. of the same element with in array is %d",count);
    return 0;
    
}