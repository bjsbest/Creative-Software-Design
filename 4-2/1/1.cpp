#include <iostream>
using namespace std;

void magicSquare(int**& matrix, int num){
    // 모든 entry를 0으로 초기화
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            matrix[i][j] = 0;
        }
    }
    // 마방진 채우기
    int currunt_row = num - 1;
    int currunt_column = (num - 1) / 2;
    matrix[currunt_row][currunt_column] = 1;
    for (int n = 2; n < (num*num)+1; n++){
        // case 1. "오른쪽 아래" 칸이 사각형의 영역을 벗어난 경우
        if(currunt_row + 1 >= num){
            currunt_row = 0;
        } else {
            currunt_row++;
        }

        if (currunt_column + 1 >= num){
            currunt_column = 0;
        } else{
            currunt_column++;
        }
        // case 2. "오른쪽 아래" 칸이 비어있는 경우 - n 입력
        if (matrix[currunt_row][currunt_column] == 0) {
            matrix[currunt_row][currunt_column] = n;
            continue;
        }
        // case 3. "오른쪽 아래" 칸이 이미 차 있는 경우 - 이전 entry의 위쪽에 n 입력
        else {
            if(currunt_row == 0){
                currunt_row = num-2;
            } else{
                currunt_row -= 2;
            }
            if(currunt_column == 0){
                currunt_column = num -1;
            }
            else{
                currunt_column--;
            }
            matrix[currunt_row][currunt_column] = n;
            continue;
        }
    }
}

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0 || n < 3) {
        return 0;
    }
    else {
        // n*n array 생성
        int** sqr = new int* [n];
        for (int i = 0; i < n; i++) {
            sqr[i] = new int[n];
        }
        int**& r_sqr = sqr; // reference
        // 마방진 채우기, 출력
        magicSquare(r_sqr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << sqr[i][j] << ' ';
            }
            cout << endl;
        }
        // 할당 해제
        for (int i = 0; i < n; i++) {
            delete[] sqr[i];
        }
        delete[] sqr;
        return 0;
    }
}