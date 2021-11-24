#!/usr/bin/python3
""" Defines a functions that finds the perimeter of island """


def island_perimeter(grid):
    """ Returns the perimeter of the island land
    Args:
       grid (list): 2-dimension matrix containing 1s and 0s
    Returns:
       perimeter of the island
    """
    h = len(grid)
    w = len(grid[0])

    squares = 0
    unwanted_sides = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                squares += 1
                if j > 0 and grid[i][j - 1] == 1:
                    unwanted_sides += 1

                if i > 0 and grid[i - 1][j] == 1:
                    unwanted_sides += 1

    return squares * 4 - unwanted_sides * 2
