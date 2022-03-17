#!/usr/bin/python3
"""Module that defines the function island_perimeter"""


def island_perimeter(grid):
    """Function that return the perimeter of the island described in 'grid'."""
    if grid is None or grid == [[]]:
        return
    perimeter = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
