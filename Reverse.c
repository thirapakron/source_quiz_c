#include <stdio.h>
int main() {
   
    int n, rev = 0, remain;
   
    printf("Enter : ");
    scanf("%d", &n);
   
    while (n != 0) {
        remain = n % 10;
        rev = rev * 10 + remain;
        n /= 10;
    }
   
    printf("Reverse number = %d", rev);
    
    return 0;
}