#include <iostream>

void Print(int count, char ch) {
    for (int i = 0; i < count; i++) {
        std::cout << ch;
    }
    std::cout << std::endl;
}

int main() {
    Print(5, '#');

    void (*pfn) (int, char) = &Print;
    (*pfn)(8, '#');
    pfn(5, '#');

    return 0;
}
