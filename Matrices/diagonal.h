#ifndef DIAGONAL_H
#define DIAGONAL_H

#include <iostream>
using namespace std;

class Diagonal{
    private:
    int n;
    int *A;

    public:
    Diagonal(int n);
    void Set(int i, int j, int num);
    int Get(int i, int j);
    void Display();
    ~ Diagonal();
};

#endif