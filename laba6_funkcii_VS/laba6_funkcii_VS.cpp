/******************
*Функции          *
*Вариант 1        *
*Витвинова Альвина*
******************/
#include <iostream>
#include <cmath>
using namespace std;

double sumAbs(const double values[], int count) {
    double result = 0.0;
    for (int i = 0; i < count; ++i) {
        result += fabs(values[i]);
    }
    return result;
}

int main() {
    int k, n, m;
    cin >> k >> n >> m;

    if (k < 1 || k > 100 || n < 1 || n > 100 || m < 1 || m > 100) {
        cout << "INVALID\n";
        return 0;
    }

    double X[100], Y[100], Z[100];

    for (int i = 0; i < k; ++i) cin >> X[i];
    for (int i = 0; i < n; ++i) cin >> Y[i];
    for (int i = 0; i < m; ++i) cin >> Z[i];

    for (int i = 0; i < k; ++i) {
        if (fabs(X[i]) > 1000) { cout << "INVALID\n"; return 0; }
    }
    for (int i = 0; i < n; ++i) {
        if (fabs(Y[i]) > 1000) { cout << "INVALID\n"; return 0; }
    }
    for (int i = 0; i < m; ++i) {
        if (fabs(Z[i]) > 1000) { cout << "INVALID\n"; return 0; }
    }

    cout << sumAbs(X, k) << "\n";
    cout << sumAbs(Y, n) << "\n";
    cout << sumAbs(Z, m) << "\n";

    return 0;
}