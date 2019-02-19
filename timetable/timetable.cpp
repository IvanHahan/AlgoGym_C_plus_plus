//
// Created by Ivan Hahanov on 2/17/19.
//

#include <iostream>
#import <cstdio>
#include <vector>

std::pair<int, int> find_lognest_seq(std::vector<int>& array, int element, int skipping_elems);
long count_skipped(std::vector<int>& array, int element, std::pair<int, int> taken);
long count_skipped(std::vector<std::vector<int>>& schedule, std::vector<std::pair<int, int>> attendances);

void timetable() {

    int n, m, k;
    std::cout << "Enter n, m, k: ";
    std::cin >> n >> m >> k;

    std::vector<std::vector<int>> schedule {};
    for (auto i = 0; i < n; i ++ ) {
        std::cout << "Enter day " << i << ": ";
        std::vector<int> day{};
        for (auto j = 0; j < m; j++) {
            int has_lesson;
            std::cin >> has_lesson;
            day.push_back(has_lesson);
        }
        schedule.push_back(day);
    }

    int total_hours = 0;
    for (int skip = 0; ; skip++) {
        total_hours = 0;

        std::vector<std::pair<int, int>> seqs {};
        for (auto i = 0; i < n; i++) {
            std::pair<int, int> longest = find_lognest_seq(schedule[i], 1, skip);
            seqs.push_back(longest);
            long skipped = count_skipped(schedule, seqs);
            if (skipped < k) {
                longest.second -= k - skipped;
                skipped = k;
            }
            total_hours += longest.second - longest.first + 1;
            if (skipped == k)
                goto K;
        }
    }

    K: std::cout<<total_hours;

}

long count_skipped(std::vector<std::vector<int>>& schedule, std::vector<std::pair<int, int>> attendances) {
    long total_skipped = 0;
    for (int i = 0; i < schedule.size(); i++) {
        std::pair<int, int> attendance = i < attendances.size() ? attendances[i] : std::pair(0,-1);
        total_skipped += count_skipped(schedule[i], 1, attendance);
    }
    return total_skipped;
}

long count_skipped(std::vector<int>& array, int element, std::pair<int, int> taken) {
    std::vector<int> subvector {};
    subvector.insert(subvector.begin(), array.begin(), array.begin()+taken.first);
    subvector.insert(subvector.end(), array.begin()+taken.second + 1, array.end());
    return std::count(subvector.begin(), subvector.end(), element);
}

std::pair<int, int> find_lognest_seq(std::vector<int>& array, int element, int skipping_elems = 0) {
    int lognest = 0;
    std::pair<int, int> loc;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == element) {
            int j = i+1;
            int skipped_elements = 0;
            int last_element_index = i;
            while (skipped_elements <= skipping_elems) {
                if (array[j] != element)
                    skipped_elements++;
                else
                    last_element_index = j;
                j++;
            }

            int len = last_element_index - i + 1;
            if (len > lognest) {
                lognest = len;
                loc = std::pair(i, last_element_index);
            }
        }
    }
    return loc;
}



//#include<stdio.h>
//#include<string.h>
//#include<iostream>
//#include<algorithm>
//#define N 505
//#define inf 0x3f3f3f3f
//
//using namespace std;
//
//int dp[N];
//int pos[N][N];
//int cnt[N];
//int t[N][N];
//char s[N][N];
//
//int n,m,k;
//
//void init()
//{
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            if(s[i][j]=='1')
//            {
//                cnt[i]++;pos[i][cnt[i]]=j;
//            }
//        }
//    }
//
//    /*
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=cnt[i];j++) printf("%d ",pos[i][j]);
//        printf("\n");
//    }
//    */
//
//    memset(t,inf,sizeof(t));
//
//    for(int i=1;i<=n;i++)
//    {
//        int minn=min(k,cnt[i]);
//        for(int j=0;j<=minn;j++)//biaoshi qiao ji jie ke
//        {
//            for(int m=0;m<=j;m++)
//            {
//                if(j==cnt[i]) t[i][j]=0;
//                else t[i][j]=min(t[i][j],pos[i][cnt[i]-m]-pos[i][1+j-m]+1);
//            }
//        }
//    }
//
//    return ;
//}
//
//int main()
//{
//    cin>>n>>m>>k;
//    for(int i=1;i<=n;i++)
//    {
//        scanf("%s",s[i]);
//    }
//
//    init();
//
//    int sum=0;
//    for(int i=1;i<=n;i++) sum+=t[i][0];
//
//
//
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=0;j<=k;j++)
//        {
//            int minn=min(k,cnt[i]);
//            for(int m=0;m<=minn;m++)
//            {
//                if(j>=m)
//                    dp[j]=max(dp[j],dp[j-m]+(t[i][0]-t[i][m]));
//            }
//        }
//    }
//
//    printf("%d\n",sum-dp[k]);
//    return 0;
//}