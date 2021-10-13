//bfs

#include <bits/stdc++.h>
using namespace std;

bool visited[9];
vector<int>graph[9];

void dfs (int x){
    visited[x] = true;

    cout << x << ' ';

    // 인접한 노드가 방문한 적이 없다면 DFS수행
    for(int i=0; i<graph[x].size(); i++) {
        int y = graph[x][i];
        if(! visited[y]) dfs(y);
    }
}

int main(void)
{
    dfs(1);
}