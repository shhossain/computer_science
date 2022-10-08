# A* Search
A* search is the most commonly known form of best-first search. It uses heuristic function h(n), and cost to reach the node n from the start state g(n). It has combined features of UCS and greedy best-first search, by which it solve the problem efficiently. A* search algorithm finds the shortest path through the search space using the heuristic function. This search algorithm expands less search tree and provides optimal result faster. A* algorithm is similar to UCS except that it uses g(n)+h(n) instead of g(n).

## Complexity
### Time Complexity
The time complexity of A* search algorithm depends on heuristic function, and the number of nodes expanded is exponential to the depth of solution d. So the time complexity is O(b^d), where b is the branching factor.

### Space Complexity
The space complexity of A* search algorithm is O(b^d)

## Pseudocode
```
function reconstruct_path(cameFrom, current)
    total_path := {current}
    while current in cameFrom.Keys:
        current := cameFrom[current]
        total_path.prepend(current)
    return total_path

// A* finds a path from start to goal.
// h is the heuristic function. h(n) estimates the cost to reach goal from node n.
function A_Star(start, goal, h)
    // The set of discovered nodes that may need to be (re-)expanded.
    // Initially, only the start node is known.
    // This is usually implemented as a min-heap or priority queue rather than a hash-set.
    openSet := {start}

    // For node n, cameFrom[n] is the node immediately preceding it on the cheapest path from start
    // to n currently known.
    cameFrom := an empty map

    // For node n, gScore[n] is the cost of the cheapest path from start to n currently known.
    gScore := map with default value of Infinity
    gScore[start] := 0

    // For node n, fScore[n] := gScore[n] + h(n). fScore[n] represents our current best guess as to
    // how cheap a path could be from start to finish if it goes through n.
    fScore := map with default value of Infinity
    fScore[start] := h(start)

    while openSet is not empty
        // This operation can occur in O(Log(N)) time if openSet is a min-heap or a priority queue
        current := the node in openSet having the lowest fScore[] value
        if current = goal
            return reconstruct_path(cameFrom, current)

        openSet.Remove(current)
        for each neighbor of current
            // d(current,neighbor) is the weight of the edge from current to neighbor
            // tentative_gScore is the distance from start to the neighbor through current
            tentative_gScore := gScore[current] + d(current, neighbor)
            if tentative_gScore < gScore[neighbor]
                // This path to neighbor is better than any previous one. Record it!
                cameFrom[neighbor] := current
                gScore[neighbor] := tentative_gScore
                fScore[neighbor] := tentative_gScore + h(neighbor)
                if neighbor not in openSet
                    openSet.add(neighbor)

    // Open set is empty but goal was never reached
    return failure
```

## Implementations
* [C++](#cpp)
* [C#](#csharp)
* [C](#c)
* [Java](#java)
* [JavaScript](#javascript)
* [Python](#python)
* [Go](#go)

### CPP
```cpp
#include <list>
#include <algorithm>
#include <iostream>

class point {
public:
    point( int a = 0, int b = 0 ) { x = a; y = b; }
    bool operator ==( const point& o ) { return o.x == x && o.y == y; }
    point operator +( const point& o ) { return point( o.x + x, o.y + y ); }
    int x, y;
};

class map {
public:
    map() {
        char t[8][8] = {
            {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 1, 1, 0}, {0, 0, 1, 0, 0, 0, 1, 0},
            {0, 0, 1, 0, 0, 0, 1, 0}, {0, 0, 1, 1, 1, 1, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0}
        };
        w = h = 8;
        for( int r = 0; r < h; r++ )
            for( int s = 0; s < w; s++ )
                m[s][r] = t[r][s];
    }
    int operator() ( int x, int y ) { return m[x][y]; }
    char m[8][8];
    int w, h;
};

class node {
public:
    bool operator == (const node& o ) { return pos == o.pos; }
    bool operator == (const point& o ) { return pos == o; }
    bool operator < (const node& o ) { return dist + cost < o.dist + o.cost; }
    point pos, parent;
    int dist, cost;
};

class aStar {
public:
    aStar() {
        neighbours[0] = point( -1, -1 ); neighbours[1] = point(  1, -1 );
        neighbours[2] = point( -1,  1 ); neighbours[3] = point(  1,  1 );
        neighbours[4] = point(  0, -1 ); neighbours[5] = point( -1,  0 );
        neighbours[6] = point(  0,  1 ); neighbours[7] = point(  1,  0 );
    }

    int calcDist( point& p ){
        // need a better heuristic
        int x = end.x - p.x, y = end.y - p.y;
        return( x * x + y * y );
    }

    bool isValid( point& p ) {
        return ( p.x >-1 && p.y > -1 && p.x < m.w && p.y < m.h );
    }

    bool existPoint( point& p, int cost ) {
        std::list<node>::iterator i;
        i = std::find( closed.begin(), closed.end(), p );
        if( i != closed.end() ) {
            if( ( *i ).cost + ( *i ).dist < cost ) return true;
            else { closed.erase( i ); return false; }
        }
        i = std::find( open.begin(), open.end(), p );
        if( i != open.end() ) {
            if( ( *i ).cost + ( *i ).dist < cost ) return true;
            else { open.erase( i ); return false; }
        }
        return false;
    }

    bool fillOpen( node& n ) {
        int stepCost, nc, dist;
        point neighbour;

        for( int x = 0; x < 8; x++ ) {
            // one can make diagonals have different cost
            stepCost = x < 4 ? 1 : 1;
            neighbour = n.pos + neighbours[x];
            if( neighbour == end ) return true;

            if( isValid( neighbour ) && m( neighbour.x, neighbour.y ) != 1 ) {
                nc = stepCost + n.cost;
                dist = calcDist( neighbour );
                if( !existPoint( neighbour, nc + dist ) ) {
                    node m;
                    m.cost = nc; m.dist = dist;
                    m.pos = neighbour;
                    m.parent = n.pos;
                    open.push_back( m );
                }
            }
        }
        return false;
    }

    bool search( point& s, point& e, map& mp ) {
        node n; end = e; start = s; m = mp;
        n.cost = 0; n.pos = s; n.parent = 0; n.dist = calcDist( s );
        open.push_back( n );
        while( !open.empty() ) {
            //open.sort();
            node n = open.front();
            open.pop_front();
            closed.push_back( n );
            if( fillOpen( n ) ) return true;
        }
        return false;
    }

    int path( std::list<point>& path ) {
        path.push_front( end );
        int cost = 1 + closed.back().cost;
        path.push_front( closed.back().pos );
        point parent = closed.back().parent;

        for( std::list<node>::reverse_iterator i = closed.rbegin(); i != closed.rend(); i++ ) {
            if( ( *i ).pos == parent && !( ( *i ).pos == start ) ) {
                path.push_front( ( *i ).pos );
                parent = ( *i ).parent;
            }
        }
        path.push_front( start );
        return cost;
    }

    map m; point end, start;
    point neighbours[8];
    std::list<node> open;
    std::list<node> closed;
};

int main( int argc, char* argv[] ) {
    map m;
    point s, e( 7, 7 );
    aStar as;

    if( as.search( s, e, m ) ) {
        std::list<point> path;
        int c = as.path( path );
        for( int y = -1; y < 9; y++ ) {
            for( int x = -1; x < 9; x++ ) {
                if( x < 0 || y < 0 || x > 7 || y > 7 || m( x, y ) == 1 )
                    std::cout << char(0xdb);
                else {
                    if( std::find( path.begin(), path.end(), point( x, y ) )!= path.end() )
                        std::cout << "x";
                    else std::cout << ".";
                }
            }
            std::cout << "\n";
        }

        std::cout << "\nPath cost " << c << ": ";
        for( std::list<point>::iterator i = path.begin(); i != path.end(); i++ ) {
            std::cout<< "(" << ( *i ).x << ", " << ( *i ).y << ") ";
        }
    }
    std::cout << "\n\n";
    return 0;
}
```

### CSHARP
```csharp
using System;
using System.Collections.Generic;

namespace A_star
{
    class A_star
    {
        // Coordinates of a cell - implements the method Equals
        public class Coordinates : IEquatable<Coordinates>
        {
            public int row;
            public int col;

            public Coordinates() { this.row = -1; this.col = -1; }
            public Coordinates(int row, int col) { this.row = row; this.col = col; }

            public Boolean Equals(Coordinates c)
            {
                if (this.row == c.row && this.col == c.col)
                    return true;
                else
                    return false;
            }
        }

        // Class Cell, with the cost to reach it, the values g and f, and the coordinates
        // of the cell that precedes it in a possible path
        public class Cell
        {
            public int cost;
            public int g;
            public int f;
            public Coordinates parent;
        }

        // Class Astar, which finds the shortest path
        public class Astar
        {
            // The array of the cells
            public Cell[,] cells = new Cell[8, 8];
            // The possible path found
            public List<Coordinates> path = new List<Coordinates>();
            // The list of the opened cells
            public List<Coordinates> opened = new List<Coordinates>();
            // The list of the closed cells
            public List<Coordinates> closed = new List<Coordinates>();
            // The start of the searched path
            public Coordinates startCell = new Coordinates(0, 0);
            // The end of the searched path
            public Coordinates finishCell = new Coordinates(7, 7);

            // The constructor
            public Astar()
            {
                // Initialization of the cells values
                for (int i = 0; i < 8; i++)
                    for (int j = 0; j < 8; j++)
                    {
                        cells[i, j] = new Cell();
                        cells[i, j].parent = new Coordinates();
                        if (IsAWall(i, j))
                            cells[i, j].cost = 100;
                        else
                            cells[i, j].cost = 1;
                    }

                // Adding the start cell on the list opened
                opened.Add(startCell);

                // Boolean value which indicates if a path is found
                Boolean pathFound = false;

                // Loop until the list opened is empty or a path is found
                do
                {
                    List<Coordinates> neighbors = new List<Coordinates>();
                    // The next cell analyzed
                    Coordinates currentCell = ShorterExpectedPath();
                    // The list of cells reachable from the actual one
                    neighbors = neighborsCells(currentCell);
                    foreach (Coordinates newCell in neighbors)
                    {
                        // If the cell considered is the final one
                        if (newCell.row == finishCell.row && newCell.col == finishCell.col)
                        {
                            cells[newCell.row, newCell.col].g = cells[currentCell.row,
                                currentCell.col].g + cells[newCell.row, newCell.col].cost;
                            cells[newCell.row, newCell.col].parent.row = currentCell.row;
                            cells[newCell.row, newCell.col].parent.col = currentCell.col;
                            pathFound = true;
                            break;
                        }

                        // If the cell considered is not between the open and closed ones
                        else if (!opened.Contains(newCell) && !closed.Contains(newCell))
                        {
                            cells[newCell.row, newCell.col].g = cells[currentCell.row,
                                currentCell.col].g + cells[newCell.row, newCell.col].cost;
                            cells[newCell.row, newCell.col].f =
                                cells[newCell.row, newCell.col].g + Heuristic(newCell);
                            cells[newCell.row, newCell.col].parent.row = currentCell.row;
                            cells[newCell.row, newCell.col].parent.col = currentCell.col;
                            SetCell(newCell, opened);
                        }

                        // If the cost to reach the considered cell from the actual one is
                        // smaller than the previous one
                        else if (cells[newCell.row, newCell.col].g > cells[currentCell.row,
                            currentCell.col].g + cells[newCell.row, newCell.col].cost)
                        {
                            cells[newCell.row, newCell.col].g = cells[currentCell.row,
                                currentCell.col].g + cells[newCell.row, newCell.col].cost;
                            cells[newCell.row, newCell.col].f =
                                cells[newCell.row, newCell.col].g + Heuristic(newCell);
                            cells[newCell.row, newCell.col].parent.row = currentCell.row;
                            cells[newCell.row, newCell.col].parent.col = currentCell.col;
                            SetCell(newCell, opened);
                            ResetCell(newCell, closed);
                        }
                    }
                    SetCell(currentCell, closed);
                    ResetCell(currentCell, opened);
                } while (opened.Count > 0 && pathFound == false);

                if (pathFound)
                {
                    path.Add(finishCell);
                    Coordinates currentCell = new Coordinates(finishCell.row, finishCell.col);
                    // It reconstructs the path starting from the end
                    while (cells[currentCell.row, currentCell.col].parent.row >= 0)
                    {
                        path.Add(cells[currentCell.row, currentCell.col].parent);
                        int tmp_row = cells[currentCell.row, currentCell.col].parent.row;
                        currentCell.col = cells[currentCell.row, currentCell.col].parent.col;
                        currentCell.row = tmp_row;
                    }

                    // Printing on the screen the 'chessboard' and the path found
                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            // Symbol for a cell that doesn't belong to the path and isn't
                            // a wall
                            char gr = '.';
                            // Symbol for a cell that belongs to the path
                            if (path.Contains(new Coordinates(i, j))) { gr = 'X'; }
                            // Symbol for a cell that is a wall
                            else if (cells[i, j].cost > 1) { gr = '\u2588'; }
                            System.Console.Write(gr);
                        }
                        System.Console.WriteLine();
                    }

                    // Printing the coordinates of the cells of the path
                    System.Console.Write("\nPath: ");
                    for (int i = path.Count - 1; i >= 0; i--)
                    {
                        System.Console.Write("({0},{1})", path[i].row, path[i].col);
                    }

                    // Printing the cost of the path
                    System.Console.WriteLine("\nPath cost: {0}", path.Count - 1);

                    // Waiting to the key Enter to be pressed to end the program
                    String wt = System.Console.ReadLine();
                }
            }

            // It select the cell between those in the list opened that have the smaller
            // value of f
            public Coordinates ShorterExpectedPath()
            {
                int sep = 0;
                if (opened.Count > 1)
                {
                    for (int i = 1; i < opened.Count; i++)
                    {
                        if (cells[opened[i].row, opened[i].col].f < cells[opened[sep].row,
                            opened[sep].col].f)
                        {
                            sep = i;
                        }
                    }
                }
                return opened[sep];
            }

            // It finds che cells that could be reached from c
            public List<Coordinates> neighborsCells(Coordinates c)
            {
                List<Coordinates> lc = new List<Coordinates>();
                for (int i = -1; i <= 1; i++)
                    for (int j = -1; j <= 1; j++)
                        if (c.row+i >= 0 && c.row+i < 8 && c.col+j >= 0 && c.col+j < 8 &&
                            (i != 0 || j != 0))
                        {
                            lc.Add(new Coordinates(c.row + i, c.col + j));
                        }
                return lc;
            }

            // It determines if the cell with coordinates (row, col) is a wall
            public bool IsAWall(int row, int col)
            {
                int[,] walls = new int[,] { { 2, 4 }, { 2, 5 }, { 2, 6 }, { 3, 6 }, { 4, 6 },
                    { 5, 6 }, { 5, 5 }, { 5, 4 }, { 5, 3 }, { 5, 2 }, { 4, 2 }, { 3, 2 } };
                bool found = false;
                for (int i = 0; i < walls.GetLength(0); i++)
                    if (walls[i,0] == row && walls[i,1] == col)
                        found = true;
                return found;
            }

            // The function Heuristic, which determines the shortest path that a 'king' can do
            // This is the maximum value between the orizzontal distance and the vertical one
            public int Heuristic(Coordinates cell)
            {
                int dRow = Math.Abs(finishCell.row - cell.row);
                int dCol = Math.Abs(finishCell.col - cell.col);
                return Math.Max(dRow, dCol);
            }

            // It inserts the coordinates of cell in a list, if it's not already present
            public void SetCell(Coordinates cell, List<Coordinates> coordinatesList)
            {
                if (coordinatesList.Contains(cell) == false)
                {
                    coordinatesList.Add(cell);
                }
            }

            // It removes the coordinates of cell from a list, if it's already present
            public void ResetCell(Coordinates cell, List<Coordinates> coordinatesList)
            {
                if (coordinatesList.Contains(cell))
                {
                    coordinatesList.Remove(cell);
                }
            }
        }

        // The main method
        static void Main(string[] args)
        {
            Astar astar = new Astar();
        }
    }
}
```

### C
```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <float.h>
/* and not not_eq */
#include <iso646.h>
/* add -lm to command line to compile with this header */
#include <math.h>

#define map_size_rows 10
#define map_size_cols 10

char map[map_size_rows][map_size_cols] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 1, 1, 0, 1},
    {1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
    {1, 0, 0, 1, 1, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

/* description of graph node */
struct stop {
    double col, row;
    /* array of indexes of routes from this stop to neighbours in array of all routes */
    int * n;
    int n_len;
    double f, g, h;
    int from;
};

int ind[map_size_rows][map_size_cols] = {
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
    {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
};

/* description of route between two nodes */
struct route {
    /* route has only one direction! */
    int x; /* index of stop in array of all stops of src of this route */
    int y; /* intex of stop in array of all stops od dst of this route */
    double d;
};

int main() {
    int i, j, k, l, b, found;
    int p_len = 0;
    int * path = NULL;
    int c_len = 0;
    int * closed = NULL;
    int o_len = 1;
    int * open = (int*)calloc(o_len, sizeof(int));
    double min, tempg;
    int s;
    int e;
    int current;
    int s_len = 0;
    struct stop * stops = NULL;
    int r_len = 0;
    struct route * routes = NULL;

    for (i = 1; i < map_size_rows - 1; i++) {
        for (j = 1; j < map_size_cols - 1; j++) {
            if (!map[i][j]) {
                ++s_len;
                stops = (struct stop *)realloc(stops, s_len * sizeof(struct stop));
                int t = s_len - 1;
                stops[t].col = j;
                stops[t].row = i;
                stops[t].from = -1;
                stops[t].g = DBL_MAX;
                stops[t].n_len = 0;
                stops[t].n = NULL;
                ind[i][j] = t;
            }
        }
    }

    /* index of start stop */
    s = 0;
    /* index of finish stop */
    e = s_len - 1;

    for (i = 0; i < s_len; i++) {
        stops[i].h = sqrt(pow(stops[e].row - stops[i].row, 2) + pow(stops[e].col - stops[i].col, 2));
    }

    for (i = 1; i < map_size_rows - 1; i++) {
        for (j = 1; j < map_size_cols - 1; j++) {
            if (ind[i][j] >= 0) {
                for (k = i - 1; k <= i + 1; k++) {
                    for (l = j - 1; l <= j + 1; l++) {
                        if ((k == i) and (l == j)) {
                            continue;
                        }
                        if (ind[k][l] >= 0) {
                            ++r_len;
                            routes = (struct route *)realloc(routes, r_len * sizeof(struct route));
                            int t = r_len - 1;
                            routes[t].x = ind[i][j];
                            routes[t].y = ind[k][l];
                            routes[t].d = sqrt(pow(stops[routes[t].y].row - stops[routes[t].x].row, 2) + pow(stops[routes[t].y].col - stops[routes[t].x].col, 2));
                            ++stops[routes[t].x].n_len;
                            stops[routes[t].x].n = (int*)realloc(stops[routes[t].x].n, stops[routes[t].x].n_len * sizeof(int));
                            stops[routes[t].x].n[stops[routes[t].x].n_len - 1] = t;
                        }
                    }
                }
            }
        }
    }

    open[0] = s;
    stops[s].g = 0;
    stops[s].f = stops[s].g + stops[s].h;
    found = 0;

    while (o_len and not found) {
        min = DBL_MAX;

        for (i = 0; i < o_len; i++) {
            if (stops[open[i]].f < min) {
                current = open[i];
                min = stops[open[i]].f;
            }
        }

        if (current == e) {
            found = 1;

            ++p_len;
            path = (int*)realloc(path, p_len * sizeof(int));
            path[p_len - 1] = current;
            while (stops[current].from >= 0) {
                current = stops[current].from;
                ++p_len;
                path = (int*)realloc(path, p_len * sizeof(int));
                path[p_len - 1] = current;
            }
        }

        for (i = 0; i < o_len; i++) {
            if (open[i] == current) {
                if (i not_eq (o_len - 1)) {
                    for (j = i; j < (o_len - 1); j++) {
                        open[j] = open[j + 1];
                    }
                }
                --o_len;
                open = (int*)realloc(open, o_len * sizeof(int));
                break;
            }
        }

        ++c_len;
        closed = (int*)realloc(closed, c_len * sizeof(int));
        closed[c_len - 1] = current;

        for (i = 0; i < stops[current].n_len; i++) {
            b = 0;

            for (j = 0; j < c_len; j++) {
                if (routes[stops[current].n[i]].y == closed[j]) {
                    b = 1;
                }
            }

            if (b) {
                continue;
            }

            tempg = stops[current].g + routes[stops[current].n[i]].d;

            b = 1;

            if (o_len > 0) {
                for (j = 0; j < o_len; j++) {
                    if (routes[stops[current].n[i]].y == open[j]) {
                        b = 0;
                    }
                }
            }

            if (b or (tempg < stops[routes[stops[current].n[i]].y].g)) {
                stops[routes[stops[current].n[i]].y].from = current;
                stops[routes[stops[current].n[i]].y].g = tempg;
                stops[routes[stops[current].n[i]].y].f = stops[routes[stops[current].n[i]].y].g + stops[routes[stops[current].n[i]].y].h;

                if (b) {
                    ++o_len;
                    open = (int*)realloc(open, o_len * sizeof(int));
                    open[o_len - 1] = routes[stops[current].n[i]].y;
                }
            }
        }
    }

    for (i = 0; i < map_size_rows; i++) {
        for (j = 0; j < map_size_cols; j++) {
            if (map[i][j]) {
                putchar(0xdb);
            } else {
                b = 0;
                for (k = 0; k < p_len; k++) {
                    if (ind[i][j] == path[k]) {
                        ++b;
                    }
                }
                if (b) {
                    putchar('x');
                } else {
                    putchar('.');
                }
            }
        }
        putchar('\n');
    }

    if (not found) {
        puts("IMPOSSIBLE");
    } else {
        printf("path cost is %d:\n", p_len);
        for (i = p_len - 1; i >= 0; i--) {
            printf("(%1.0f, %1.0f)\n", stops[path[i]].col, stops[path[i]].row);
        }
    }

    for (i = 0; i < s_len; ++i) {
        free(stops[i].n);
    }
    free(stops);
    free(routes);
    free(path);
    free(open);
    free(closed);

    return 0;
}
```

### Java
```java
package astar;

import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;


class AStar {
    private final List<Node> open;
    private final List<Node> closed;
    private final List<Node> path;
    private final int[][] maze;
    private Node now;
    private final int xstart;
    private final int ystart;
    private int xend, yend;
    private final boolean diag;

    // Node class for convienience
    static class Node implements Comparable {
        public Node parent;
        public int x, y;
        public double g;
        public double h;
        Node(Node parent, int xpos, int ypos, double g, double h) {
            this.parent = parent;
            this.x = xpos;
            this.y = ypos;
            this.g = g;
            this.h = h;
       }
       // Compare by f value (g + h)
       @Override
       public int compareTo(Object o) {
           Node that = (Node) o;
           return (int)((this.g + this.h) - (that.g + that.h));
       }
   }

    AStar(int[][] maze, int xstart, int ystart, boolean diag) {
        this.open = new ArrayList<>();
        this.closed = new ArrayList<>();
        this.path = new ArrayList<>();
        this.maze = maze;
        this.now = new Node(null, xstart, ystart, 0, 0);
        this.xstart = xstart;
        this.ystart = ystart;
        this.diag = diag;
    }
    /*
    ** Finds path to xend/yend or returns null
    **
    ** @param (int) xend coordinates of the target position
    ** @param (int) yend
    ** @return (List<Node> | null) the path
    */
    public List<Node> findPathTo(int xend, int yend) {
        this.xend = xend;
        this.yend = yend;
        this.closed.add(this.now);
        addNeigborsToOpenList();
        while (this.now.x != this.xend || this.now.y != this.yend) {
            if (this.open.isEmpty()) { // Nothing to examine
                return null;
            }
            this.now = this.open.get(0); // get first node (lowest f score)
            this.open.remove(0); // remove it
            this.closed.add(this.now); // and add to the closed
            addNeigborsToOpenList();
        }
        this.path.add(0, this.now);
        while (this.now.x != this.xstart || this.now.y != this.ystart) {
            this.now = this.now.parent;
            this.path.add(0, this.now);
        }
        return this.path;
    }
    /*
    **This function is the step of expanding nodes
    **
    **
    */ 
    public void expandAStar(int[][] maze, int xstart, int ystart, boolean diag){
        Queue<Mazecoord> exploreNodes = new LinkedList<Mazecoord>();
        if(maze[stateNode.getR()][stateNode.getC()] == 2){
            if(isNodeILegal(stateNode, stateNode.expandDirection())){     
                exploreNodes.add(stateNode.expandDirection());
         }
     }
    /*
    ** Calculate distance for goal three methods shown.
    ** 
    ** 
    */
    public void AStarSearch(){
        this.start.setCostToGoal(this.start.calculateCost(this.goal));
        this.start.setPathCost(0);
        this.start.setAStartCost(this.start.getPathCost() + this.start.getCostToGoal());
        Mazecoord intialNode = this.start;
        Mazecoord stateNode = intialNode;
        frontier.add(intialNode);
        //explored<Queue> is empty
        while (true){
            if(frontier.isEmpty()){
                System.out.println("fail");
                System.out.println(explored.size());
                System.exit(-1);
            }
     }
    /*
    ** Second method.
    ** 
    ** 
    */
    /**
     * calculate the cost from current node to goal.
     * @param goal : goal
     * @return : cost from current node to goal. use Manhattan distance.
     */
    public int calculateCost(Mazecoord goal){
        int rState = this.getR();
        int rGoal = goal.getR();
        int diffR = rState - rGoal;
        int diffC = this.getC() - goal.getC();
        if(diffR * diffC > 0) {     // same sign
            return Math.abs(diffR) + Math.abs(diffC);
        } else {
            return Math.max(Math.abs(diffR), Math.abs(diffC));
        }
    }

    public Coord getFather(){
        return this.father;
    }

    public void setFather(Mazecoord node){
        this.father = node;
    }

   public int getAStartCost() {
        return AStartCost;
    }

    public void setAStartCost(int aStartCost) {
        AStartCost = aStartCost;
    }

    public int getCostToGoal() {
        return costToGoal;
    }

    public void setCostToGoal(int costToGoal) {
        this.costToGoal = costToGoal;
    }
    /*
    ** Third method.
    ** 
    ** 
    */
    private double distance(int dx, int dy) {
        if (this.diag) { // if diagonal movement is alloweed
            return Math.hypot(this.now.x + dx - this.xend, this.now.y + dy - this.yend); // return hypothenuse
        } else {
            return Math.abs(this.now.x + dx - this.xend) + Math.abs(this.now.y + dy - this.yend); // else return "Manhattan distance"
        }
    }
    private void addNeigborsToOpenList() {
        Node node;
        for (int x = -1; x <= 1; x++) {
            for (int y = -1; y <= 1; y++) {
                if (!this.diag && x != 0 && y != 0) {
                    continue; // skip if diagonal movement is not allowed
                }
                node = new Node(this.now, this.now.x + x, this.now.y + y, this.now.g, this.distance(x, y));
                if ((x != 0 || y != 0) // not this.now
                    && this.now.x + x >= 0 && this.now.x + x < this.maze[0].length // check maze boundaries
                    && this.now.y + y >= 0 && this.now.y + y < this.maze.length
                    && this.maze[this.now.y + y][this.now.x + x] != -1 // check if square is walkable
                    && !findNeighborInList(this.open, node) && !findNeighborInList(this.closed, node)) { // if not already done
                        node.g = node.parent.g + 1.; // Horizontal/vertical cost = 1.0
                        node.g += maze[this.now.y + y][this.now.x + x]; // add movement cost for this square

                        // diagonal cost = sqrt(hor_cost² + vert_cost²)
                        // in this example the cost would be 12.2 instead of 11
                        /*
                        if (diag && x != 0 && y != 0) {
                            node.g += .4;	// Diagonal movement cost = 1.4
                        }
                        */
                        this.open.add(node);
                }
            }
        }
        Collections.sort(this.open);
    }

    public static void main(String[] args) {
        // -1 = blocked
        // 0+ = additional movement cost
        int[][] maze = {
            {  0,  0,  0,  0,  0,  0,  0,  0},
            {  0,  0,  0,  0,  0,  0,  0,  0},
            {  0,  0,  0,100,100,100,  0,  0},
            {  0,  0,  0,  0,  0,100,  0,  0},
            {  0,  0,100,  0,  0,100,  0,  0},
            {  0,  0,100,  0,  0,100,  0,  0},
            {  0,  0,100,100,100,100,  0,  0},
            {  0,  0,  0,  0,  0,  0,  0,  0},
        };
        AStar as = new AStar(maze, 0, 0, true);
        List<Node> path = as.findPathTo(7, 7);
        if (path != null) {
            path.forEach((n) -> {
                System.out.print("[" + n.x + ", " + n.y + "] ");
                maze[n.y][n.x] = -1;
            });
            System.out.printf("\nTotal cost: %.02f\n", path.get(path.size() - 1).g);

            for (int[] maze_row : maze) {
                for (int maze_entry : maze_row) {
                    switch (maze_entry) {
                        case 0:
                            System.out.print("_");
                            break;
                        case -1:
                            System.out.print("*");
                            break;
                        default:
                            System.out.print("#");
                    }
                }
                System.out.println();
            }
        }
    }
}
```

### Javascript
```javascript
var ctx, map, opn = [], clsd = [], start = {x:1, y:1, f:0, g:0},
goal = {x:8, y:8, f:0, g:0}, mw = 10, mh = 10, neighbours, path;

function findNeighbour( arr, n ) {
    var a;
    for( var i = 0; i < arr.length; i++ ) {
        a = arr[i];
        if( n.x === a.x && n.y === a.y ) return i;
    }
    return -1;
}
function addNeighbours( cur ) {
    var p;
    for( var i = 0; i < neighbours.length; i++ ) {
        var n = {x: cur.x + neighbours[i].x, y: cur.y + neighbours[i].y, g: 0, h: 0, prt: {x:cur.x, y:cur.y}};
        if( map[n.x][n.y] == 1 || findNeighbour( clsd, n ) > -1 ) continue;
        n.g = cur.g + neighbours[i].c; n.h = Math.abs( goal.x - n.x ) + Math.abs( goal.y - n.y );
        p = findNeighbour( opn, n );
        if( p > -1 && opn[p].g + opn[p].h <= n.g + n.h ) continue;
        opn.push( n );
    }
    opn.sort( function( a, b ) {
        return ( a.g + a.h ) - ( b.g + b.h ); } );
}
function createPath() {
    path = [];
    var a, b;
    a = clsd.pop();
    path.push( a );
    while( clsd.length ) {
        b = clsd.pop();
        if( b.x != a.prt.x || b.y != a.prt.y ) continue;
        a = b; path.push( a );
    }
 }
function solveMap() {
    drawMap();
    if( opn.length < 1 ) {
        document.body.appendChild( document.createElement( "p" ) ).innerHTML = "Impossible!";
        return;
    }
    var cur = opn.splice( 0, 1 )[0];
    clsd.push( cur );
    if( cur.x == goal.x && cur.y == goal.y ) {
        createPath(); drawMap();
        return;
    }
    addNeighbours( cur );
    requestAnimationFrame( solveMap );
}
function drawMap() {
    ctx.fillStyle = "#ee6"; ctx.fillRect( 0, 0, 200, 200 );
    for( var j = 0; j < mh; j++ ) {
        for( var i = 0; i < mw; i++ ) {
            switch( map[i][j] ) {
                case 0: continue;
                case 1: ctx.fillStyle = "#990"; break;
                case 2: ctx.fillStyle = "#090"; break;
                case 3: ctx.fillStyle = "#900"; break;
            }
            ctx.fillRect( i, j, 1, 1 );
        }
    }
    var a;
    if( path.length ) {
        var txt = "Path: " + ( path.length - 1 ) + "<br />[";
        for( var i = path.length - 1; i > -1; i-- ) {
            a = path[i];
            ctx.fillStyle = "#999";
            ctx.fillRect( a.x, a.y, 1, 1 );
            txt += "(" + a.x + ", " + a.y + ") ";
        }
        document.body.appendChild( document.createElement( "p" ) ).innerHTML = txt + "]";
        return;
    }
    for( var i = 0; i < opn.length; i++ ) {
        a = opn[i];
        ctx.fillStyle = "#909";
        ctx.fillRect( a.x, a.y, 1, 1 );
    }
    for( var i = 0; i < clsd.length; i++ ) {
        a = clsd[i];
        ctx.fillStyle = "#009";
        ctx.fillRect( a.x, a.y, 1, 1 );
    }
}
function createMap() {
    map = new Array( mw );
    for( var i = 0; i < mw; i++ ) {
        map[i] = new Array( mh );
        for( var j = 0; j < mh; j++ ) {
            if( !i || !j || i == mw - 1 || j == mh - 1 ) map[i][j] = 1;
            else map[i][j] = 0;
        }
    }
    map[5][3] = map[6][3] = map[7][3] = map[3][4] = map[7][4] = map[3][5] =
    map[7][5] = map[3][6] = map[4][6] = map[5][6] = map[6][6] = map[7][6] = 1;
    //map[start.x][start.y] = 2; map[goal.x][goal.y] = 3;
}
function init() {
    var canvas = document.createElement( "canvas" );
    canvas.width = canvas.height = 200;
    ctx = canvas.getContext( "2d" );
    ctx.scale( 20, 20 );
    document.body.appendChild( canvas );
    neighbours = [
        {x:1, y:0, c:1}, {x:-1, y:0, c:1}, {x:0, y:1, c:1}, {x:0, y:-1, c:1},
        {x:1, y:1, c:1.4}, {x:1, y:-1, c:1.4}, {x:-1, y:1, c:1.4}, {x:-1, y:-1, c:1.4}
    ];
    path = []; createMap(); opn.push( start ); solveMap();
}
```

### Python
```python
from __future__ import print_function
import matplotlib.pyplot as plt

class AStarGraph(object):
	#Define a class board like grid with two barriers

	def __init__(self):
		self.barriers = []
		self.barriers.append([(2,4),(2,5),(2,6),(3,6),(4,6),(5,6),(5,5),(5,4),(5,3),(5,2),(4,2),(3,2)])

	def heuristic(self, start, goal):
		#Use Chebyshev distance heuristic if we can move one square either
		#adjacent or diagonal
		D = 1
		D2 = 1
		dx = abs(start[0] - goal[0])
		dy = abs(start[1] - goal[1])
		return D * (dx + dy) + (D2 - 2 * D) * min(dx, dy)

	def get_vertex_neighbours(self, pos):
		n = []
		#Moves allow link a chess king
		for dx, dy in [(1,0),(-1,0),(0,1),(0,-1),(1,1),(-1,1),(1,-1),(-1,-1)]:
			x2 = pos[0] + dx
			y2 = pos[1] + dy
			if x2 < 0 or x2 > 7 or y2 < 0 or y2 > 7:
				continue
			n.append((x2, y2))
		return n

	def move_cost(self, a, b):
		for barrier in self.barriers:
			if b in barrier:
				return 100 #Extremely high cost to enter barrier squares
		return 1 #Normal movement cost

def AStarSearch(start, end, graph):

	G = {} #Actual movement cost to each position from the start position
	F = {} #Estimated movement cost of start to end going via this position

	#Initialize starting values
	G[start] = 0
	F[start] = graph.heuristic(start, end)

	closedVertices = set()
	openVertices = set([start])
	cameFrom = {}

	while len(openVertices) > 0:
		#Get the vertex in the open list with the lowest F score
		current = None
		currentFscore = None
		for pos in openVertices:
			if current is None or F[pos] < currentFscore:
				currentFscore = F[pos]
				current = pos

		#Check if we have reached the goal
		if current == end:
			#Retrace our route backward
			path = [current]
			while current in cameFrom:
				current = cameFrom[current]
				path.append(current)
			path.reverse()
			return path, F[end] #Done!

		#Mark the current vertex as closed
		openVertices.remove(current)
		closedVertices.add(current)

		#Update scores for vertices near the current position
		for neighbour in graph.get_vertex_neighbours(current):
			if neighbour in closedVertices:
				continue #We have already processed this node exhaustively
			candidateG = G[current] + graph.move_cost(current, neighbour)

			if neighbour not in openVertices:
				openVertices.add(neighbour) #Discovered a new vertex
			elif candidateG >= G[neighbour]:
				continue #This G score is worse than previously found

			#Adopt this G score
			cameFrom[neighbour] = current
			G[neighbour] = candidateG
			H = graph.heuristic(neighbour, end)
			F[neighbour] = G[neighbour] + H

	raise RuntimeError("A* failed to find a solution")

if __name__=="__main__":
	graph = AStarGraph()
	result, cost = AStarSearch((0,0), (7,7), graph)
	print ("route", result)
	print ("cost", cost)
	plt.plot([v[0] for v in result], [v[1] for v in result])
	for barrier in graph.barriers:
		plt.plot([v[0] for v in barrier], [v[1] for v in barrier])
	plt.xlim(-1,8)
	plt.ylim(-1,8)
	plt.show()
```

### Go
```go
// Package astar implements the A* search algorithm with minimal constraints
// on the graph representation.
package astar

import "container/heap"

// Exported node type.
type Node interface {
    To() []Arc               // return list of arcs from this node to another
    Heuristic(from Node) int // heuristic cost from another node to this one
}

// An Arc, actually a "half arc", leads to another node with integer cost.
type Arc struct {
    To   Node
    Cost int
}

// rNode holds data for a "reached" node
type rNode struct {
    n    Node
    from Node
    l    int // route len
    g    int // route cost
    f    int // "g+h", route cost + heuristic estimate
    fx   int // heap.Fix index
}

type openHeap []*rNode // priority queue

// Route computes a route from start to end nodes using the A* algorithm.
//
// The algorithm is general A*, where the heuristic is not required to be
// monotonic.  If a route exists, the function will find a route regardless
// of the quality of the Heuristic.  For an admissiable heuristic, the route
// will be optimal.
func Route(start, end Node) (route []Node, cost int) {
    // start node initialized with heuristic
    cr := &rNode{n: start, l: 1, f: end.Heuristic(start)}
    // maintain a set of reached nodes.  start is reached initially
    r := map[Node]*rNode{start: cr}
    // oh is a heap of nodes "open" for exploration.  nodes go on the heap
    // when they get an initial or new "g" route distance, and therefore a
    // new "f" which serves as priority for exploration.
    oh := openHeap{cr}
    for len(oh) > 0 {
        bestRoute := heap.Pop(&oh).(*rNode)
        bestNode := bestRoute.n
        if bestNode == end {
            // done.  prepare return values
            cost = bestRoute.g
            route = make([]Node, bestRoute.l)
            for i := len(route) - 1; i >= 0; i-- {
                route[i] = bestRoute.n
                bestRoute = r[bestRoute.from]
            }
            return
        }
        l := bestRoute.l + 1
        for _, to := range bestNode.To() {
            // "g" route distance from start
            g := bestRoute.g + to.Cost
            if alt, ok := r[to.To]; !ok {
                // alt being reached for the first time
                alt = &rNode{n: to.To, from: bestNode, l: l,
                    g: g, f: g + end.Heuristic(to.To)}
                r[to.To] = alt
                heap.Push(&oh, alt)
            } else {
                if g >= alt.g {
                    continue // candidate route no better than existing route
                }
                // it's a better route
                // update data and make sure it's on the heap
                alt.from = bestNode
                alt.l = l
                alt.g = g
                alt.f = end.Heuristic(alt.n)
                if alt.fx < 0 {
                    heap.Push(&oh, alt)
                } else {
                    heap.Fix(&oh, alt.fx)
                }
            }
        }
    }
    return nil, 0
}

// implement container/heap
func (h openHeap) Len() int           { return len(h) }
func (h openHeap) Less(i, j int) bool { return h[i].f < h[j].f }
func (h openHeap) Swap(i, j int) {
    h[i], h[j] = h[j], h[i]
    h[i].fx = i
    h[j].fx = j
}

func (p *openHeap) Push(x interface{}) {
    h := *p
    fx := len(h)
    h = append(h, x.(*rNode))
    h[fx].fx = fx
    *p = h
}

func (p *openHeap) Pop() interface{} {
    h := *p
    last := len(h) - 1
    *p = h[:last]
    h[last].fx = -1
    return h[last]
}
```
```
package main

import (
    "fmt"

    "astar"
)

// rcNode implements the astar.Node interface
type rcNode struct{ r, c int }

var barrier = map[rcNode]bool{{2, 4}: true, {2, 5}: true,
    {2, 6}: true, {3, 6}: true, {4, 6}: true, {5, 6}: true, {5, 5}: true,
    {5, 4}: true, {5, 3}: true, {5, 2}: true, {4, 2}: true, {3, 2}: true}

// graph representation is virtual.  Arcs from a node are generated when
// requested, but there is no static graph representation.
func (fr rcNode) To() (a []astar.Arc) {
    for r := fr.r - 1; r <= fr.r+1; r++ {
        for c := fr.c - 1; c <= fr.c+1; c++ {
            if (r == fr.r && c == fr.c) || r < 0 || r > 7 || c < 0 || c > 7 {
                continue
            }
            n := rcNode{r, c}
            cost := 1
            if barrier[n] {
                cost = 100
            }
            a = append(a, astar.Arc{n, cost})
        }
    }
    return a
}

// The heuristic computed is max of row distance and column distance.
// This is effectively the cost if there were no barriers.
func (n rcNode) Heuristic(fr astar.Node) int {
    dr := n.r - fr.(rcNode).r
    if dr < 0 {
        dr = -dr
    }
    dc := n.c - fr.(rcNode).c
    if dc < 0 {
        dc = -dc
    }
    if dr > dc {
        return dr
    }
    return dc
}

func main() {
    route, cost := astar.Route(rcNode{0, 0}, rcNode{7, 7})
    fmt.Println("Route:", route)
    fmt.Println("Cost:", cost)
}
```