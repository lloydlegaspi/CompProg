#include <stdio.h>
#include <math.h>

int main() {
  // Define variables for the diameter, price, and area of the pizza
  int diameter;
  float price, area;

  // Input the diameter and price of the pizza
  printf("Enter the diameter of the pizza: ");
  scanf("%d", &diameter);
  printf("Enter the price of the pizza: ");
  scanf("%f", &price);

  // Calculate the area of the pizza
  area = M_PI * pow(diameter / 2.0, 2);

  // Calculate the price per square inch of the pizza
  float price_per_square_inch = price / area;

  // Compare the price per square inch of the pizza to the options offered by Domino's
  if (price_per_square_inch < 178.0 / (M_PI * pow(10 / 2.0, 2))) {
    printf("The pizza is the least expensive option in terms of price per square inch.\n");
  } else if (price_per_square_inch < 259.0 / (M_PI * pow(12 / 2.0, 2))) {
    printf("The pizza is the second least expensive option in terms of price per square inch.\n");
  } else if (price_per_square_inch < 314.0 / (M_PI * pow(14 / 2.0, 2))) {
    printf("The pizza is the third least expensive option in terms of price per square inch.\n");
  } else {
    printf("The pizza is not one of the least expensive options in terms of price per square inch.\n");
  }

  return 0;
}

