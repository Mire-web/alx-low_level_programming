#!/usr/bin/python3
"""
Calculate Perimeter of Island described in grid
Author: Mire
"""


def island_perimeter(grid):
    """
    Island Perimeter calculator function
    Arguments:
    grid: the island grid
    return: Perimeter of the Island
    """

    length = 0
    width = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                length += 1
                if row != len(grid) - 1:
                    if grid[row + 1][col] == 1:
                        width += 1
                if col != len(grid[row]) - 1:
                    if grid[row][col + 1] == 1:
                        width += 1
    return (4 * length) - (width * 2)
