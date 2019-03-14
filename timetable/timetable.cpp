//
// Created by Ivan Hahanov on 2/17/19.
//

#include <iostream>
#include <cstdlib>
#include <stdio.h>

void timetable() {

    int n, m, k;
    int mins[100][100];
    int dp[100][100];
    char schedule[100][100];
    int locs[100][100];
    int sizes[100];
    int dp_sizes[100];

    memset(mins, 0, sizeof(mins));
    memset(dp, 0, sizeof(dp));
    memset(locs, 0, sizeof(locs));
    memset(sizes, 0, sizeof(sizes));
    memset(dp_sizes, 0, sizeof(dp_sizes));

    std::cout << "Enter n, m, k: ";
    std::cin >> n >> m >> k;

    for (auto i = 0; i < n; i ++ ) {
        std::cin>>schedule[i];
    }

    for (int i=0;i<n;i++) {
        int z = 0;
        for (int j=0;j<m;j++) {
            if (schedule[i][j] == '1') {
                locs[i][z] = j;
                z++;
            }
        }
        sizes[i] = z;
    }

    for (int i=0;i<n;i++) {
        for (int z=0;z<=k;z++) {
            int min = 10000;
            for (int j = 0; j <= z; j++) {
                if (z >= sizes[i])
                    min = 0;
                else if (min > locs[i][sizes[i] - 1 + j - z] - locs[i][j] + 1)
                    min = locs[i][sizes[i] - 1 + j - z] - locs[i][j] + 1;
            }
            mins[i][z] = min;
        }
    }

    for (int i=0;i<k;i++) {
        dp[0][i] = mins[0][i];
    }
    dp_sizes[0] = sizes[0];

    for (int i=1;i<n;i++) {
        int dp_size = 0;
        for (int j=0;j<=k;j++) {
            int min_dp = 10000;
            int has_size = false;
            for (int z=0;z<=std::min(j, dp_sizes[i-1]);z++) {
                for (int t=0;t<=std::min(j, sizes[i]);t++) {
                    if (t+z == j) {
                        min_dp = std::min(min_dp, dp[i - 1][z] + mins[i][t]);
                        has_size = true;
                    }
                }
            }
            if (has_size) {
                dp[i][j] = min_dp;
                dp_size++;
                std::cout << dp[i][j] << " ";
            }
        }
        dp_sizes[i] = dp_size;
        std::cout<<std::endl;
    }

    std::cout<<dp[n-1][k];
}
