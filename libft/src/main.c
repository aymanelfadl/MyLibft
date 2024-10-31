#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

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
    test_ft_atoi("123", atoi("123"));
    test_ft_atoi("-123", atoi("-123"));
    test_ft_atoi("   123", atoi("    123"));
    test_ft_atoi("   -123", atoi("    -123"));
    test_ft_atoi("+123", atoi("+123"));
    test_ft_atoi("000123", atoi("000123"));
    test_ft_atoi("123abc", atoi("123abc"));
    test_ft_atoi("abc", atoi("abc"));
    test_ft_atoi("", atoi(""));
    test_ft_atoi("   ", atoi("    "));
    test_ft_atoi("-2147483648", atoi("-2147483648"));
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
    test_ft_itoa(123, "123");
    test_ft_itoa(-123, "-123");
    test_ft_itoa(0, "0");
    test_ft_itoa(INT_MAX, "2147483647");
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
    test_ft_isalnum('a', isalnum('a'));
    test_ft_isalnum('1', isalnum('1'));
    test_ft_isalnum('!', isalnum('!'));
    test_ft_isalnum(' ', isalnum(' '));
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
    test_ft_isalpha('a', isalpha('a'));
    test_ft_isalpha('Z', isalpha('Z'));
    test_ft_isalpha('1', isalpha('1'));
    test_ft_isalpha('!', isalpha('!'));
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
    test_ft_isascii('a', isascii('a'));
    test_ft_isascii(128, isascii(128));
    test_ft_isascii(0, isascii(0));
    test_ft_isascii(127, isascii(127));
}
// ============ ft_isprint tests =================

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
    test_ft_isprint('a', isprint('a'));
    test_ft_isprint(' ', isprint(' '));
    test_ft_isprint(31, isprint(31));
    test_ft_isprint(127, isprint(127));
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
    test_ft_isdigit('0', isdigit('0'));
    test_ft_isdigit('9', isdigit('9'));
    test_ft_isdigit('a', isdigit('a'));
    test_ft_isdigit('!', isdigit('!'));
}

// ============== ft_strlen tests =================

void test_ft_strlen(const char *c, size_t expected)
{
    size_t result;

    result = ft_strlen(c);
    if (result == expected)
        printf("PASS: ft_strlen('%s') = %zu\n", c, result);
    else
        printf("FAIL: ft_strlen('%s') = %zu\n, expected %zu", c, result, expected);
}

void run_ft_strlen_tests(void)
{
    test_ft_strlen("ayman", 5);
    test_ft_strlen("", 0);
}

// =============== ft_tolower tests ===============

void test_ft_tolower(int c, int expected)
{
    int result;

    result = ft_tolower(c);
    if (result == expected)
        printf("PASS: ft_tolower('%c') = %c\n", c, result);
    else
        printf("PASS: ft_tolower('%c') = %c\n", c, result);
}

void run_ft_tolower_tests(void)
{
    test_ft_tolower('a', tolower('a'));
    test_ft_tolower(0, tolower(0));
    test_ft_tolower('Z', tolower('Z'));
}

// =============== ft_tolower tests ===============

void test_ft_toupper(int c, int expected)
{
    int result;

    result = ft_toupper(c);
    if (result == expected)
        printf("PASS: ft_toupper('%c') = %c\n", c, result);
    else
        printf("PASS: ft_toupper('%c') = %c\n", c, result);
}

void run_ft_toupper_tests(void)
{
    test_ft_toupper('a', toupper('a'));
    test_ft_toupper(0, toupper(0));
    test_ft_toupper('Z', toupper('Z'));
}
#include "libft.h"
#include <stdio.h>

// ============ ft_substr tests =================
void test_ft_substr(const char *s, unsigned int start, size_t len, const char *expected)
{
    char *result;

    result = ft_substr(s, start, len);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_substr(\"%s\", %u, %zu) = \"%s\"\n", s, start, len, result);
    else
        printf("FAIL: ft_substr(\"%s\", %u, %zu) = \"%s\", expected \"%s\"\n", s, start, len, result, expected);
    free(result);
}

void run_ft_substr_tests(void)
{
    test_ft_substr("0123456789", 7, 5, "789");
    test_ft_substr("", 0, 5, "");
    test_ft_substr("0123456789", 7, 20, "789");
    test_ft_substr("0123456789", 10, 5, "");
    test_ft_substr("0123456789", 20, 5, "");
    test_ft_substr("", 0, 5, "");
    test_ft_substr("0123456789", 10, 5, "");
    test_ft_substr("0123456789", 3, 0, "");
}

// ============ ft_strncmp tests =================
void test_ft_strncmp(const char *s1, const char *s2, size_t n, int expected)
{
    int result;

    result = ft_strncmp(s1, s2, n);
    if (result == expected)
        printf("PASS: ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, result);
    else
        printf("FAIL: ft_strncmp(\"%s\", \"%s\", %zu) = %d, expected %d\n", s1, s2, n, result, expected);
}

void run_ft_strncmp_tests(void)
{
    test_ft_strncmp("abc", "abc", 3, strncmp("abc", "abc", 3));
    test_ft_strncmp("abc", "abd", 3, strncmp("abc", "abd", 3));
    test_ft_strncmp("abc", "abcd", 3, strncmp("abc", "abcd", 3));
    test_ft_strncmp("abcd", "abc", 3, strncmp("abcd", "abc", 3));
    test_ft_strncmp("abc", "abc", 0, strncmp("abc", "abc", 0));
    test_ft_strncmp("abc", "abc", 1, strncmp("abc", "abc", 1));
    test_ft_strncmp("abc", "abd", 2, strncmp("abc", "abd", 2));
    test_ft_strncmp("abc", "abd", 4, strncmp("abc", "abd", 4));
    test_ft_strncmp("", "", 1, strncmp("", "", 1));
    test_ft_strncmp("a", "", 1, strncmp("a", "", 1));
    test_ft_strncmp("", "a", 1, strncmp("", "a", 1));
}

// ============ ft_strnstr tests =================

void test_ft_strnstr(const char *haystack, const char *needle, size_t len, char *expected)
{
    const char *result;

    result = ft_strnstr(haystack, needle, len);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_strnstr(\"%s\", \"%s\", %zu) = \"%s\"\n", haystack, needle, len, result);
    else
        printf("FAIL: ft_strnstr(\"%s\", \"%s\", %zu) = \"%s\", expected \"%s\"\n", haystack, needle, len, result, expected);
}

void run_ft_strnstr_tests(void)
{
    test_ft_strnstr("0123456789", "56789", 10, "56789");
    test_ft_strnstr("0123456789", "56789", 5, NULL);
    test_ft_strnstr("0123456789", "", 10, "0123456789");
    test_ft_strnstr("", "56789", 10, NULL);
    test_ft_strnstr("0123456789", "345", 8, "3456789");
    test_ft_strnstr("0123456789", "345", 3, NULL);
    test_ft_strnstr("01234", "0123456789", 10, NULL);
    test_ft_strnstr("01234", "01234", 5, "01234");
    test_ft_strnstr("01234", "01234", 4, NULL);
    test_ft_strnstr("01234", "34", 5, "34");
    test_ft_strnstr("01234", "34", 4, NULL);
}

// ================== Main =======================
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

    printf("Running ft_strlen tests...\n");
    run_ft_strlen_tests();
    printf("ft_strlen tests completed.\n");

    printf("Running ft_tolower tests...\n");
    run_ft_tolower_tests();
    printf("ft_tolower tests completed.\n");

    printf("Running ft_toupper tests...\n");
    run_ft_toupper_tests();
    printf("ft_toupper tests completed.\n");

    printf("Running ft_substr tests...\n");
    run_ft_substr_tests();
    printf("ft_substr tests completed.\n");

    printf("Running ft_strncmp tests...\n");
    run_ft_strncmp_tests();
    printf("ft_strncmp tests completed.\n");

    printf("Running ft_strnstr tests...\n");
    run_ft_strnstr_tests();
    printf("ft_strnstr tests completed.\n");

    return (0);
}
