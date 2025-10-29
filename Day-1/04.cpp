#include<stdio.h>


void add(int a,float b, int c, int d){
    printf("Addition of 3 int 1 float : %.2f\n",a+b+c+d);
}
void add(float a,int b, float c, float d){
    printf("Addition of 1 int 3 float : %.2f\n",a+b+c+d);
}
void add(float a, int b,float c, int d){
    printf("Addition of 2 int 2 float : %.2f\n",a+b+c+d);
}
void add(int a,int b, int c, int d){
    printf("Addition of 4 int : %d\n",a+b+c+d);
}
void add(float a,float b, float c, float d){
    printf("Addition 0f 4 float : %.2f\n",a+b+c+d);

}

int main() {
    add(1,0.1f,1,1);
    add(0.1f,1,0.1f,1);
    add(0.1f,1,0.1f,0.1f);
    add(1,1,1,1);
    add(0.1f,0.1f,0.1f,0.1f);
    return 0;
}