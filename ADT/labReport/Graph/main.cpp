#include <iostream>
#include <queue>
using namespace std;

queue<int> wait4BFS;

typedef struct Graph
{
    int matrix[6][6];
    int size;
} Graph;

void enterMatrix(Graph &g, int m[6][6])
{
    for (int i = 0; i < g.size; i++)
    {
        for (int j = 0; j < g.size; j++)
        {
            g.matrix[i][j] = m[i][j];
        }
    }
}

void visit(int v)
{
    cout << "V" << v + 1 << '\t';
}

int visited[6] = {0, 0, 0, 0, 0, 0};

void DFS(Graph const &g, int v = 0)
{
    visit(v);
    visited[v] = 1;
    for (int i = 0; i < g.size; i++)
    {
        if (g.matrix[v][i] && !visited[i])
        {
            DFS(g, i);
        }
    }
}

void BFS(Graph const &g)
{
    for (int j = 0; j < g.size; j++)
    {
        visited[j] = 0;
    }
    int v = 0;
    do
    {
        if (!visited[v])
        {
            visit(v);
            visited[v] = 1;
            for (int i = 0; i < g.size; i++)
            {
                if (!visited[i] && g.matrix[v][i])
                {
                    wait4BFS.push(i);
                }
            }
        }
        v = wait4BFS.front();
        wait4BFS.pop();
    } while (!wait4BFS.empty());
}

int main()
{
    int m[6][6] = {{0, 1, 1, 1, 0, 1}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 0, 1}, {0, 1, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0}};
    Graph g;
    g.size = 6;
    enterMatrix(g, m);
    cout << "The DFS is ";
    DFS(g);
    cout << endl;
    cout << "The BFS is ";
    BFS(g);
    cout << endl;
    return 0;
}