#include "conv.h"

// Conversao de temperatura em escala Celsius para Fahrenheit
float celsius2fahrenheit(float temp) {
    return temp * 1.8 + 32;
}

// Conversao de temperatura em escala Fahrenheit para Celsius
float fahrenheit2celsius(float temp) {
    return (temp - 32) / 1.8;
}