#include <bits/stdc++.h>
using namespace std;
const int INF = 1e7;
int main(){
    int n;
    cin >> n;
    int dis[n + 1][n + 1];
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         dis[i][j] = INF;
    //         if (i == j)
    //             dis[i][j] = 0;
    //     }
    // }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin>>dis[i][j];
            if(dis[i][j] == -1) dis[i][j] = INF;
        }
    }
    for (int k = 1; k <= n; k++){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                if (dis[i][k] + dis[k][j] < dis[i][j]){
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }
    int maxshortdistance = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (dis[i][j] != INF and dis[i][j] > maxshortdistance){
                maxshortdistance = dis[i][j];
            }
        }
    }
    cout<<maxshortdistance<<endl;
    return 0;
}