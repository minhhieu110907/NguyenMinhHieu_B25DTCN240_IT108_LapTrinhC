#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){ 
    int a =10 , b =5 , c= 3;
    float tuso = pow ( a,  2) + sqrt  (  pow( b , 2) + 4 * a * c), mauso = 2 * a;
     float S = tuso / mauso - ( pow ( b,3) / pow ( c,2) ) + sqrt (abs( a-b));

    printf(" Ket qua cua phuong trinh S la: = %f", S);

return 0;
}


