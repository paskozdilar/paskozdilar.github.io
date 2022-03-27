#include <math.h>
#include <stdio.h>


struct point {
    float x;
    float y;
    float z;
};

int point_iszero(struct point p) {
    return (p.x == 0) && (p.y == 0) && (p.z == 0);
}

float point_distzero(struct point p) {
    return sqrtf(p.x*p.x + p.y*p.y + p.z*p.z);
}

int main() {
    struct point p0 = {0.0, 0.0, 0.0};
    struct point p1 = {1.0, 2.0, 3.0};

    printf("POINT\tISZERO\tDISTZERO\n");
    printf("P0\t%d\t%f\n", point_iszero(p0), point_distzero(p0));
    printf("P1\t%d\t%f\n", point_iszero(p1), point_distzero(p1));

    return 0;
}
