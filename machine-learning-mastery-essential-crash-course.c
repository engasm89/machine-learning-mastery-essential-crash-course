#include <stdio.h> // Include I/O for ML logs

double predict(double x) { // Simple linear model y = 2x + 1
  return 2.0 * x + 1.0; // Compute prediction
} // End predict

int main(void) { // Entry
  printf("Machine Learning Mastery: Essential Crash Course\n"); // Title
  double x = 3.0; // Input feature
  double y = predict(x); // Prediction
  printf("x=%.2f y=%.2f\n", x, y); // Log
  return 0; // Exit
} // End main

