#include <iostream>

int main() {
    char chessBoard[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    std::cout << "   a b c d e f g h" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << 8 - i << " ";
        for (int j = 0; j < 8; j++)
        {
            std::cout << chessBoard[i][j] << " ";
        }
        std::cout << 8 - i << std::endl;
    }
    std::cout << "   a b c d e f g h" << std::endl;

    return 0;
}
