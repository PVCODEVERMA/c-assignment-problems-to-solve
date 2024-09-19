// #include <stdio.h>

// int findFirstSetBit(int n) {
//     int position = 1; // Start from the 1st bit
//     while (n > 0) {
//         if (n & 1) {
//             return position;
//         }
//         n = n >> 1; // Right shift the number to check the next bit
//         position++;
//     }
//     return -1; // In case there's no '1' found (i.e., n was 0)
// }

// int main() {
//     int num;
    
//     // Input the number from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     // Function to find the first set bit
//     int result = findFirstSetBit(num);
    
//     if (result != -1) {
//         printf("The position of the first 1 in LSB is: %d\n", result);
//     } else {
//         printf("There is no 1 in the number.\n");
//     }

//     return 0;
// }


#include<stdio.h>
void add()
{
    int a,b;

    printf("Enter 2 number\n");
    scanf("%d %d", &a,&b);
    printf("Addition = %d\n\n",a+b);

}

int main(){
    add();
    return 0;
}

