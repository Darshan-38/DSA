#include<stdio.h>
#include<stdlib.h>
int visited[4];
int arr[4][4]={{0,1,0,0},{1,0,1,0},{0,1,0,1},{0,0,1,0}};
void dfs(int curr)
{
    int i;
    printf("\n%d",curr);
    visited[curr]=1;
    for(i=0; i<4; i++)
    {
        if(arr[curr][i]==1 && visited[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
    int i;
    for(i=0; i<4; i++)
    {
        visited[i]=0;
    }
    dfs(0);
    return 0;
}