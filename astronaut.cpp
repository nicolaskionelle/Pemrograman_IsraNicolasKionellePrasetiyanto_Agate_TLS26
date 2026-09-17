#include <iostream>
using namespace std;

const int MAXN = 1000;   // maximum number of astronauts supported

int main() {
    int N, K;

    cout << "Enter number of astronauts (N): ";
    cin >> N;
    cout << "Enter initial value of K: ";
    cin >> K;

    if (N < 1 || N > MAXN) {
        cout << "N must be between 1 and " << MAXN << ".\n";
        return 0;
    }
    if (K < 2) K = 2;            // rule 3 also applies to the starting value

    // Circular singly linked list stored in a plain array.
    // nxt[i] = number of the astronaut sitting right after astronaut i.
    static int nxt[MAXN + 1];
    for (int i = 1; i <= N; i++) nxt[i] = (i == N) ? 1 : i + 1;

    int remaining = N;
    int prev = N;    // astronaut just BEFORE the one where counting starts
                     // counting starts at astronaut 1, so prev = N

    cout << "\nElimination order:\n";

    while (remaining > 1) {
        // walk K-1 steps so that nxt[prev] becomes the K-th counted astronaut
        int steps = (K - 1) % remaining;
        for (int s = 0; s < steps; s++) prev = nxt[prev];

        int victim = nxt[prev];

        // remove victim from the circle
        nxt[prev] = nxt[victim];
        remaining--;

        cout << "  Astronaut " << victim << " eliminated (K was " << K << ")\n";

        // update K according to the special rule
        if (victim % 2 == 0) K = K + 2;   // even number -> K increases by 2
        else                 K = K - 1;   // odd number  -> K decreases by 1
        if (K < 2) K = 2;                 // K can never drop below 2

        // the next count begins with the astronaut right after the eliminated
        // one, which is nxt[prev], so prev stays where it is
    }

    cout << "\nLast astronaut remaining: " << nxt[prev] << "\n";
    return 0;
}