#include "sort.h"

void sortComplexNumbers(std::vector<Complex>& numbers) {
    int n = numbers.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (numbers[j].abs() > numbers[j + 1].abs()) {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}
