#!/usr/bin/python3
"""
This Module contains the island_perimeter and count_surrounding_water functions
"""


def island_perimeter(grid):
    """
    This function returns the perimeter of island described in grid.

    Args:
    grid (list of list of int): A 2D grid representing the island.
    Each cell in the grid can have a value of 0 (water) or 1 (land).

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    nrows = len(grid)

    if grid != []:
        ncolumns = len(grid[0])

    for a in range(nrows):
        for b in range(ncolumns):
            if grid[a][b] == 1:
                perimeter += count_surrounding_water(grid, a, b)

    return perimeter


def count_surrounding_water(grid, i, j):
    """
    This function counts the number of surrounding water cells
    for a given land cell.

    Args:
        grid (list of list of int): The grid representing the island.
        i (int): The row index of the current cell.
        j (int): The column index of the current cell.

    Returns:
        int: The number of surrounding water cells.
    """
    water = 0

    nrows = len(grid)
    ncolumns = len(grid[0])

    if i == 0 or grid[i - 1][j] == 0:
        water += 1
    if i == nrows - 1 or grid[i + 1][j] == 0:
        water += 1
    if j == 0 or grid[i][j - 1] == 0:
        water += 1
    if j == ncolumns - 1 or grid[i][j + 1] == 0:
        water += 1

    return water
