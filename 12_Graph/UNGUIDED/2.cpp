#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numVertices, numEdges;

    cout << "Masukkan jumlah simpul: ";
    cin >> numVertices;

    cout << "Masukkan jumlah sisi: ";
    cin >> numEdges;

    vector<vector<int>> adjMatrix(numVertices, vector<int>(numVertices, 0));

    cout << "Masukkan pasangan simpul:\n";
    for (int i = 0; i < numEdges; i++) {
        int u, v;
        cin >> u >> v;

        adjMatrix[u - 1][v - 1] = 1;
        adjMatrix[v - 1][u - 1] = 1;
    }

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}