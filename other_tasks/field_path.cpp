//
// Created by Ivan Hahanov on 3/10/19.
//

#include "field_path.h"
#include <iostream>
#include <random>

// FIELD PATH

void field_path() {
    int n,m;
    std::cin>>n>>m;
    int field[100][100];
    int weights[100][100];

    memset(weights, 0, sizeof(weights));

    srand(1);
    for (int i=0; i<n;i++) {
        for (int j = 0; j < m; j++) {
            int val = abs(rand()) % 10;
            std::cout << val;
            field[i][j] = val;
        }
        std::cout<<std::endl;
    }

    weights[0][0] = field[0][0];

    for (int i=0; i<n;i++) {
        for (int j = 0; j < m; j++) {
            int min_weight = -1;
            if (i > 0) {
                min_weight = weights[i - 1][j];
            }
            if (j > 0)
                if (min_weight < 0 || min_weight > weights[i][j-1])
                    min_weight = weights[i][j-1];
            if (min_weight < 0) min_weight = 0;
            weights[i][j] = field[i][j] + min_weight;
        }
    }
    std::cout<<weights[n-1][m-1]<<std::endl;
}

// SMS COUNT

void sms_count() {
    int k;
    std::cin>>k;
    int keyboard[] = {0, 3, 3,
                      3, 3, 3,
                      4, 3, 4};
    int dp[100];

    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i=0; i<k; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) * 8 + dp[i - 4] * 2;
    }
}

// CHESS HORSE

int make_path(int board[100][100], int rows, int cols, int row, int col) {
    if ((row >= rows || row < 0) || (col >= cols || col < 0))
        return 0;
    else if (row == rows - 1 && col == cols - 1)
        return 1;
    int fst = make_path(board, rows, cols, row - 1, col + 2);
    int snd = make_path(board, rows, cols, row + 1, col + 2);
    int trd = make_path(board, rows, cols, row + 2, col - 1);
    int fth = make_path(board, rows, cols, row + 2, col + 1);

    fst = fst > 0 ? fst + 1 : 0;
    snd = snd > 0 ? snd + 1 : 0;
    trd = trd > 0 ? trd + 1 : 0;
    fth = fth > 0 ? fth + 1 : 0;

    return fst + snd + trd + fth;
}

void chess_horse() {

    int board[100][100];
    int n, m;
    std::cin>>n>>m;
    int total = 0;

    std::cout<<make_path(board, n, m, 0, 0);
}

// JAGGED SEQUENCE

void jagged_sequence() {

}