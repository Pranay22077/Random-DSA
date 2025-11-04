#include <iostream>
using namespace std;

struct Matrix{
    int A[10];
    int n;
};

void Set(struct Matrix *m, int i, int j, int num){
    if (i == j){
        m -> A[i-1] = num;
    }
}

int Get(struct Matrix m, int i, int j){
    if (i == j){
        return m.A[i-1];
    } else {
        return 0;
    }
}

void Display(struct Matrix m){
    for (int i = 0; i < m.n; i++){
        for (int j = 0; j< m.n; j++){
            if (i == j){
                printf("%d ",m.A[i]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    struct Matrix mat;

    cout << "Enter order of square matrix: ";
    scanf("%d", &(mat.n));
    mat.A[mat.n];

    for (int i = 1; i<=mat.n; i++){
        printf("Element (%d, %d): \n", i, i);
        int num;
        scanf("%d", &num);
        Set(&mat, i,i,num);
    }

    Display(mat);
    return 0;
}