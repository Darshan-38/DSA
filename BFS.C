#include<stdio.h>
#include<stdlib.h>
int visited[4];
int rear=0;
int front=0;
int queue[4];
void bfs(int arr[4][4],int st)
{
	int node;
	int i;
	queue[rear]=st;
	rear++;
	visited[st]=1;
	while(front<rear)
	{
		node=queue[front];
		front++;
		printf("\n%d",node);
		for(i=0; i<4; i++)
		{
			if(arr[node][i]==1 && visited[i]==0)
			{
				queue[rear]=i;
				rear++;
				visited[i]=1;
			}
		}
	}
}

int main()
{
    int arr[4][4] = {0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0};
    int i;
    for(i=0; i<4; i++)
    {
        visited[i]=0;
    }
    bfs(arr,0);
    return 0;
}