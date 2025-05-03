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



int get_diagonal_sum1(int mat[][3],int col){
    // calculate primary diagonal sum
    int primary_diagonal_sum=0;
    for(int i=0; i<col;i++){
        primary_diagonal_sum+=mat[i][i];
        // cout<< mat[i][i]<<", ";
    }
    // cout<<endl<<"primary diagonal sum: "<< primary_diagonal_sum<<endl;

    // calculate secondary diagonal sum
    int secondary_diagonal_sum=0;
    for(int i=col-1; i>=0;i--){
        int j= (col-1)-i;
        secondary_diagonal_sum+=mat[i][j];
        // cout<< mat[i][j]<<", ";
    }
    // cout<<endl<<"secondary diagonal sum: "<< secondary_diagonal_sum<<endl;

    // calculate common(duplicated) value
    // if row=col= odd , then there have duplicated value, if even then not.
    int duplicated_row_col= col/2;
    int duplicated_value= mat[duplicated_row_col][duplicated_row_col];


    int actual_diagonal_sum= primary_diagonal_sum+secondary_diagonal_sum-duplicated_value;
    return actual_diagonal_sum;
}

int get_diagonal_sum2(int mat[][4], int col){
    // calculate primary diagonal sum
    int primary_diagonal_sum=0;
    for(int i=0; i<col;i++){
        primary_diagonal_sum+=mat[i][i];
        // cout<< mat[i][i]<<", ";
    }
    // cout<<endl<<"primary diagonal sum: "<< primary_diagonal_sum<<endl;
    
    // calculate secondary diagonal sum
    int secondary_diagonal_sum=0;
    for(int i=col-1; i>=0;i--){
        int j= (col-1)-i;
        secondary_diagonal_sum+=mat[i][j];
        // cout<< mat[i][j]<<", ";
    }
    // cout<<endl<<"secondary diagonal sum: "<< secondary_diagonal_sum<<endl;

    int actual_diagonal_sum= primary_diagonal_sum+secondary_diagonal_sum;
    return actual_diagonal_sum;

    return 0;
}


// better approach
int get_diagonal_sum_ptr(int* ptr, int col){
    // calculate primary diagonal sum
    int primary_diagonal_sum=0;
    for(int i=0; i<col;i++){
        primary_diagonal_sum+= *(ptr+ (i*col+i) );
        // cout<< *(ptr+ (i*col+i) )<<", ";
    }
    // cout<<endl<<"primary diagonal sum: "<< primary_diagonal_sum<<endl;


    // calculate secondary diagonal sum
    int secondary_diagonal_sum=0;
    for(int i=col-1; i>=0;i--){
        int j= (col-1)-i;
        secondary_diagonal_sum+= *(ptr+ (i*col+j));
        // cout<< *(ptr+ (i*col+j))<<", ";
    }
    // cout<<endl<<"secondary diagonal sum: "<< secondary_diagonal_sum<<endl;


    // calculate common(duplicated) value
    // if row=col= odd , then there have duplicated value, if even then not.
    int duplicated_value=0;
    if(col%2 ==1){
        int duplicated_row_col= col/2;
        duplicated_value= *(ptr+ (duplicated_row_col*col+duplicated_row_col));
    }

    int actual_diagonal_sum= primary_diagonal_sum+secondary_diagonal_sum-duplicated_value;
    return actual_diagonal_sum;
}

// optimized
int get_diagonal_sum(int* ptr, int col){
    
    int diagonal_sum=0;
    for(int i=0; i<col;i++){
        // adding primary diagonal sum
        int j= i; // for primary
        diagonal_sum += *(ptr+ (i*col+j) ); 

        // adding secondary diagonal sum
        j= (col-1)-i; // for secondary 
        if(i!=j){
            diagonal_sum+= *(ptr+ (i*col+j)); // if i==j means, it a duplicated value that is already added for primary diagonal sum
        } 
    }
    return diagonal_sum;
}

int main(){
    const int row_1=3, col_1=3;
    int matrix_1[row_1][col_1]= {{1,2,3}, {4,5,6}, {7,8,9}};
    int* ptr1 = &matrix_1[0][0];
    cout<< "diagonal_sum1 = "<< get_diagonal_sum(ptr1,col_1)<<endl;
    cout<< "diagonal_sum1 = "<< get_diagonal_sum_ptr(ptr1,col_1)<<endl;
    cout<< "diagonal_sum1 = "<< get_diagonal_sum1(matrix_1, col_1)<<endl;


    const int row_2=4, col_2=4;
    int matrix_2[row_2][col_2]= {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int* ptr2 = &matrix_2[0][0];
    cout<< "diagonal_sum2 = "<< get_diagonal_sum(ptr2,col_2)<<endl;
    cout<< "diagonal_sum2 = "<< get_diagonal_sum_ptr(ptr2,col_2)<<endl;
    cout<< "diagonal_sum2 = "<< get_diagonal_sum2(matrix_2,col_2)<<endl;


    return 0;
}