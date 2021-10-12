#include <iostream>
using namespace std;

class graph
{
    int G[20][20], n;

public:
    void accept()
    {
        int i, j, e;
        int src, dest, cost;
        cout << "\nEnter the no. of vertices: ";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                G[i][j] = 0;
            }
        }
        cout << "\nEnter the no. of  Edges: ";
        cin >> e;

        for (i = 0; i < e; i++)
        {
            cout << "\nInformation of New Edge \n";
            cout << "Enter Source of Edge : ";
            cin >> src;
            cout << "Enter Destination of Edge : ";
            cin >> dest;
            cout << "Cost of Edge : ";
            cin >> cost;

            G[src][dest] = cost;
            G[dest][src] = cost;
        }
    }
    void display()
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            cout << "\n";
            for (j = 0; j < n; j++)
            {
                cout << "\t" << G[i][j];
            }
        }
    }

    void prims()
    {
        int i, j, R[20][20];
        int src, dest, cost, count, min;
        int total = 0;
        int visited[20];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (G[i][j] == 0)
                {
                    R[i][j] = 999;
                }
                else
                    R[i][j] = G[i][j];
            }
        }
        for (i = 0; i < n; i++)
        {
            visited[i] = 0;
        }

        cout << "\nEnter start vertex: ";
        cin >> src;
        visited[src] = 1;

        count = 0;
        while (count < n - 1)
        {
            min = 9999;
            for (i = 0; i < n; i++)
            {
                if (visited[i] == 1)
                    for (j = 0; j < n; j++)
                    {
                        if (visited[j] != 1)
                        {
                            if (min > R[i][j])
                            {
                                min = R[i][j];
                                src = i;
                                dest = j;
                            }
                        }
                    }
            }
            cout << "\nEdge from " << src << " to " << dest << " \twith cost:  " << min;
            total = total + min;
            visited[dest] = 1;
            count++;
        }
        cout << "\nTotal Cost: " << total << "\n";
    }
};

int main()
{
    graph g;
    g.accept();
    g.display();
    g.prims();
}

/*
Example :

Enter the no. of vertices: 9

Enter the no. of  Edges: 14

Information of New Edge
Enter Source of Edge : 0
Enter Destination of Edge : 1
Cost of Edge : 4

Information of New Edge
Enter Source of Edge : 0
Enter Destination of Edge : 8
Cost of Edge : 8

Information of New Edge
Enter Source of Edge : 1
Enter Destination of Edge : 8
Cost of Edge : 11

Information of New Edge
Enter Source of Edge : 1
Enter Destination of Edge : 3
Cost of Edge : 8

Information of New Edge
Enter Source of Edge : 8
Enter Destination of Edge : 2
Cost of Edge : 7

Information of New Edge
Enter Source of Edge : 2
Enter Destination of Edge : 3
Cost of Edge : 2

Information of New Edge
Enter Source of Edge : 2
Enter Destination of Edge : 7
Cost of Edge : 6

Information of New Edge
Enter Source of Edge : 8
Enter Destination of Edge : 7
Cost of Edge : 1

Information of New Edge
Enter Source of Edge : 3
Enter Destination of Edge : 4
Cost of Edge : 7

Information of New Edge
Enter Source of Edge : 3
Enter Destination of Edge : 6
Cost of Edge : 4

Information of New Edge
Enter Source of Edge : 7
Enter Destination of Edge : 6
Cost of Edge : 2

Information of New Edge
Enter Source of Edge : 4
Enter Destination of Edge : 6
Cost of Edge : 14

Information of New Edge
Enter Source of Edge : 4
Enter Destination of Edge : 5
Cost of Edge : 9

Information of New Edge
Enter Source of Edge : 6
Enter Destination of Edge : 5
Cost of Edge : 10

        0       4       0       0       0       0       0       0       8
        4       0       0       8       0       0       0       0       11
        0       0       0       2       0       0       0       6       7
        0       8       2       0       7       0       4       0       0
        0       0       0       7       0       9       14      0       0
        0       0       0       0       9       0       10      0       0
        0       0       0       4       14      10      0       2       0
        0       0       6       0       0       0       2       0       1
        8       11      7       0       0       0       0       1       0

Enter start vertex: 8

Edge from 8 to 7        with cost:  1
Edge from 7 to 6        with cost:  2
Edge from 6 to 3        with cost:  4
Edge from 3 to 2        with cost:  2
Edge from 3 to 4        with cost:  7
Edge from 3 to 1        with cost:  8
Edge from 1 to 0        with cost:  4
Edge from 4 to 5        with cost:  9

Total Cost: 37

*/