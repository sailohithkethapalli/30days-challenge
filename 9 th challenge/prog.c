#include <stdio.h>

#define ROWS 5
#define COLS 6

int seats[ROWS][COLS] = {0};  // 0 = available, 1 = booked

void showSeats(void) {
    int r, c;

    printf("\nSeat map (0 = available, 1 = booked):\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d ", seats[r][c]);
        }
        printf("\n");
    }
}

void bookSeat(void) {
    int row, col;

    printf("Enter row and seat number (1-%d, 1-%d): ", ROWS, COLS);
    scanf("%d %d", &row, &col);

    row--;
    col--;

    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        printf("Invalid seat.\n");
    } else if (seats[row][col] == 1) {
        printf("That seat is already booked.\n");
    } else {
        seats[row][col] = 1;
        printf("Seat booked.\n");
    }
}

void cancelSeat(void) {
    int row, col;

    printf("Enter row and seat number to cancel: ");
    scanf("%d %d", &row, &col);

    row--;
    col--;

    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        printf("Invalid seat.\n");
    } else if (seats[row][col] == 0) {
        printf("That seat is not booked.\n");
    } else {
        seats[row][col] = 0;
        printf("Reservation cancelled.\n");
    }
}

void findGroupSeats(void) {
    int needed, r, c, count, found = 0;

    printf("How many consecutive seats are needed? ");
    scanf("%d", &needed);

    if (needed < 1 || needed > COLS) {
        printf("Enter a number from 1 to %d.\n", COLS);
        return;
    }

    for (r = 0; r < ROWS; r++) {
        count = 0;

        for (c = 0; c < COLS; c++) {
            if (seats[r][c] == 0) {
                count++;
                if (count == needed) {
                    printf("Found %d seats in row %d, seats %d to %d.\n",
                           needed, r + 1, c - needed + 2, c + 1);
                    found = 1;
                    break;
                }
            } else {
                count = 0;
            }
        }

        if (found) {
            break;
        }
    }

    if (!found) {
        printf("No consecutive seats available.\n");
    }
}

void occupancyReport(void) {
    int r, c, booked = 0;
    int total = ROWS * COLS;

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            if (seats[r][c] == 1) {
                booked++;
            }
        }
    }

    printf("\nOccupancy report:\n");
    printf("Booked seats: %d\n", booked);
    printf("Available seats: %d\n", total - booked);
    printf("Total seats: %d\n", total);
}

int main(void) {
    int choice;

    do {
        printf("\n--- Campus Event Seat Reservation ---\n");
        printf("1. Show seats\n");
        printf("2. Book a seat\n");
        printf("3. Cancel a reservation\n");
        printf("4. Find consecutive seats\n");
        printf("5. Occupancy report\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: showSeats(); break;
            case 2: bookSeat(); break;
            case 3: cancelSeat(); break;
            case 4: findGroupSeats(); break;
            case 5: occupancyReport(); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid option.\n");
        }
    } while (choice != 0);

    return 0;
}
