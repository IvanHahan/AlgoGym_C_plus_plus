//
// Created by Ivan Hahanov on 3/10/19.
//

#include "field_path.h"
#include <iostream>
#include <random>


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