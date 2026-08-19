# include "conversoes.h"

double celsius_para_fahrenheit(double tempc){
    double tempF = tempc*(9.0 /5.0 )+32;
    return tempF;
}

double fahrenheit_para_celsius(double tempf){
    double tempC = (tempf-32)*(5.0/9.0);
    return tempC;
}