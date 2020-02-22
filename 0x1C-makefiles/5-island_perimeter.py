#!/usr/bin/python3


def island_perimeter(grid):
    pmt = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                pmt += 4
                if y > 0:
                    if grid[y - 1][x] == 1:
                        pmt -= 2
                elif grid[y + 1][x] == 1:
                    pmt -= 2
                if x > 0:
                    if grid[y][x - 1] == 1:
                        pmt -= 2
                elif grid[y][x + 1] == 1:
                    pmt -= 2

    return pmt
