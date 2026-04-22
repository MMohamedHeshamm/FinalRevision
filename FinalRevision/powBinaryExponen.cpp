double power(double a, int b)
{
    long long B = b;   // علشان نتجنب overflow

    if (B < 0) {
        a = 1.0 / a;
        B = -B;
    }

    if (B == 0) return 1;

    double tmp = power(a, B / 2);
    double result = tmp * tmp;

    if (B % 2 == 1)
        result *= a;

    return result;
}