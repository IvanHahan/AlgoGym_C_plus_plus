//
// Created by Ivan Hahanov on 2/19/19.
//

#include "salad.h"
#include <iostream>
#include "math.h"

void salad() {
    int n, k;
    std::cin >> n >> k;
    int T[100];
    int C[100];
    int indices[100];
    int ni = 0;

    memset(indices, 0, sizeof(indices));

    for (int i = 0; i < n; i++) std::cin>>T[i];
    for (int i = 0; i < n; i++) std::cin>>C[i];

    int max_cal = -1;
    while (ni < n) {
        double t = 0;
        double c = 0;
        double max_dif = -1000000;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (indices[i] != 1) {
                t += T[i];
                c += C[i];
            }
            if (t/c == k && max_cal < t && indices[i] != 1)
                max_cal = int(t);
            if (max_dif < (k - t / c) && indices[i] != 1) {
                max_dif = k - t / c;
                index = i;
            }

        }
        if (index != -1) {
            ni++;
            indices[index] = 1;
        }
    }

    std::cout<<max_cal<<std::endl;
}