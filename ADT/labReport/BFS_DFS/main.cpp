#include <iostream>
using namespace std;
#define TRUE 1
#define FALSE 0

typedef struct ArcNode
{
    int adjvex;              //该弧所指向的顶点的位置
    struct ArcNode *nextarc; //指向下一条弧的指针
} ArcNode;
typedef struct VNode
{
    int data;          //顶点信息
    ArcNode *firstarc; //指向第一条弧的指针
} AdjList[100];
typedef struct
{
    AdjList adjlist;
    int vexnum, arcnum; //顶点和弧的个数
} Graph;
int CreateAdjlist(Graph *G, int x, int y) //创建并初始化邻接表
{
    int i;
    G->vexnum = x;
    G->arcnum = y;
    for (i = 0; i < G->vexnum; i++)
    {
        G->adjlist[i].data = i;        //初始化顶点信息
        G->adjlist[i].firstarc = NULL; //初始化i的第一个邻接点为NULL
    }
    return 0;
}
int InsertEdge(Graph *G) //插入弧
{
    ArcNode *p;
    int i, j, k;
    for (k = 0; k < G->arcnum; k++)
    {
        cout << "输入第" << k + 1 << "条弧:" << endl;
        cin >> i >> j;
        p = (ArcNode *)malloc(sizeof(ArcNode)); //生成j的表结点
        p->adjvex = j;                          //弧指向j
        p->nextarc = G->adjlist[i].firstarc;    //将结点j链接到i的单链表中
        G->adjlist[i].firstarc = p;
        p = (ArcNode *)malloc(sizeof(ArcNode)); //生成i的表结点
        p->adjvex = i;
        p->nextarc = G->adjlist[j].firstarc; //将结点i链接到j的单链表中
        G->adjlist[j].firstarc = p;
    }
    return 0;
}
int OutGraph(Graph *G) //输出邻接表
{
    int i;
    for (i = 0; i < G->vexnum; i++)
    {
        cout << "[" << i << "]"
             << " ";
        while (G->adjlist[i].firstarc != 0)
        {
            cout << G->adjlist[i].firstarc->adjvex << " ";
            G->adjlist[i].firstarc = G->adjlist[i].firstarc->nextarc;
        }
        cout << endl;
    }
    return 0;
}
//深度优先遍历
int visit[100]; //访问标志数组
void DFS(Graph G, int v)
{
    ArcNode *p;
    visit[v] = 1; //已经访问标记
    cout << G.adjlist[v].data << ' ';
    p = G.adjlist[v].firstarc; //p指向顶点v的第一条边
    while (p != NULL)
    {
        if (visit[p->adjvex] != 1)
            //cout << G.adjlist[p->adjvex].data << ' ';
            DFS(G, p->adjvex);
        p = p->nextarc;
    }
}
void DFSTravel(Graph G)
{
    int v;
    cout << "深度优先遍历顺序为：";
    for (v = 0; v < G.vexnum; v++)
        visit[v] = 0;
    for (v = 0; v < G.vexnum; v++)
    {
        if (!visit[v])
            DFS(G, v);
    }
}

//广度优先遍历
int visited[100]; //访问标志数组
void BFS(Graph G, int v)
{
    ArcNode *p;
    int que[100], front = 0, rear = 0; //队列定义的简单写法
    int j;
    cout << G.adjlist[v].data << ' ';
    visited[v] = 1;
    rear = (rear + 1) % 100; //当前顶点v进入队列
    que[rear] = v;
    while (front != rear) //队空时遍历完成
    {
        front = (front + 1) % 100; //顶点出队
        j = que[front];
        p = G.adjlist[j].firstarc; //p指向出队顶点j的第一条边
        while (p != NULL)
        {
            if (visited[p->adjvex] == 0)
            {
                visited[p->adjvex] = 1;
                rear = (rear + 1) % 100; //该顶点进队
                que[rear] = p->adjvex;
            }
            p = p->nextarc;
        }
    }
}

void BFSTravel(Graph G)
{
    int i;
    cout << "广度优先遍历顺序为：";
    for (i = 0; i < G.vexnum; i++)
    {
        if (visited[i] == 0)
            BFS(G, i);
    }
}
int main()
{
    Graph g;
    int x, y;
    cout << "输入顶点和边的个数:" << endl;
    cin >> x >> y;
    CreateAdjlist(&g, x, y);
    InsertEdge(&g);
    OutGraph(&g);
    DFSTravel(g);
    BFSTravel(g);
}