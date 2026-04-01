#include <stdio.h>
void selection(int a[],int n)
{
    int i, j, temp,min=0;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        
            if(a[j]<a[min])
            {
                min=j;
            }
       if(min!=i)
       {
           temp=a[i];
           a[i]=a[min];
           a[min]=temp;
           
       }
    }
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    }
int main()
{
    int a[50],n,i;
    printf("ENTER THE NO. OF ELEMENTS\n" );
    scanf("%d",&n);
      for(i=0;i<n;i++)
     {
         printf("ENTER A[%d]=",i);
         scanf("%d",&a[i]);
     }
        printf("ARRAY BEFORE SORTING\n");
        print(a,n);
        selection(a,n);
           printf("\nARRAY AFTER SORTING\n");
           print(a,n);
           return 0;

}