#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list of list of int): 2D grid representing 
    """
    perimeter = 0
    height = len(grid)
    for i in range(height):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check adjacent cells and subtract 1 for each adjacent land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter
