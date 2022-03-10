#include <iostream>

int return2x(int num) {
    return num * 2;
}

int fact(int num) {
    if (num < 2) return 1;
    return num *  fact(num -1);
}

int main() {
    int res = return2x(5);
    std::cout << res << std::endl;
    std::cout << fact(3) << std::endl;

}
