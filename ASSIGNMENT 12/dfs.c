#include<stdio.h>
#define size 20

int top=-1,a[size][size],vis[size],stack[size];

void dfs(int s,int n);
void push(int item);
int pop();

int main()
{
int n,i,s,ch,j;
printf("Enter the number of vertices: ");
scanf("%d",&n);

printf("Enter graph data in matrix form:    \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the Source Vertex:");
scanf("%d",&s);
printf("\nThe nodes visited in DFS as :\n");
dfs(s,n);
return 0;
}//End of main()

void dfs(int s,int n)
{
int i,k;
push(s);
vis[s]=1;
k=pop();
if(k!=0)
printf(" %d ",k);
while(k!=0)
{
for(i=1;i<=n;i++)
if((a[k][i]!=0)&&(vis[i]==0))
{
push(i);
vis[i]=1;
}
k=pop();
if(k!=0)
printf(" %d ",k);
}
for(i=1;i<=n;i++)
if(vis[i]==0)
dfs(i,n);
}//End of dfs()

void push(int item)
{
if(top==size-1)
printf("Stack overflow ");
else
stack[++top]=item;
}//End of push()

int pop()
{
int k;
if(top==-1)
return(0);
else
{
k=stack[top--];
return(k);
}
}//End of pop()



/*ubuntu@ubuntuq:~$ ./a.out
Enter the number of vertices: 4
Enter graph data in matrix form:    
1 0 1 0
1 0 0 1
1 0 0 0
1 1 0 1
Enter the Source Vertex:3

The nodes visited in DFS as :
 3  1  2  4*\
