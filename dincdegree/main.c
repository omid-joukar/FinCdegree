#include <stdio.h>

int main(void) {
  printf("Dieses Programm rechnet eine Temperatur von Fahrenheit in Celsius um\n\n");
  float farenheit,celsius;
  printf("Geben Sie bitte die Temperatur in Grad Fahrenheit ein: ");
  scanf("%f",&farenheit);
  celsius = ((farenheit-32)*5)/9;
  printf("\n%.1f °F entsprechen %.1f °C\n\n",farenheit,celsius);
  return 0;
}

