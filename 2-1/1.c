#include <stdio.h>

typedef struct{
    char name[20];
    int year;
} Book;

int main(){
    Book arr[4]; // Book type의 배열
    for(int i=0; i<4; i++){
        scanf("%s %d", arr[i].name, &arr[i].year);
    }
    for(int i=0; i<4; i++){
        printf("Name : %s, Published Year : %d\n", arr[i].name, arr[i].year);
    }
    return 0;
}