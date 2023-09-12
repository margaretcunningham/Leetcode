class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        sides = 0
        if len(grid) == 1 and len(grid[0]) == 1:
            if grid[0][0] == 1:
                sides+=4
            return sides
        
        if len(grid) == 1 and len(grid[0]) > 1:
            for col in range(0, len(grid[0])):
                if grid[0][col] == 1:
                    sides+=4
                    if col == 0:
                        if grid[0][col+1] == 1: # check to the right
                                sides-=1
                    elif col == len(grid[0]) -1:
                        if grid[0][col-1] == 1: # check to the left
                            sides-=1
                    else:
                        if grid[0][col+1] == 1: # check to the right
                                sides-=1
                        if grid[0][col-1] == 1: # check to the left
                            sides-=1
            return sides
        elif len(grid) > 1 and len(grid[0]) == 1:
            for row in range(0, len(grid)):
                if grid[row][0] == 1:
                    sides+=4
                    if row == 0:
                        if grid[row+1][0] == 1: # check to the right
                                sides-=1
                    elif row == len(grid) -1:
                        if grid[row-1][0] == 1: # check to the left
                            sides-=1
                    else:
                        if grid[row+1][0] == 1: # check to the right
                                sides-=1
                        if grid[row-1][0] == 1: # check to the left
                            sides-=1
            return sides
        else:
            for row in range(0,len(grid)):
                for col in range(0,len(grid[0])):
                    if grid[row][col] == 1:
                        sides += 4
                        if row == 0 and col == 0: # handle upper left corner
                            if grid[row+1][col] == 1: # check below
                                sides-=1
                            if grid[row][col+1] == 1: # check to the right
                                sides-=1
                        elif row == 0 and col == len(grid[0])-1: # handle upper right corner
                            if grid[row+1][col] == 1: # check below
                                sides-=1
                            if grid[row][col-1] == 1: # check to the left
                                sides-=1
                        elif row == 0 and col > 0 and col < len(grid[0])-1: # handle row 0
                            if grid[row+1][col] == 1: # check below
                                sides-=1
                            if grid[row][col+1] == 1: # check to the right
                                sides-=1
                            if grid[row][col-1] == 1: # check to the left
                                sides-=1
                        elif row == len(grid)-1 and col == 0: # handle lower left
                            if grid[row-1][col] == 1: # check above
                                sides-=1
                            if grid[row][col+1] == 1: # check right
                                sides-=1
                        elif row == len(grid)-1 and col == len(grid[0])-1: # handle lower right
                            if grid[row-1][col] == 1: # check above
                                sides-=1
                            if grid[row][col-1] == 1: # check left
                                sides-=1
                        elif row == len(grid)-1 and col > 0 and col < len(grid[0])-1: # handle last row
                            if grid[row-1][col] == 1: # check above
                                sides-=1
                            if grid[row][col+1] == 1: # check right
                                sides-=1
                            if grid[row][col-1] == 1: # check left
                                sides-=1
                        elif col == 0 and row > 0 and row < len(grid) - 1:
                            if grid[row-1][col] == 1: # check above
                                sides-=1
                            if grid[row][col+1] == 1: # check right
                                sides-=1
                            if grid[row+1][col] == 1: # check below
                                sides-=1
                        elif col == len(grid[0]) - 1 and row > 0 and row < len(grid) - 1:
                            print(row, col, len(grid[0])-1, len(grid)-1)
                            if grid[row-1][col] == 1: # check above
                                sides-=1
                            if grid[row][col-1] == 1: # check left
                                sides-=1
                            if grid[row+1][col] == 1: # check below
                                sides-=1
                        else:
                            if grid[row-1][col] == 1: # check above
                                sides-=1
                            if grid[row][col-1] == 1: # check left
                                sides-=1
                            if grid[row][col+1] == 1: # check right
                                sides-=1
                            if grid[row+1][col] == 1: # check below
                                sides-=1

        return sides
