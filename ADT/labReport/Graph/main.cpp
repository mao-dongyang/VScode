#include <iostream>
using namespace std;

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
    cout << v << endl;
}

int visited[6] = {0, 0, 0, 0, 0, 0};

void DSF(Graph const &g, int v = 0)
{
    visit(v);
    visited[v] = 1;
    for (int i = 0; i < g.size; i++)
    {
        if (g.matrix[v][i] && !visited[i])
        {
            DSF(g, i);
        }
    }
}

void BSF(Graph const &g)
{
}

int main()
{
    int m[6][6] = {{0, 1, 1, 1, 0, 1}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 1, 0}, {1, 0, 0, 0, 0, 1}, {0, 1, 1, 0, 0, 0}, {0, 0, 0, 1, 0, 0}};
    Graph g;
    g.size = 6;
    enterMatrix(g, m);
    DSF(g);
    return 0;
}