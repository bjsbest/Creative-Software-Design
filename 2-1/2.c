#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* p){ // 받는 매개변수 : "주소" -> 주소에 해당하는 값을 바꾼다(call by address)
    Point new_point;
    new_point.xpos = p->xpos * 2;
    new_point.ypos = p->ypos * 2;
    return new_point;
}

void swapPoints(Point* p1, Point* p2){
    Point temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp; // swap
}

int main(){
    Point point1, point2;
    scanf("%d %d", &point1.xpos, &point1.ypos);
    scanf("%d %d", &point2.xpos, &point2.ypos);
    
    printf("Calling getScale2xPoint()\n");
    Point newp1 = getScale2xPoint(&point1);
    Point newp2 = getScale2xPoint(&point2);
    printf("P1 : %d %d\nP2 : %d %d\n",newp1.xpos, newp1.ypos, newp2.xpos, newp2.ypos);

    printf("Calling swapPoint()\n");
    swapPoints(&newp1, &newp2);
    printf("P1 : %d %d\nP2 : %d %d\n",newp1.xpos, newp1.ypos, newp2.xpos, newp2.ypos);    
    return 0;
}