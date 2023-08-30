#include<bits/stdc++.h>
using namespace std;                                 
                                                     // for row = 1, col = 2

bool canPlace(int board[][20],int n,int x,int y){    // board, 4, 1, 2
    for(int k =0; k < x; k++){                       // k = 0, 1 < 1, 
        if(board[k][y]==1){                          // board[0][2]==1
            return false;                            // false;
        }                                            // loop se bahar aajayega for row = 1, col = 2
    }


    // left side diagonally
    int i = x;                                       // i = 1, j = 2
    int j = y;
    while(i>=0 and j>=0){                            // -1>=0 and 0>=0
        if(board[i][j] == 1){                        // board[0][1] == 1, for i = 1, j = 1 ye one nhi hai toh isko reduce kar denge
            return false;                            // yes it is 1 for i = 0, j = 0, toh return false, can't place queen there, for -1,0 loop ke bahar
        }
        i--; j--;                                    // i = -1, j = 0
    }

    // right side diagonally
    i = x;                                           // i = 1, j = 2
    j = y;
    while(i>=0 and j<n){                             // -1>=0 and 4<4
        if(board[i][j] == 1){                        // board[0][3] == 1
            return false;                            // false
        }
        i--; j++;                                    // i = -1, j = 4
    }
    return true;                                     // this true means that we can place queen here
}

void printBoard(int n, int board[][20]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int solveNqueen(int n, int board[][20], int row){
    // Base Case
    if(row==n){                                   // row = 1 != 4
        printBoard(n, board);
        return 1;
    }

    // Rec Case, try to place a queen in every row
    int ways = 0;
    for(int col = 0; col < n; col++){              // col = 0
        if(canPlace(board,n,row,col)){            // board, 4, 2, 0
            board[row][col] = 1;
            ways += solveNqueen(n, board, row+1);  // row = 2
            board[row][col] = 0;
        }
    }
    return ways;
}


int main(){

    int board[20][20] = {0};
    int n;
    cin>>n;

    cout<<solveNqueen(n, board, 0);
    

return 0;
}

// row = 2, col = 0


// {(1,0,0,0),
//  (0,0,0,0),
//  (0,0,0,0),
//  (0,0,0,0),};