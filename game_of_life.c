#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "game_of_life.h"

/**
 * Determines if the current cell passed in is alive or not
 * Input: cell struct
 * */   
int Cell_Current_State(CellS cell)
{
    return cell.current_state;
}

int Get_Cell_Alive_Neighbors(CellS cell)
{

    return cell.alive_neighbors;    
}

/**
 * Returns the amount of neighbors the current cell has. Takes into account the possible different neighbor types.
 * Eight cases: Top left corners, top right corners, bottom left corners, bottom right corners, 
 *              non-corner top-row, non-corner bottom-row, 
 *              non-corner left-column, non-corner right-column,
 *              center
 * */

int Calculate_Cell_Alive_Neighbors(CellS cell, GridS* grid)
{
    // Represents the amount of alive neighbors
    int count = 0;

    // Top left corner
    if(cell.x == 0 && cell.y == 0)
    {

    }
    // Top right corner
    else if(cell.x == NUM_GRID_ROWS -1 && cell.y == 0)
    {

    }
    // Bottom left corner
    else if(cell.x == 0 && cell.y == NUM_GRID_ROWS - 1)
    {

    }
    // Bottom right corner
    else if(cell.x = NUM_GRID_ROWS && cell.y == NUM_GRID_ROWS -1)
    {

    }
    // Top row
    else if(cell.x != 0 && cell.x != NUM_GRID_ROWS -1 && cell.y == 0)
    {

    }
    // Bottom row
    else if(cell.x != 0 && cell.x != NUM_GRID_ROWS -1 && cell.y == NUM_GRID_ROWS -1)
    {

    }
    // Left column
    else if(cell.x == 0 && cell.y == 0 && cell.y == NUM_GRID_ROWS - 1)
    {

    }
    // Right column
    else if(cell.x == NUM_GRID_ROWS - 1 && cell.y == 0 && cell.y == NUM_GRID_ROWS - 1)
    {
        
    }
    else
    {

    }    
}

void Init_Grid(GridS* grid)
{
    for(int row = 0; row < NUM_GRID_ROWS; row++)
    {
        for(int col = 0; col < NUM_GRID_COLUMNS; col++)
        {
            grid->Grid[row][col].x = row;
            grid->Grid[row][col].y = col;
            grid->Grid[row][col].current_state = 0;
            grid->Grid[row][col].alive_neighbors = 0;
        }
    }
}





int main(int argc, char *argv[])
{
    return 0;
}
