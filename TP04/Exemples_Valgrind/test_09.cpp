#include <iostream>
#include <cstdlib>
#include <memory>

using namespace std;

int main(int argc, char** argv) {

    auto up1 = make_unique<int> (12);
    auto up2 = make_unique<int> (25);

    up1 = move(up2);

    delete(&up2);

    return EXIT_SUCCESS;
}