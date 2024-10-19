#include "complex.h"
#include "sort.h"
#include <vector>

int main() {
    std::vector<Complex> numbers = {
        Complex(2, 4),
        Complex(2, 3),
        Complex(0, 2),
        Complex(1, -3),
        Complex(-3, -1)
    };

    std::cout << "Before sorting:\n";
    for (const auto& num : numbers) {
        num.print();
        std::cout << " | Absolute value: " << num.abs() << "\n";
    }

    sortComplexNumbers(numbers);

    std::cout << "\nAfter sorting:\n";
    for (const auto& num : numbers) {
        num.print();
        std::cout << " | Absolute value: " << num.abs() << "\n";
    }

    return 0;
}
