#include <stdio.h>
#include <stdbool.h>

void standard(int region, double factor[]);
float ton_to_BTU(float ton, double factor); 
float ton_to_kW(float ton, double factor);

int main() {
  int region = 0;
  double factor[2];
  float ton = 0.0;
  float BTU = 0.0;
  float kW = 0.0;
  do {
    printf("Enter region (1: US, 2: Japan, 3: Taiwan): ");
    scanf_s("%d", &region);
    if (region < 1 || region > 3) {
      printf("Invalid region. Exiting.\n");
      break;
    }
    standard(region, factor);
    printf("Enter value in tons: ");
    scanf_s("%f", &ton);
    BTU = ton_to_BTU(ton, factor[0]);
    printf("%.2f tons = %.2f BTU\n", ton, BTU);
    kW = ton_to_kW(ton, factor[1]);
    printf("%.2f tons = %.2f kW\n", ton, kW);

  } while (true);
  return 0;
}

void standard(int region, double factor[]) {
  switch (region) {
    case 1:  // US standard
      factor[0] = 12000.0; 
      factor[1] = 3.517;  
      break;
    case 2: // Japan standard
      factor[0] = 10000.0; 
      factor[1] = 2.93;  
      break;
    case 3: // Taiwan standard
      factor[0] = 8000.0; 
      factor[1] = 2.34;  
      break;
    default:
      break;
  }
}

float ton_to_BTU(float ton, double factor) {
  return ton * factor;
}

float ton_to_kW(float ton, double factor) {
  return ton * factor;
}
