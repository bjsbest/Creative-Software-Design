#include <stdio.h>

typedef struct{
    double x;
    double y;
} Point;

typedef struct{
    char name[7];
    Point points[3];
} Person;

int main(){
    Person person[3];
    for(int i=0; i<3; i++){
        scanf("%s %lf %lf %lf %lf %lf %lf", person[i].name, &(person[i].points[0].x), &(person[i].points[0].y), &(person[i].points[1].x), &(person[i].points[1].y), &(person[i].points[2].x), &(person[i].points[2].y));
    } // 입력 완료

    for(int i=0; i<3; i++){
        printf("%s ", person[i].name);
        // 좌표 입력
        for(int j=0; j<3; j++){
            printf("(%f , %f) ", person[i].points[j].x, person[i].points[j].y);
        }
        printf("\n");
    }
    return 0;
}