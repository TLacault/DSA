#include "dsa/dsa.h"

using namespace std;

bool test_regular() {
    cout << "Running test_regular..." << endl;
    return true;
}

bool test_random() {
    cout << "Running test_random..." << endl;
    return true;
}

bool test_sorted() {
    cout << "Running test_sorted..." << endl;
    return true;
}

bool test_reversed() {
    cout << "Running test_reversed..." << endl;
    return true;
}

bool test_duplicates() {
    cout << "Running test_duplicates..." << endl;
    return true;
}

// Main Routine
int main(int ac, char **av) {
    if (ac < 2) {
        fprintf(stderr, "Usage: %s <testname> [args]\n", av[0]);
        exit(EXIT_FAILURE);
    }

    bool passed = false;

    if (strcmp(av[1], "regular") == 0)
        passed = test_regular();
    else if (strcmp(av[1], "random") == 0)
        passed = test_random();
    else if (strcmp(av[1], "sorted") == 0)
        passed = test_sorted();
    else if (strcmp(av[1], "reversed") == 0)
        passed = test_reversed();
    else if (strcmp(av[1], "duplicates") == 0)
        passed = test_duplicates();
    else {
        fprintf(stderr, "Error: test \"%s\" not found!\n", av[1]);
        exit(EXIT_FAILURE);
    }

    if (passed) {
        cout << "Test [" << av[1] << "] finished: PASSED" << endl;
        return EXIT_SUCCESS;
    } else {
        cout << "Test [" << av[1] << "] finished: FAILED" << endl;
        return EXIT_FAILURE;
    }
}
