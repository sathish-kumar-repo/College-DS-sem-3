#include <iostream.h>
#include <conio.h>

class Graph
{
    int a[10][10];
    int v[10];
    int n;

public:
    void getGraph()
    {
        cout << "Enter number of nodes: ";
        cin >> n;

        cout << "\nEnter adjacency matrix:\n";
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];

        for (int i = 1; i <= n; i++)
            v[i] = 0;

        dfs(1); // starting DFS from node 1
    }

    void dfs(int x)
    {
        cout << "Visit: " << x << "\n";
        v[x] = 1;

        for (int i = 1; i <= n; i++)
            if (a[x][i] == 1 && !v[i])
                dfs(i);
    }
};

void main()
{
    clrscr();

    Graph g;
    g.getGraph();

    getch();
}

/*
*OUTPUT:

Enter number of nodes: 6

Enter adjacency matrix:
0 1 1 1 0 0
1 0 0 0 0 0
1 0 0 0 0 1
1 0 0 0 1 0
0 0 0 1 0 0
0 0 1 0 0 0
Visit: 1
Visit: 2
Visit: 3
Visit: 6
Visit: 4
Visit: 5

*/

/*
*ANOTHER OUTPUT:

Enter number of nodes: 4
Enter adjacency matrix:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0

Visit: 1
Visit: 2
Visit: 4
Visit: 3

*/