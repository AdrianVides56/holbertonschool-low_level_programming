#!/usr/bin/python3
""" Module to calc the perimeter """


def island_perimeter(grid):
    """ Method to calc the perimeter """
    i, j, per = 0, 0, 0
    while i < len(grid):
        j = 0
        while j < len(grid[0]):
            if grid[i][j] == 1:
                per += 4
                if i - 1 > 0 and grid[i - 1][j] == 1:
                    per -= 1
                if i + 1 < len(grid) and grid[i + 1][j] == 1:
                    per -= 1
                if j - 1 > 0 and grid[i][j - 1] == 1:
                    per -= 1
                if j + 1 < len(grid[0]) and grid[i][j + 1] == 1:
                    per -= 1
            j += 1
        i += 1
    return per
