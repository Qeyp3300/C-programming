
#include <iostream>

using namespace std;
int vertArr[10][10];
//adjacency matrix initialize to 0
int count=0; //root of the matrix
void displayMatrix(int v)
{
    int i,j;
    for(i=0;i<v;i++){
for(j=0;j<v;j++){
    cout<<vertArr[i][j]<<" ";
}
cout<<endl;
}
}
//function to add edge in the matrix

void add_edge(int u,int v)
{
    vertArr[u][v]=1;
    vertArr[v][u]=0;}
    main()
    {
        int v=9; //nine vertices in the graph
        add_edge(0,1);
        add_edge(0,2);
        add_edge(1,4);
        add_edge(1,7);
        add_edge(1,8);
        add_edge(2,0);
        add_edge(2,3);
        add_edge(2,4);
        add_edge(4,1);
        add_edge(4,6);
        add_edge(5,4);
        add_edge(7,1);
        add_edge(7,8);
        displayMatrix (v);
    }
