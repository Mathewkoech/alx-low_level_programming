#!/usr/bin/python3
"""module calculates island perimeter"""
def island_perimeter(grid):
        """
        Calculate the island perimeter

        Args:
        grid: a list of list of integers 0 that has
        0 as water zone and 1 as land zone

        Returns: the perimeter of the grid
        """
	height = len(grid)
	width = len(grid[0])

	if height > 100 or width > 100:
		return "width or height should not exceed 100"
	neighbours = []
	for i in range(0, height):
		for j in range(0,width):
			if grid[i][j] == 1:
				top = grid[i-1][j]
				below = grid[i+1][j]
				left = grid[i][j-1]
				right = grid[i][j+1]
				cell_neighbours =[top, below, left, right]
				neighbours.extend(cell_neighbours)
	return neighbours.count(0)
