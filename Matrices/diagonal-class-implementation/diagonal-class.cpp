#include <iostream>
using namespace std;

class Diagonal{
    private:
    int n;
    int *A;

    public:
    Diagonal(int n){
        this -> n = n;
        A = new int[n];
    }
    void Set(int i, int j, int num);
    int Get(int i, int j);
    void Display();
    ~ Diagonal();
};

void Diagonal :: Set(int i, int j, int num){
    if (i == j){
        A[i-1] = num;
    }
};

int Diagonal :: Get(int i, int j){
    if (i == j){
        return A[i-1];
    } else {
        return 0;
    }
};

void Diagonal :: Display(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j< n; j++){
            if (i == j){
                printf("%d ",A[i]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
};

Diagonal :: ~ Diagonal(){
    delete [] A;
}

int main(){
    cout << "Enter order of square matrix: ";
    int n;
    scanf("%d", &n);
    Diagonal d1(n);
    for (int i = 1; i<=n; i++){
        printf("Element (%d, %d): \n", i, i);
        int num;
        scanf("%d", &num);
        d1.Set(i, i, num);
    }

    d1.Display();
    return 0;

}