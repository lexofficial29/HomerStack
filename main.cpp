#include <iostream>
#include <stack>
#include <fstream>

int const N_MAX = 6;

void validateHomer(int index, int table[N_MAX][N_MAX], std::stack<int> interactedWith, std::stack<int> interactedByOthers) {
    for(int i = 0; i < N_MAX; i++) {
        if (table[i][index] == 1) {
            interactedByOthers.push(i);
        }
    }
    if(interactedByOthers.size() == N_MAX - 1) {
        std::cout << "Homer is the person with the id " << index << std::endl;
    }
    else {
        std::cout << "Homer didn't show up to the event!" << std::endl;
    }
}


int main () {

    int table[N_MAX][N_MAX];

    std::stack<int> interactedWith;
    std::stack<int> interactedByOthers;

    std::ifstream file("homer.txt");

    for (int i = 0; i < N_MAX; i++) {
        int tempInteractedWith = 0;
        for (int j = 0; j < N_MAX; j++) {
            file >> table[i][j];
            if (table[i][j] == 1) {
                tempInteractedWith++;
            }
        }
        interactedWith.push(tempInteractedWith);
    }


    // Homer didn't speak to anyone so he is the only one who didn't interact with anyone
    bool homerExists = false;

    int c = N_MAX;
    while (!interactedWith.empty()) {
        c--;
        if (interactedWith.top() == 0) {
            homerExists = true;
            break;
        }
        interactedWith.pop();
    }

    if (homerExists) {
        // Very likely homer but must check if everyone has interacted with him
        validateHomer(c, table, interactedWith, interactedByOthers);
    }
    else {
        std::cout << "Homer didn't show up to the event!" << std::endl;
    }
    
    return 0;

}
