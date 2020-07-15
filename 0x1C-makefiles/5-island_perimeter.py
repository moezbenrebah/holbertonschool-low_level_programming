#!/usr/bin/python3
"""
"""

def island_perimeter(grid):
    """
    """
    per = 0

    for i, j in enumerate(grid):
        for x, y in enumerate(j):
            if y == 1:
                if i == 0 or grid[i - 1][x] == 0:
                    per += 1
                if i == len(grid) - 1 or grid[i + 1][x] == 0:
                    per += 1
                if x == 0 or grid[i][x - 1] == 0:
                    per += 1
                if x == len(j) - 1 or grid[i][x + 1] == 0:
                    per += 1
    return per
