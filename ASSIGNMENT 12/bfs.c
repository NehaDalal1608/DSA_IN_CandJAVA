#include<stdio.h>
#define size 20

int q[size],front=-1,rear=-1,a[size][size], vis[size];
int delete();
void add(int item);
void bfs(int s,int n);

int main()
{
int n,i,s,ch,j;
printf("Enter the Number of Vertices: ");
scanf("%d",&n);
printf("Enter graph data in matrix form:    \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{   scanf("%d",&a[i][j]);
}
} 
printf("Enter the Source Vertex :");
scanf("%d",&s);
printf("\nThe nodes visited in BFS as :\n");
bfs(s,n);
return 0;
}//end of main()


void bfs(int s,int n)
{
int p,i;
add(s);
vis[s]=1;
p=delete();
if(p!=0)
printf(" %d",p);
while(p!=0)
{
for(i=1;i<=n;i++)
if((a[p][i]!=0)&&(vis[i]==0))
{
add(i);
vis[i]=1;
}
p=delete();
if(p!=0)
printf(" %d ",p);
}
for(i=1;i<=n;i++)
if(vis[i]==0)
bfs(i,n);
}//end of bfs()


void add(int item)
{
if(rear==size-1)
printf("QUEUE FULL");
else
{
if(rear==-1)
{
q[++rear]=item;
front++;
}
else
q[++rear]=item;
}
}//End of add()

int delete()
{
int k;
if((front>rear)||(front==-1))
return(0);
else
{
k=q[front++];
return(k);
}
}//end of delete()


/*ubuntu@ubuntuq:~$ ./a.out
Enter the Number of Vertices: 3
Enter graph data in matrix form:    
1 0 1
1 1 1 
0 1 0
Enter the Source Vertex :2

The nodes visited in BFS as :
 2 1  3 */
 
 
 
 
 
 
 
 
 
 
 
 
 
 
