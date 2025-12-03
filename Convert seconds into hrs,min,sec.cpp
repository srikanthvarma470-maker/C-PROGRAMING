#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;              // 1 hour = 3600 seconds
    minutes = (total_seconds % 3600) / 60;     // remaining minutes
    seconds = total_seconds % 60;              // remaining seconds

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}

