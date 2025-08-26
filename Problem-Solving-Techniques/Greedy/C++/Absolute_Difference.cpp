#include <iostream>
#include <algorithm>
#include <cmath>  // for std::abs

int main() {
    int a[] = {4, 1, 8, 7};
    int b[] = {2, 3, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);

    std::sort(a, a + n);
    std::sort(b, b + n);

    int minDiff = 0;

    for (int i = 0; i < n; i++) {
        minDiff += std::abs(a[i] - b[i]);
    }

    std::cout << "min absolute value is : " << minDiff << std::endl;

    return 0;
}
