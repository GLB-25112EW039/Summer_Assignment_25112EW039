#include <stdio.h>

struct Ticket {
    int trainNo;
    char passengerName[50];
    int seatNo;
    float fare;
};

int main() {
    int count;
    scanf("%d", &count);
    struct Ticket bookings[count];

    for (int i = 0; i < count; i++) {
        scanf("%d %s %d %lf", &bookings[i].trainNo, bookings[i].passengerName, &bookings[i].seatNo, &bookings[i].fare);
    }

    for (int i = 0; i < count; i++) {
        printf("Passenger: %s | Train: %d | Seat: %d | Fare: %.2f\n", bookings[i].passengerName, bookings[i].trainNo, bookings[i].seatNo, bookings[i].fare);
    }

    return 0;
}