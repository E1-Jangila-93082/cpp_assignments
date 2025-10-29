#include<stdio.h>

inline int triangle_area(int base, int height) {
    return (base * height) / 2;
}

int main() {
    int h, b,area;
    printf("Enter height :");
    scanf("%d",&h);
    printf("Enter base :");
    scanf("%d",&b);
    printf("Area : %d\n",triangle_area(b,h));
    return 0;
}
