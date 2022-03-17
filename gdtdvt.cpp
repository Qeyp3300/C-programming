#include<iostream>
using namespace std;
int vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {       //function to add edge into the matrix
    vertArr[u][v] = 1;  
}
void main() {
   int v = 9;    //there are 9 vertices in the graph
   add_edge(0, 1);
   add_edge(0, 2);
   add_edge(2, 0);
   add_edge(1, 4);
   add_edge(1, 7);
   add_edge(1, 8);
   add_edge(2, 3);
   add_edge(2, 4);
   add_edge(4, 6);
   add_edge(5, 4);
   add_edge(7, 8);
   add_edge(7, 1);
   displayMatrix(v);
}

