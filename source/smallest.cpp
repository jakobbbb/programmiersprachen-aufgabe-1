#include <iostream>
/**
 * Programmiersprachen Uebung 1, Aufgabe 1.3
 * Print smallest number that is divisible by all numbers in {1, ..., 20}.
 */

/** true iff n is divisable by all i in {1, ..., 20} */
bool is_divisable(int n) {
    for (int i = 1; i <= 20; i++) {
        if (n % i != 0) return false;
    }
    return true;
}

int get_smallest() {
    int i = 1;
    while (!is_divisable(i)) {
        // number must be a multiple of 20
        i += 20;
    }
    return i;
}

int main() {
    std::cout << get_smallest() << "\n";
    return 0;
}
