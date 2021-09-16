/*
 * Author: PraveenKumar A (a.praveenkumar.ece@gmail.com)
 * Purpose: Find sum and difference of two number using pointer
 * Language:  C
 * Created:  16-09-2021
 */
  
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int t = *a;
    *a = *a + *b;
    *b = t > *b ? t - *b : *b - t;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Enter the two number to find the Sum and Difference:") ;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("sum of two number:%d\nDifference of two number:%d", a, b);

    return 0;
}
/* output:
Enter two number to find the Sum and Difference:45 89
sum of two number:134
Difference of two number:44

...Program finished with exit code 0
Press ENTER to exit console.

*/
