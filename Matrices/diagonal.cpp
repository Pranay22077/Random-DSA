#include <iostream>
using namespace std;

struct mat{
    int A[10];
    int n;
};

void set(struct mat *m,int i, int j,int x){
    if (i==j){
        m -> A[i-1] = x;
        cout << "Element stored successfully!";
    }
}

int get(struct mat *m, int i, int j){
    if(i == j){
        return m -> A[i-1];
    }else{
        return 0;
    }
}

void display(struct mat *m){
    for (int i = 0; i< m -> n; i++){
        for (int j = 0; j < m -> n; j++){
            if (i == j){
                cout << m -> A[i-1] << " ";
            } else{
                cout << "0 ";
            }
        }
        cout <<  endl;
    }
}

int main(){
    struct mat *m1;
    cout << "Of what order should be the diagonal matrix?: ";
    scanf("%d", &(m1 -> n));
    
    cout << "Input the elements: " << endl;
    for (int i = 1; i <= m1 -> n; i++){
        int temp = 0;
        printf("Element (%d, %d): ",i,i);
        scanf("%d", temp);
        set(m1, i, i, temp);
    }
    cout <<  "Elements stored successfully.Displaying...";
    display(m1);
}