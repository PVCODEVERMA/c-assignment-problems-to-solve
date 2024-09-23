#include<stdio.h>
int main(){
    float units, bill = 0.0, totalBill, surcharge;

    printf("Enter electricity unit charges: ");
    scanf("%f",&units);

switch ((int)units / 100){
    case 0: // 0-49 units
            bill = units * 0.50;
            break;
    case 1: // 50 - 149 units
            bill = (50 * 0.50) + ((units - 50) * 0.75);
            break;
    case 2: // 150 - 249 units
            bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
            break;
    default: // 250 units
            bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
            break;
}
surcharge = bill * 0.20; // 20% surcharge
totalBill = bill + surcharge;

printf("Total electricity bill = Rs. %.2f\n", totalBill);
return 0;
}