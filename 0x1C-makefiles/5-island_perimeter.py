#!/usr/bin/python3
"""Module that defines the function island_perimeter"""


def island_perimeter(grid):
    """Function that return the perimeter of the island described in 'grid'."""
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 grid[i][j - 1] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
