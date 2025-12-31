#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100

void bfs(int adj[MAX][MAX],int V,int start){
    int queue[MAX] ;
    int rear = 0,front = 0;
      bool visited[MAX];
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }


    visited[start] = true;
    queue[rear++] = start;

    while(front < rear){
        int curr = queue[front++];
        printf("%d\t",curr);

        for(int i = 0;i < V;i++){
           if( adj[curr][i] == 1 && !visited[i]){
            visited[i] = true;
            queue[rear++] = i;
           }
        }
    }
}
void addEdge(int adj[MAX][MAX], int u, int v) {
    adj[u][v] = 1;
    adj[v][u] = 1;
}

int main() {
    int V = 5;
    int adj[MAX][MAX] = {0};

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);

    printf("BFS starting from 0:\n");
    bfs(adj, V, 0);

    return 0;
}
