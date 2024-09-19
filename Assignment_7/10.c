#include <stdio.h>
int main()
{
    int n, r, x, s;
    printf("Armstrong numbers are\n");
    for (n = 1; n <= 1000; n++)
    {
        s = 0;
        x = n;
        while (x != 0)
        {
            r = x % 10;
            s = s + r + r + r;
            x = x / 10;
        }
        if (s == n)
            printf("%d\n", n);
    }
    return 0;
}










// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, originalNum, remainder, n = 0, result = 0;

//     printf("Armstrong numbers under 1000:\n");

//     for (num = 1; num < 1000; num++) {
//         originalNum = num;
//         n = 0;
//         result = 0;

//         // Find the number of digits
//         while (originalNum != 0) {
//             originalNum /= 10;
//             ++n;
//         }

//         originalNum = num;

//         // Calculate the sum of digits raised to the power n
//         while (originalNum != 0) {
//             remainder = originalNum % 10;
//             result += pow(remainder, n);
//             originalNum /= 10;
//         }

//         // Check if the number is Armstrong
//         if (result == num) {
//             printf("%d\n", num);
//         }
//     }

//     return 0;
// }