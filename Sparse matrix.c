#include<stdio.h>
#include<stdlib.h>
typedef struct sparse
{
    int row;
    int column;
    int value;
}S;
void accept_sparse(S a[10],int m,int n)
{
    int i,j,ele;
    printf("Enter the element:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
         scanf("%d",&ele);   
        }
    }
}
void display_sparse(S a[10],int m,int n)
{
    int i,j,ele,k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ele!=0)
            {
                a[k].row=i;
                a[k].column=j;
                a[k].value=ele;
                k++;
            }
        }
    }
    a[0].row=n;
    a[0].column=m;
    a[0].value=k-1;
}
int main()
{
    S a[10];
    int n,m;
    printf("Enter the no. of rows and columns:");
    scanf("%d%d",&n,&m);
    accept_sparse(a,m,n);
    display_sparse(a,m,n);
}