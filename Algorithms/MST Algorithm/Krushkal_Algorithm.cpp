#include <algorithm>
#include <iostream>
using namespace std;

class Edge
{
public:
    int source;
    int dest;
    int weight;
};
bool compare(Edge e1, Edge e2)
{

    return e1.weight < e2.weight;
}
int findParent(int v, int *parent)
{
    if (parent[v] == v)
    {
        return v;
    }
    return findParent(parent[v], parent);
}
void printMST(Edge *input, int v, int e)
{
    int cost = 0;
    // Sorting the input array in ascending order based on weights
    sort(input, input + e, compare);
    Edge *output = new Edge[v - 1];
    int *parent = new int[v];
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
    }
    int count = 0;
    int i = 0;
    while (count != v - 1)
    {
        Edge currentEdge = input[i];
        // Checking if we can add the currentEdge in MST or not
        int sourceParent = findParent(currentEdge.source, parent);
        int destParent = findParent(currentEdge.dest, parent);
        if (sourceParent != destParent)
        {
            output[count] = currentEdge;
            cost = cost + currentEdge.weight;
            count++;
            parent[sourceParent] = destParent;
        }
        i++;
    }
    cout << endl;
    cout << "MST using Krushkal's Algorithm is as follow : \n\n";
    for (int i = 0; i < v - 1; i++)
    {
        cout << output[i].source << " " << output[i].dest << " " << output[i].weight;
        cout << "\n";
    }
    cout << "\nTotal Cost/Weight of Minimum Spanning Tree is : " << cost;
}
int main()
{
    int v, e; // V = Number of vertices ; e = Number of edges
    cout << "Enter the no. of vertex" << endl;
    cin >> v;
    cout << "Enter the no. of edges" << endl;
    cin >> e;
    Edge *input = new Edge[e];
    cout << "Enter source vertex <Space> Destination vertex <Space> Weight of Edge " << endl;
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }
    printMST(input, v, e);
}

/*
Input: 

Enter the no. of vertex
9
Enter the no. of edges
14
Enter source vertex <Space> Destination vertex <Space> Weight of Edge
0 1 4
0 8 8
1 8 11
1 3 8
8 2 7
8 7 1
2 7 6
3 4 7
3 6 4
7 6 2
4 6 14
4 5 9
5 6 10
2 3 2
 
Output : 

MST using Krushkal's Algorithm is as follow :

8 7 1
7 6 2
2 3 2
0 1 4
3 6 4
3 4 7
0 8 8
4 5 9

Total Cost/Weight of Minimum Spanning Tree is : 37

*/