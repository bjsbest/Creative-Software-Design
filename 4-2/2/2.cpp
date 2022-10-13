#include <iostream>
using namespace std;

void magicSquare(int**& matrix, int** upper_matrix, int** lower_matrix, int num){
    for(int i=0; i<num/4; i++){
        // ascending order matrix 대입 
        for(int j=0; j<num/4; j++){
            matrix[i][j] = upper_matrix[i][j];
        }
        for(int j=3*num/4; j<num; j++){
            matrix[i][j] = upper_matrix[i][j];
        }
        // descending order matrix 대입 
        for(int j=num/4; j<3*num/4; j++){
            matrix[i][j] = lower_matrix[i][j];
        }
    }

     for(int i=num/4; i<3*num/4; i++){
        // ascending order matrix 대입 
        for(int j=num/4; j<3*num/4; j++){
            matrix[i][j] = upper_matrix[i][j];
        }
        // descending order matrix 대입 
        for(int j=0; j<num/4; j++){
            matrix[i][j] = lower_matrix[i][j];
        } 
        for(int j=3*num/4; j<num; j++){
            matrix[i][j] = lower_matrix[i][j];
        }
    }

    for(int i=3*num/4; i<num; i++){
        // ascending order matrix 대입 
        for(int j=0; j<num/4; j++){
            matrix[i][j] = upper_matrix[i][j];
        }
        for(int j=3*num/4; j<num; j++){
            matrix[i][j] = upper_matrix[i][j];
        }
        // descending order matrix 대입 
        for(int j=num/4; j<3*num/4; j++){
            matrix[i][j] = lower_matrix[i][j];
        }
    }
}

int main(){
    // target array 생성
    int n;
    cin >> n;
    int** sqr = new int*[n];
    for(int i=0; i<n; i++){
        sqr[i] = new int[n];
    }
    int**& r_sqr = sqr;

    // ascending order matrix
    int** ascendingOrder = new int*[n];
    for(int i=0; i<n; i++){
        ascendingOrder[i] = new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ascendingOrder[i][j] = n*i + j + 1;
        }
    }

    // descending order matrix
    int** descendingOrder = new int*[n];
    for(int i=0; i<n; i++){
        descendingOrder[i] = new int[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            descendingOrder[i][j] = n*n + 1 - ascendingOrder[i][j];
        }
    }

    magicSquare(r_sqr, ascendingOrder, descendingOrder, n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << sqr[i][j] << ' ';
        }
        cout << endl;
    }
    for(int i=0; i<n; i++){
        delete[] sqr[i];
        delete[] ascendingOrder[i];
        delete[] descendingOrder[i];
    }
    delete[] sqr;
    delete[] ascendingOrder;
    delete[] descendingOrder;
    
    return 0;
}
