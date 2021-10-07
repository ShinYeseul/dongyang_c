//왕실의 나이트
#include <bits/stdc++.h>
using namespace std;

string inputd;

int dx[] = {-2, -1, 1, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main(void){
    cin >> inputd;
    int row = inputd[1] - '0';
    int column = inputd[0] - 'a'+1;

    int result = 0;
    for(int i = 0; i<8; i++){
        int nextRow = row + dx[i];
        int nextColumn = column +dy[i];

        if(nextRow >=1 && nextRow <=8 && nextColumn >=1 && nextColumn <=8){
            result +=1;
        }
    }
    cout << result << '\n';
    return 0;
}