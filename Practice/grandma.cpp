#include <iostream>
#include <vector>

using namespace std;

bool isPossible(const vector<string>& board) {
    int damagedBlocks = 0;
    
    for (const string& row : board) {
        for (char block : row) {
            if (block == 'X') {
                damagedBlocks++;
            }
        }
    }
    
    // Check if the number of damaged blocks is even
    return damagedBlocks % 2 == 0;
}

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        vector<string> board(3);
        
        for (int i = 0; i < 3; i++) {
            cin >> board[i];
        }
        
        bool jhinukWins = isPossible(board);
        cout << "Case " << t << ": " << (jhinukWins ? "Jhinuk" : "Grandma") << endl;
    }
    
    return 0;
}
