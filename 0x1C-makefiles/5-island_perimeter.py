#!/usr/bin/python3
"""
    island_perimeter contains the perimeter function
    of the island
"""


def island_perimeter(grid):
    """
        Returns the perimeter of the island in grid format
        Args:
            grid (list): list of lists
        Return:
            island perimeter
    """
    water_zone = 0
    land_zone = 1
    index_list = []
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is land_zone:
                perimeter += 4
                if i > 0 and grid[i][j - 1]:
                    perimeter -= 2
                if j > 0 and grid[i - 1][j]:
                    perimeter -= 2

    return perimeter
