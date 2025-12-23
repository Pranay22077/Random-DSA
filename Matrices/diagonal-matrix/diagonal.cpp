#include "Diagonal.h"

Diagonal::Diagonal(int n) {
    this->n = n;
    A = new int[n];
}

void Diagonal::Set(int i, int j, int num) {
    if (i == j)
        A[i - 1] = num;
}

int Diagonal::Get(int i, int j) {
    if (i == j)
        cout << A[i - 1];
    else
        cout << 0;
}

void Diagonal::Display() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                cout << A[i] << " ";
            else
                printf("0 ");
        }
        cout << endl;
    }
}

Diagonal::~Diagonal() {
    delete[] A;
}
