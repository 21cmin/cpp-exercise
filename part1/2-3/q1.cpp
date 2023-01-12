#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& pntAdder(const Point &p1, const Point &p2)
{
    Point *p3 = new Point;
    p3->xpos = p1.xpos + p2.xpos;
    p3->ypos = p1.ypos + p2.ypos;
    return *p3;
}

int main()
{
    Point p1 = {3, 2};
    Point p2 = {2, 3};
    Point &p3 = pntAdder(p1, p2);
    printf("%d, %d", p3.xpos, p3.ypos);
    delete &p3;
    return 0;
}