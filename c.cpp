#include <cassert>

int add(int a, int b) {
    return a + b;
}

int main() {
    // Property: Ensure that adding two positive integers always yields a positive result
    int result = add(5, 7);
    assert(result > 0);

    return 0;
}
