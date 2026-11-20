#include <stdio.h>
#define BUILDINGS 3
#define DAYS 4
void analyzeWater(int usage[BUILDINGS][DAYS], int *total) {
*total = 0;
for (int b = 0; b < BUILDINGS; b++) {
for (int d = 0; d < DAYS; d++) {
*total += usage[b][d];
if (usage[b][d] > 100) {
printf("Possible leak: Building %d, Day %d used %d liters.\n",
b + 1, d + 1, usage[b][d]);
}
}
}
}
int main(void) {
int usage[BUILDINGS][DAYS] = {
{80, 85, 90, 150},
{70, 75, 72, 78},
{110, 105, 108, 112}
};
int total;
analyzeWater(usage, &total);
printf("Total campus water use: %d liters\n", total);
printf("Tip: Check taps and pipes, and avoid running water unnecessarily.\n");
return 0;
}
