#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(NULL));

    while (true) {
        cout << "Rock, paper or scissors? ";
        string ch;
        getline(cin, ch);

        for (char &c : ch) c = tolower(c);
        int ans = rand() % 3;

        string enemy;
        if (!ans) enemy = "rock";
        else if (ans) enemy = "paper";
        else enemy = "scissors";
        

        if (ch=="rock") {
            if (enemy=="rock") cout << "Tie!\n";
            else if (enemy=="paper") cout << "You lost!\n";
            else cout << "You win!\n";
        } else if (ch=="paper") {
            if (enemy=="rock") cout << "You win!\n";
            else if (enemy=="paper") cout << "Tie!\n";
            else cout << "You lost!\n";
        } else if (ch=="scissors") {
            if (enemy=="rock") cout << "You lost!\n";
            else if (enemy == "paper") cout << "You win!\n";
            else cout << "Tie!\n";
        } else cout << "Wrong choice!\n";

        cout << "Do you want to play again? (yes/no): ";
        string pa;
        getline(cin, pa);
        if (pa != "yes") break;
    }

    return 0;
}
