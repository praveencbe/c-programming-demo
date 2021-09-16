/*
 * Author: PraveenKumar A (a.praveenkumar.ece@gmail.com)
 * Purpose: Add the sum of 1D array integer based on user input 
 * Language:  C
 * Created:  16-09-2021
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int * arr = (int *)malloc(n * sizeof(int));  
    for(int i = 0; i < n; i ++) {
        scanf("%d", arr + i);
        sum += arr [i];
    } 
    printf("%d", sum); 
    return 0;
}


/* output:
5
1 2 3 4 5
15

...Program finished with exit code 0
Press ENTER to exit console.
*/
