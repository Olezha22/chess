#include <iostream>

using namespace std;

bool isBlack(int r, char c) {return (r + c - 97) % 2;}

int main() {
    int row;
    char column;

    cout << "Enter row (1-8): ";
    cin >> row;
    cout << "Enter column (a-h): ";
    cin >> column;

    if (isBlack(row, column))
        cout << "black\n";
    else
        cout << "white\n";

    return 0;
}
