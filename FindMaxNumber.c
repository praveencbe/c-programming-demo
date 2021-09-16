/*
 * Author: PraveenKumar A (a.praveenkumar.ece@gmail.com)
 * Purpose: Program to find the maximum number from user input number
 * Language:  C
 * Created:  16-09-2021
 */
  
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int ans;
    a = a > b ? a : b;
    c = c > d ? c : d;
    ans = a > c ? a : c;
    return ans;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
/* output:
23 45 70 21
70

...Program finished with exit code 0
Press ENTER to exit console.

*/
