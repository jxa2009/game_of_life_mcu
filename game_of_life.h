#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H


// The number of rows on a given grid
#define NUM_GRID_ROWS (256)
// The number of columns on a given grid
#define NUM_GRID_COLUMNS (256)

// The number of rows a given array of neighbors will have
#define NUM_NEIGHBOR_ROWS (3)
// The number of columns a given array of neighbors will have
#define NUM_NEIGHBOR_COLUMNS (3)

// The max number of neighbors a given cell can have
#define NUM_TOTAL_NEIGHBORS (8)



#define
#define BIT1  0x00000001
#define BIT2  0x00000002
#define BIT3  0x00000003
#define BIT4  0x00000004
#define BIT5  0x00000005
#define BIT6  0x00000006
#define BIT7  0x00000007
#define BIT8  0x00000008
#define BIT9  0x00000009
#define BIT10 0x0000000A
/**
 * Struct for a single cell.
 *  Status - Represents if the cell is alive or dead : 1 for Alive, 0 for dead;
 * Neighbors is a single char (byte) because a given cell will only ever have eight neighbors
 *  -------------
 *  | Bit 1 | Bit 2 | Bit 3 |
 *  -------------
 *  | Bit 4 | Bit 5 | Bit 6 |
 *  -------------
 *  | Bit 7 | Bit 8 | Bit 9 |
 *  -------------
 * The neighbors will be at the LSB of the char
 * */
typedef struct Cell_S
{
    unsigned int x;
    unsigned int y;
    unsigned int alive_neighbors;
    unsigned int current_state;
} CellS;

/**
 * Grid represents the number of rows and columns in the given game board.
 * */
typedef struct Grid_S
{
    CellS Grid[NUM_GRID_ROWS][NUM_GRID_COLUMNS];
} GridS;

typedef enum NeighborConfig_E
{
    MiddleState,
    TopRow,
    BottomRow,
    LeftColimn,
    RightColumn

};

int Cell_Current_State(CellS cell);
int Get_Cell_Alive_Neighbors(CellS cell);
int Calculate_Cell_Alive_Neighbors(CellS cell, GridS* grid);
void Init_Grid(GridS* grid);

int Cell_Current_Cell(CellS);
int Get_Cell_Num_Neighbors(CellS);
int Get_Cell_Neighbor_Config(CellS);
int Cell_Next_Status(CellS);
#endif