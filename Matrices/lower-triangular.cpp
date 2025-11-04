#include <iostream>
using namespace std;

class LwrTri{
    private:
    int n;
    int *A;

    public:
    LwrTri(int n);
    void Set(int i, int j, int num);
    int Get(int i, int j);
    void Display();
    ~LwrTri();
};

LwrTri :: LwrTri(int n){
    this -> n = n;
    A = new int[(n*(n+1)/2)];
};

void LwrTri :: Set(int i, int j, int num){
    if (i >= j){
        A[((i*(i-1))/2) + j - 1] = num;
    }
};

int LwrTri :: Get(int i, int j){
    if (i >= j){
        return A[((i*(i-1))/2) + j - 1];
    } else {
        return 0;
    }
}

void LwrTri :: Display(){
    for (int i = 1; i<= n; i++){
        for (int j = 1; j <=n; j++){
            if (i >= j){
                printf("%d ", A[((i*(i-1))/2) + j -1]);
            } else {
                printf("0 ");
            }
        }
        cout << endl;
    }
}

LwrTri :: ~LwrTri(){
    delete []A;
};

int main(){
    cout << "Enter order of lower-triangular matrix: ";
    int n;
    scanf("%d", &n);
    LwrTri mat(n);
    for (int i = 1; i<= n; i++){
        for (int j = 1; j <= n; j++){
            if (i >= j){
                printf("Element (%d, %d): \n", i, j);
                int num;
                scanf("%d", &num);
                mat.Set(i, j, num);
            }
        }
    }

    mat.Display();
    return 0;
}