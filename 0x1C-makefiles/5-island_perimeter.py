#!/usr/bin/python3


def island_perimeter(grid):

    size = 0
    edge = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edge += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edge += 1
    per = size * 4 - edge * 2
    return per
