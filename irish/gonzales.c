#include <stdio.h>
int main() {
    int vehicles, hours, fee;
    int i = 1, over3Hours = 0;
    int totalRevenue = 0;

    printf("Enter number of vehicles: ");
    scanf("%d", &vehicles);

    while (vehicles <= 0) {
        printf("Invalid input! Enter a positive number: ");
        scanf("%d", &vehicles);
    }

    do {
        printf("\nVehicle %d\n", i);
        printf("Enter whole hours parked (minimum 1): ");
        scanf("%d", &hours);

        while (hours < 1) {
            printf("Invalid hours! Enter at least 1: ");
            scanf("%d", &hours);
        }

        if (hours == 1) {
            fee = 20;
        } else {
            fee = 20 + (hours - 1) * 10;
        }

        printf("Parking fee: P%d\n", fee);

        totalRevenue += fee;

        if (hours > 3) {
            over3Hours++;
        }

        i++;
    } while (i <= vehicles);

    printf("\n===== PARKING SUMMARY =====\n");
    printf("Total vehicles: %d\n", vehicles);
    printf("Total parking revenue: P%d\n", totalRevenue);
    printf("Vehicles parked more than 3 hours: %d\n",
           over3Hours);

    return 0;
}
