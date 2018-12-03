#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;

int sum_of(int a, int b){
    // a, a + 1, ..., b
    int n = b - a + 1;
    return n * (n + 1) / 2 + n * (a - 1);
}

int main(){
    int R, G, B;
    while(cin >> R >> G >> B){
        const vector<int> cnt = {R, G, B};
        const int MINUS = 1200;
        const int MAX = 2500;
        const vector<int> center = {-100 + MINUS, 0 + MINUS, 100 + MINUS};
        int mini_cost = INT_MAX;
        for(int a = R; a < MAX; a++){
            for(int b = a + G; b + B < MAX; b++){
                // [0, a - 1] [a, b - 1], [b, MAX - 1]
                int cost = 0;
                vector<int> begin = {0, a, b};
                vector<int> end = {a - 1, b - 1, MAX - 1};
                for(int i = 0; i < 3; i++) if(cnt[i] > 0) {
                    if(begin[i] <= center[i] && center[i] <= end[i]){
                        int dist = min(end[i] - center[i], center[i] - begin[i]);
                        if(dist * 2 + 1 >= cnt[i]){
                            int count = cnt[i];
                            count--;
                            cost += 2 * sum_of(1, count / 2);
                            if(count % 2 == 1){
                                cost += (count + 1) / 2;
                            }
                        }else{
                            cost += 2 * sum_of(1, dist);
                            int rest = cnt[i] - (dist * 2 + 1);
                            cost += sum_of(dist + 1, dist + rest);
                        }
                    }else if(center[i] < begin[i]){
                        int first = begin[i] - center[i];
                        cost += sum_of(first, first + cnt[i] - 1);
                    }else if(end[i] < center[i]){
                        int first = center[i] - end[i];
                        cost += sum_of(first, first + cnt[i] - 1);
                    }
                }
                mini_cost = min(mini_cost, cost);
            }
        }
        cout << mini_cost << endl;
    }
    return 0;
}
