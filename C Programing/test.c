#include <stdio.h>

void print_arr(int arr[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void set_arr_to(int arr[10][10], int value, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = value;
        }
    }
}

void set_col_to(int arr[10][10], int col, int value, int rows) {
    for (int i = 0; i < rows; i++) {
        arr[i][col] = value;
    }
}

void set_row_to(int arr[10][10], int row, int value, int cols) {
    for (int j = 0; j < cols; j++) {
        arr[row][j] = value;
    }
}

void set_individual(int arr[10][10], int row, int col, int value) {
    arr[row][col] = value;
}

int main() {
    int arr[10][10] = {0};
    int choice, value, row, col;

    while (1) {
        printf("1. Change all values\n");
        printf("2. Change a single row.\n");
        printf("3. Change a single column.\n");
        printf("4. Change individual coordinates\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value you want to set: ");
                scanf("%d", &value);
                set_arr_to(arr, value, 10, 10);
                printf("Each house in the metrix has a terrorist...\n");
                print_arr(arr, 10, 10);
                break;
            case 2:
                printf("Enter the row you want to modify: ");
                scanf("%d", &row);
                printf("Enter the value you want to set for row %d: ", row);
                scanf("%d", &value);
                set_row_to(arr, row, value, 10);
                break;
            case 3:
                printf("Enter the column you want to modify: ");
                scanf("%d", &col);
                printf("Enter the value you want to set for column %d: ", col);
                scanf("%d", &value);
                set_col_to(arr, col, value, 10);
                break;
            case 4:
                printf("Enter the row: ");
                scanf("%d", &row);
                printf("Enter the col: ");
                scanf("%d", &col);
                printf("Enter the value to set in arr[%d][%d]: ", row, col);
                scanf("%d", &value);
                set_individual(arr, row, col, value);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid option, try again\n");
        }
    }
    return 0;
}
