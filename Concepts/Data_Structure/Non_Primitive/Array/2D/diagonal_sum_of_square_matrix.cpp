#include <iostream>
using namespace std;

/*
square is a matrix which number of row and col are same

      |col-0|col-1|col-2|
row-0 |  1  |  2  |  3  |
row-1 |  4  |  5  |  6  |
row-2 |  7  |  8  |  9  |

for this matrix,
primary diagonal sum  (pd) = mat[0][0]+ mat[1][1]+ mat[2][2]= 1+5+9= 15
secondary diagonal sum (sd)= mat[0][2]+ mat[1][1]+ mat[2][0]= 3+5+7=15
common value (duplicated) = mat[1][1]= 5  // only if total number of row=column is odd number (n is odd, n is total cell in a matrix)
actual diagonal sum = pd+sd - common = 15+15-5 = 25 

------------------------------------------------------------------

      |col-0|col-1|col-2|col-3|
row-0 |  1  |  2  |  3  |  4  |
row-1 |  5  |  6  |  7  |  8  |
row-2 |  9  | 10  | 11  | 12  |
row-3 | 13  | 14  | 15  | 16  |

for this matrix,
primary diagonal sum  (pd) = mat[0][0]+ mat[1][1]+ mat[2][2]+ mat[3][3]= 1+6+11+16= 34
secondary diagonal sum (sd)= mat[1][3]+ mat[2][2]+ mat[3][1]+ mat[4][0]= 4+7+10+13=34
// no common (duplicated) value here
actual diagonal sum = pd+sd = 34+34= 68
*/




int main(){
    const int row=4, col=3;
    int matrix[row][col]= {{1,2,3}, {3,4,5}, {5,6,7}, {7,8,9}};

    int* ptr = &matrix[0][0];


    return 0;
}