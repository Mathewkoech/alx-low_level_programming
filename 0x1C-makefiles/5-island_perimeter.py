#!/usr/bin/python3

"""
This module calculates the island perimeter
"""


def island_perimeter(grid):
    """
    Calculate the island perimeter

    Args:
    grid (list of list of int):
    Represents the island grid where 1 represents land and 0 represents water

    Returns:
        int: The perimeter of the island
    """
    perimeter = 0

    if not grid:
        return perimeter

    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == height - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == width - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
