/*
            P1. 病毒散播
给定数字 n,m 为 二维数组大小
给定坐标 x,y . 病毒在二维空间的此坐标开始.
病毒每一秒只会对自己的上下左右传播
需要计算在几秒钟内会传播到整个空间?
*/

#include <iostream>
#include <queue>

using namespace std;


int a[100][100];
queue<pair<int, int> > q;
int n, m;

int mx = 0;

void step(int row, int column, int value){
    if(row < n && column < m && a[row][column] == -1){
        a[row][column] = value;
        mx = max(mx, value);
        q.push(make_pair(row, column));
    }
}

int main() {


    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            a[i][j] = -1;
        }
    }

    int x, y;
    cin >> x >> y;
    x--;
    y--;


    q.push(make_pair(x, y));
    a[x][y] = 0;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        step(x + 1, y, a[x][y] + 1);
        step(x - 1, y, a[x][y] + 1);
        step(x, y + 1, a[x][y] + 1);
        step(x, y - 1, a[x][y] + 1);
        q.pop();
    }

    for(int i = 0 ; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << mx << endl;


    return 0;
}