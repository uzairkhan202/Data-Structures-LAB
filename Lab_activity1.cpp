#include <iostream>
using namespace std;

int main() {

    int R, C;

    cout << "Enter number of rows: ";
    cin >> R;

    cout << "Enter number of columns: ";
    cin >> C;

    int arr[R][C];

    // Input
    cout << "Enter elements of the 2D array:" << endl;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }

    // Display original array
    cout << "\nOriginal 2D Array:" << endl;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Bubble Sort - Descending Order
    int total = R * C;

    for (int i = 0; i < total - 1; i++) {

        for (int j = 0; j < total - i - 1; j++) {

            int r1 = j / C;
            int c1 = j % C;

            int r2 = (j + 1) / C;
            int c2 = (j + 1) % C;

            if (arr[r1][c1] < arr[r2][c2]) {

                int temp = arr[r1][c1];
                arr[r1][c1] = arr[r2][c2];
                arr[r2][c2] = temp;
            }
        }
    }

    // Display sorted array
    cout << "\nSorted 2D Array (Descending):" << endl;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}