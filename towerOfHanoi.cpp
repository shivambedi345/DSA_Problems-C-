#include<iostream>
#include <vector>
using namespace std;
void solve(int n, int from, int to, int aux, vector<vector<int>>& moves) {
    if (n == 0) return;

    // Move n-1 disks from 'from' to 'aux'
    solve(n - 1, from, aux, to, moves);

    // Move the nth disk from 'from' to 'to'
    moves.push_back({from, to});

    // Move n-1 disks from 'aux' to 'to'
    solve(n - 1, aux, to, from, moves);
}

vector<vector<int>> towerOfHanoi(int n) {
    vector<vector<int>> moves;
    solve(n, 1, 3, 2, moves); // Move from rod 1 to rod 3 using rod 2 as auxiliary
    return moves;
}
