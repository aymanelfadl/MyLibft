#include "libft.h"
#include <stdio.h>
#include <limits.h>

// ============ ft_atoi tests =================
void test_ft_atoi(const char *str, int expected)
{
    int result;

    result = ft_atoi(str);
    if (result == expected)
        printf("PASS: ft_atoi(\"%s\") = %d\n", str, result);
    else
        printf("FAIL: ft_atoi(\"%s\") = %d, expected %d\n", str, result,
               expected);
}

void run_ft_atoi_tests(void)
{
    // Test with positive number
    test_ft_atoi("123", 123);
    // Test with negative number
    test_ft_atoi("-123", -123);
    // Test with leading spaces
    test_ft_atoi("   123", 123);
    // Test with leading spaces and negative sign
    test_ft_atoi("   -123", -123);
    // Test with plus sign
    test_ft_atoi("+123", 123);
    // Test with leading zeros
    test_ft_atoi("000123", 123);
    // Test with non-numeric characters at the end
    test_ft_atoi("123abc", 123);
    // Test with only non-numeric characters
    test_ft_atoi("abc", 0);
    // Test with empty string
    test_ft_atoi("", 0);
    // Test with only spaces
    test_ft_atoi("   ", 0);
    // Test with INT_MAX
    test_ft_atoi("2147483647", 2147483647);
    // Test with INT_MIN
    test_ft_atoi("-2147483648", -2147483648);
}

// ============ ft_itoa tests =================
void test_ft_itoa(int n, const char *expected)
{
    char *result;

    result = ft_itoa(n);
    if (strcmp(result, expected) == 0)
        printf("PASS: ft_itoa(%d) = \"%s\"\n", n, result);
    else
        printf("FAIL: ft_itoa(%d) = \"%s\", expected \"%s\"\n", n, result, expected);
    free(result);
}

void run_ft_itoa_tests(void)
{
    // Test with positive number
    test_ft_itoa(123, "123");
    // Test with negative number
    test_ft_itoa(-123, "-123");
    // Test with zero
    test_ft_itoa(0, "0");
    // Test with INT_MAX
    test_ft_itoa(INT_MAX, "2147483647");
    // Test with INT_MIN
    test_ft_itoa(INT_MIN, "-2147483648");
}

// ============ ft_isalnum tests =================

void test_ft_isalnum(int c, int expected)
{
    int result;

    result = ft_isalnum(c);
    if (result == expected)
        printf("PASS: ft_isalnum('%c') = %d\n", c, result);
    else
        printf("FAIL: ft_isalnum('%c') = %d, expected %d\n", c, result, expected);
}

void run_ft_isalnum_tests(void)
{
    test_ft_isalnum('a', 1);
    test_ft_isalnum('1', 1);
    test_ft_isalnum('!', 0);
    test_ft_isalnum(' ', 0);
}

// ============ ft_isalpha tests =================

void test_ft_isalpha(int c, int expected)
{
    int result;

    result = ft_isalpha(c);
    if (result == expected)
        printf("PASS: ft_isalpha('%c') = %d\n", c, result);
    else
        printf("FAIL: ft_isalpha('%c') = %d, expected %d\n", c, result, expected);
}

void run_ft_isalpha_tests(void)
{
    test_ft_isalpha('a', 1);
    test_ft_isalpha('Z', 1);
    test_ft_isalpha('1', 0);
    test_ft_isalpha('!', 0);
}
// ============ ft_isascii tests =================

void test_ft_isascii(int c, int expected)
{
    int result;

    result = ft_isascii(c);
    if (result == expected)
        printf("PASS: ft_isascii('%c') = %d\n", c, result);
    else
        printf("FAIL: ft_isascii('%c') = %d, expected %d\n", c, result, expected);
}

void run_ft_isascii_tests(void)
{
    test_ft_isascii('a', 1);
    test_ft_isascii(128, 0);
    test_ft_isascii(0, 1);
    test_ft_isascii(127, 1);
}
// ============ ft_isdigit tests =================

void test_ft_isprint(int c, int expected)
{
    int result;

    result = ft_isprint(c);
    if (result == expected)
        printf("PASS: ft_isprint('%c') = %d\n", c, result);
    else
        printf("FAIL: ft_isprint('%c') = %d, expected %d\n", c, result, expected);
}

void run_ft_isprint_tests(void)
{
    test_ft_isprint('a', 1);
    test_ft_isprint(' ', 1);
    test_ft_isprint(31, 0);
    test_ft_isprint(127, 0);
}

// ============ ft_isdigit tests =================

void test_ft_isdigit(int c, int expected)
{
    int result;

    result = ft_isdigit(c);
    if (result == expected)
        printf("PASS: ft_isdigit('%c') = %d\n", c, result);
    else
        printf("FAIL: ft_isdigit('%c') = %d, expected %d\n", c, result, expected);
}

void run_ft_isdigit_tests(void)
{
    test_ft_isdigit('0', 1);
    test_ft_isdigit('9', 1);
    test_ft_isdigit('a', 0);
    test_ft_isdigit('!', 0);
}

int main(void)
{
    printf("Running ft_atoi tests...\n");
    run_ft_atoi_tests();
    printf("ft_atoi tests completed.\n");

    printf("Running ft_itoa tests...\n");
    run_ft_itoa_tests();
    printf("ft_itoa tests completed.\n");

    printf("Running ft_isalnum tests...\n");
    run_ft_isalnum_tests();
    printf("ft_isalnum tests completed.\n");

    printf("Running ft_isalpha tests...\n");
    run_ft_isalpha_tests();
    printf("ft_isalpha tests completed.\n");

    printf("Running ft_isascii tests...\n");
    run_ft_isascii_tests();
    printf("ft_isascii tests completed.\n");

    printf("Running ft_isdigit tests...\n");
    run_ft_isdigit_tests();
    printf("ft_isdigit tests completed.\n");

    printf("Running ft_isprint tests...\n");
    run_ft_isprint_tests();
    printf("ft_isprint tests completed.\n");
    return (0);
}