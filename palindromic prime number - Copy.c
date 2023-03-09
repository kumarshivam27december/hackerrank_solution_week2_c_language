// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    int temp = n, reverse = 0;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return n == reverse;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isPrime(n) && isPalindrome(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

