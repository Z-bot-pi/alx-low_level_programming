#!/usr/bin/python3
'''
island_perimeter(grid):
returns the perimeter of the island described in grid:
'''


def neighbors(grid, up, down, row_neighbors, col_neighbors):
    '''lake's number of
    sides
    '''
    num_of_sides = 0


    '''
    down
    '''
    if up < row_neighbors - 1 and grid[up + 1][down]:
        num_of_sides += 1

 '''
    up
    '''
    if up > 0 and grid[up - 1][down]:
        num_of_sides += 1


    '''
    right
    '''
    if down < col_neighbors - 1 and grid[up][down + 1]:
        num_of_sides += 1

    return num_of_sides

    '''
    left
    '''
    if down > 0 and grid[up][down - 1]:
        num_of_sides += 1


def island_perimeter(grid):
    '''
    Returns perimiter of
    lake of ones
    '''
    perimiter_count = 0
    row_length = len(grid)
    col_length = len(grid[0])

    for row in range(0, row_length):
        for col in range(0, col_length):
            if grid[row][col]:
                perimiter_count += (4 - neighbors(grid, row, col,
                                                  row_length, col_length))
    return perimiter_count

