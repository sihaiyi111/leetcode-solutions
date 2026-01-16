/**
 * Problem: Convert Temperature (LeetCode #2469)
 * Given a Celsius temperature, convert it to Kelvin and Fahrenheit.
 * 
 * Approach:
 * - Kelvin = Celsius + 273.15
 * - Fahrenheit = Celsius * 1.80 + 32.00
 * - Use malloc to allocate an array of size 2
 * 
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

#include <stdlib.h>

double* convertTemperature(double celsius, int* returnSize) {
    double *ans = (double*)malloc(sizeof(double) * 2);
    *ans = celsius + 273.15;
    *(ans + 1) = celsius * 1.80 + 32;
    *returnSize = 2;
    return ans;
}
