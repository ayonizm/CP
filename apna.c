#include<stdio.h>
int square(int a,int b);
float circle(float r);
float rect(float x,float y);
int main(){
    int x,y;
    float e;
    printf("enter the value of the two sides: \n");
    scanf("%d%d",&x,&y);
    printf("the square is %d\n",square(x,y));
    printf("enter the value of R of a circle: \n");
    scanf("%f",&e);
    printf("the area of circle is: %.2f",circle(e));
    return 0;


}
int square(int a,int b){
    int square;
    square = a * b;
    return square;
}
float circle(float r){
    float circle;
    circle = 3.1416 * r * r;
    return circle;
}
float rect(float x,float y){
    float xy;
    xy = x * y;
    return xy;
}
