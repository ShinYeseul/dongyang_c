//음료수 얼려 먹기
#include <bits/stdc++.h>
using namespace std;

int n, m;
int g[1000][1000];

bool dfs(int x, int y){
    if (x <= 1 || x>=n || y<=-1 || y>=m){
        return false;
    }
    if (g[x][y] == 0){
        g[x][y] = 1;

        dfs(x-1,y);
        dfs(x,y-1);
        dfs(x+1,y);
        dfs(x,y+1);
        return true;
    }
    return false;
}

int main(void)
{
  scanf("%d %d",&n,&m);

  for(int i =0; i<n; i++){
      for(int j = 0; j<m; j++){
          scanf("%ld", &g[i][j]);
      }
  }

  int result = 0;
  for(int i = 0; i<n; i++){
      for(int j = 0; j<m; j++){
          if(dfs(i,j)){
              result += 1;
          }
      }
  }
  printf("%d",result);
}