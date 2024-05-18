#include <stdio.h>
#include <stdlib.h>

int main()
{
    // integer variable
    int a;
    scanf("%d", &a);
    printf("%d\n", a);

    // float variable
    float b;
    scanf("%f", &b);
    printf("%f\n", b);

    // double variable
    double d;
    scanf("%lf", &d);
    printf("%lf\n", d);

    // character variable
    char ch;
    scanf(" %c", &ch); // Added a space before %c to consume the newline character
    printf("%c\n", ch);

    // short variable
    short s;
    scanf("%hd", &s);
    printf("%hd\n", s);

    // long variable
    long l;
    scanf("%ld", &l);
    printf("%ld\n", l);

    // long long variable
    long long ll;
    scanf("%lld", &ll);
    printf("%lld\n", ll);

    // unsigned variable
    unsigned u = 10;
    scanf("%u", &u);
    printf("%u\n", u);

    // string variable
    char str[10];
    scanf("%9s", str); // Changed to limit input to 9 characters (leave space for null terminator)
    printf("%s\n", str);
    return 0;
}
