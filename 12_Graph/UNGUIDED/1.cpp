#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int numVertices;
    cout << "Masukan jumlah simpul: ";
    cin >> numVertices;

    vector<string> cities(numVertices);
    cout << "Masukan nama simpul:\n";
    for (int i = 0; i < numVertices; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> cities[i];
    }

    vector<vector<int>> distances(numVertices, vector<int>(numVertices, 0));

    cout << "Masukan bobot antar simpul:\n";
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            if (i == j) {
                distances[i][j] = 0;
            } else {
                cout << cities[i] << " --> " << cities[j] << " = ";
                cin >> distances[i][j];
            }
        }
    }

    cout << "\nMatriks Jarak:\n";
    cout << setw(10) << " ";
    for (const auto& city : cities) {
        cout << setw(10) << city;
    }
    cout << endl;

    for (int i = 0; i < numVertices; i++) {
        cout << setw(10) << cities[i];
        for (int j = 0; j < numVertices; j++) {
            cout << setw(10) << distances[i][j];
        }
        cout << endl;
    }

    return 0;
}