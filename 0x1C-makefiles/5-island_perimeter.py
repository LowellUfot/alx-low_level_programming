#!/usr/bin/python3
"""Module for island perimeter calculation"""


def island_perimeter(grid):
    """Returns the perimeter of the island in a grid
    The grid represents water by 0 and land by 1

    Args:
        grid(list): a list of list of integers representing an island
    Returns:
        The perimeter of the island defined in grid
    """

    row_len = len(grid[0])
    col_len = len(grid)
    edges = 0
    count = 0

    for i in range(col_len):
        for j in range(row_len):
            if grid[i][j] == 1:
                count += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return (count * 4 - edges * 2)
