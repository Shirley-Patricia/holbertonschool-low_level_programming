#!/usr/bin/python3
"""island perimeter"""

def island_perimeter(grid):
    """function return the perimeter of the island"""
    perimeter = 0
    for row in range(len(grid)):
        for j in range(len(grid[row])):
            if (grid[row][j] == 1):
                if (grid[row][j - 1] == 0):
                    perimeter += 1
                if (grid[row][j + 1] == 0):
                    perimeter += 1
                if (grid[row - 1][j] == 0):
                    perimeter +=1
                if (grid[row + 1][j] == 0):
                    perimeter +=1
    return perimeter
