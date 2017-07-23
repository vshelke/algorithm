#include <iostream>
using namespace std;

int n;
int adj[10][10];
int visited[10];
void readmatrix()
{
    int i,j;
    cout << "\nEnter the number of Vertices in the Graph : ";
    cin >>n;
    cout << "\nEnter the Adjacency Matrix\n\n";
    for (i = 0; i < n; i++)
        for (j = 0; j< n; j++)
            cin >> adj[i][j];
    for (i = 0; i < n; i++)
        visited[i] = 0;
}

void bfs(int source)
{
    int queue[20];
    int i, front, rear, root;
    front = rear = 0;
    visited[source] = 1;
    queue[rear++] = source;
    cout << source<<"   ";
    while (front != rear)
    {
        root = queue[front];
        for (i = 0; i < n; i++)
            if (adj[root][i] && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
                cout << i<< "   ";
            }
        front++;
    }
}

int main()
{
    int source;
    cout << "\n Program for Breadth First Search for a un-directed Graph";
    readmatrix();
    cout << "\nEnter the Source : ";
    cin >>source;
    cout << "\nThe nodes visited in the BFS order is : ";
    bfs(source);
    return 0;
}