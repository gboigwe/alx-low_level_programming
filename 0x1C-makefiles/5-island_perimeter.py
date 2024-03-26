#!/usr/bin/python3
"""
Finding the perimeter of a land
Around a sea(island)
"""


def island_perimeter(grid):
    """returns the perimeter of the land
    Args:
    grid : list of list of integers
    """
    
    row = len(grid[0])
    col = len(grid)
    peri = 0
    size = 0
    
    for i in range(col):
        for j in range(row):
            if grid[i][j] == 1:
                size += 1
                # Noting boundary or a lake
                if (j > 0 and grid[i][j - 1] == 1):
                    peri += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        peri += 1
    return size * 4 - peri * 2
