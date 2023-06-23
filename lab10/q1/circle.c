#include <stdio.h>
#include "circle.h"

void circleData(int radius,float *area,float *perimeter){
    float ar= pi*radius*radius;
    float peri= 2*pi*radius;
    *area = ar;
    *perimeter= peri;   
}