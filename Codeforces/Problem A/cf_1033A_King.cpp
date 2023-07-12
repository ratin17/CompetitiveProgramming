//https://codeforces.com/problemset/problem/1033/A

#include<bits/stdc++.h>

using namespace std;

const int N = 1001;
bool visited[N][N];

int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

bool isValid(int x, int y, int n)
{
    if(x <= n && y >= 1 && y <= n && x >=1)
    {
        return true; 
    }

    return false;  
}

bool isChecked(int qx, int qy, int kx, int ky)
{
    if(qx == kx || qy == ky || (abs(qx - kx) == abs(qy - ky)))
    {
        return true;   // you wrote false
    }
    return false;  // you wrote true
}

bool canBobWin(int n, int qx, int qy, int kx, int ky, int tx, int ty)
{
    queue<pair<int,int>> q;
    visited[kx][ky] = 1;

    pair<int,int>src = {kx,ky};

    q.push(src);

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
//        cout<<x<<" "<<y<<"\n";
        q.pop();

        if(x == tx && y == ty)
        {
            return true;
        }

        for(int i=0; i<8; i++ )
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int, int>new_src = {new_x,new_y};
//            cout<<visited[new_x][new_y]<<"\n";

            if(isValid(new_x, new_y,n) && visited[new_x][new_y] != 1 && !isChecked(qx, qy, new_x, new_y))
            {
                visited[new_x][new_y] = 1;
                q.push(new_src);
            }


        }


    }

    return false;
}


int main()
{
    int n;
    cin>>n;

    int queen_pos_x, queen_pos_y;
    cin>> queen_pos_x >> queen_pos_y;

    int king_pos_x, king_pos_y;
    cin>> king_pos_x >> king_pos_y;

    int target_pos_x, target_pos_y;
    cin>>target_pos_x >> target_pos_y;

    if(canBobWin(n, queen_pos_x, queen_pos_y, king_pos_x, king_pos_y, target_pos_x, target_pos_y))
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    return 0;
}