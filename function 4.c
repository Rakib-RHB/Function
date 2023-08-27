



#include <stdio.h>
float getArea(float r){
return 3.1416*r*r;
}
void printVol(float r)
{
   float vol = (4*r*getArea(r))/3;
    printf("%f ",vol);
}


int main(){
printf("%f \n",getArea(2));
printVol(2);


}
