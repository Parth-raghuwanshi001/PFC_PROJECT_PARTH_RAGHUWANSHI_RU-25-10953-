#include <stdio.h>

// Function to scan and detect danger zones
void detectDangerZones(int grid[10][10], int rows, int cols)
{
    int i, j;
    printf("\nDanger Zone Positions:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (grid[i][j] == 1)
            {
                printf("Danger at position: Row %d, Column %d\n", i, j);
            }
        }
    }
}

int main()
{
    int rows, cols;
    int grid[10][10];
    int i, j;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input grid values
    printf("Enter the grid values (0 for Safe, 1 for Danger):\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    // Function call
    detectDangerZones(grid, rows, cols);

    return 0;
}