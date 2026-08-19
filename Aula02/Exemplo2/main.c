#include <stdio.h>
#include "conversoes.h"

int main(void){
    double tempC = 30;
    double tempF = 0;

    tempF = celsius_para_fahrenheit(tempC);
    printf("A temperatura em Celcius eh: %f \nA temperatura em fahrenheit eh %.2f",tempC, tempF);

}