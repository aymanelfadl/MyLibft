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

// ============ ft_strchr tests =================

void test_ft_strchr(const char *s, int c, const char *expected)
{
    const char *result;

    result = ft_strchr(s, c);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_strchr(\"%s\", '%c') = \"%s\"\n", s, c, result);
    else
        printf("FAIL: ft_strchr(\"%s\", '%c') = \"%s\", expected \"%s\"\n", s, c, result, expected);
}

void run_ft_strchr_tests(void)
{
    test_ft_strchr("hello", 'e', strchr("hello", 'e'));
    test_ft_strchr("hello", 'l', strchr("hello", 'l'));
    test_ft_strchr("hello", 'o', strchr("hello", 'o'));
    test_ft_strchr("hello", 'x', strchr("hello", 'x'));
    test_ft_strchr("hello", '\0', strchr("hello", '\0'));
    test_ft_strchr("", 'a', strchr("", 'a'));
    test_ft_strchr("", '\0', strchr("", '\0'));
}

// ============ ft_strrchr tests =================

void test_ft_strrchr(const char *s, int c, const char *expected)
{
    const char *result;

    result = ft_strrchr(s, c);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_strrchr(\"%s\", '%c') = \"%s\"\n", s, c, result);
    else
        printf("FAIL: ft_strrchr(\"%s\", '%c') = \"%s\", expected \"%s\"\n", s, c, result, expected);
}

void run_ft_strrchr_tests(void)
{
    test_ft_strrchr("hello", 'e', strrchr("hello", 'e'));
    test_ft_strrchr("hello", 'l', strrchr("hello", 'l'));
    test_ft_strrchr("hello", 'o', strrchr("hello", 'o'));
    test_ft_strrchr("hello", 'x', strrchr("hello", 'x'));
    test_ft_strrchr("hello", '\0', strrchr("hello", '\0'));
    test_ft_strrchr("", 'a', strrchr("", 'a'));
    test_ft_strrchr("", '\0', strrchr("", '\0'));
}

// ============ ft_strtrim tests =================
void test_ft_strtrim(const char *s1, const char *set, const char *expected)
{
    char *result;

    result = ft_strtrim(s1, set);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", s1, set, result);
    else
        printf("FAIL: ft_strtrim(\"%s\", \"%s\") = \"%s\", expected \"%s\"\n", s1, set, result, expected);
    free(result);
}

void run_ft_strtrim_tests(void)
{
    test_ft_strtrim("   hello   ", " ", "hello");
    test_ft_strtrim("   hello world   ", " ", "hello world");
    test_ft_strtrim("xxhelloxx", "x", "hello");
    test_ft_strtrim("xxhelloxx", "y", "xxhelloxx");
    test_ft_strtrim("   ", " ", "");
    test_ft_strtrim("", " ", "");
    test_ft_strtrim("hello", "", "hello");
    test_ft_strtrim("hello", " ", "hello");
    test_ft_strtrim("   hello", " ", "hello");
    test_ft_strtrim("hello   ", " ", "hello");
    test_ft_strtrim("   hello   ", "ol ", "he");
}

// ============ ft_strdup tests =================
void test_ft_strdup(const char *s, const char *expected)
{
    char *result;

    result = ft_strdup(s);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_strdup(\"%s\") = \"%s\"\n", s, result);
    else
        printf("FAIL: ft_strdup(\"%s\") = \"%s\", expected \"%s\"\n", s, result, expected);
    free(result);
}

void run_ft_strdup_tests(void)
{
    test_ft_strdup("hello", strdup("hello"));
    test_ft_strdup("", strdup(""));
    test_ft_strdup("a", strdup("a"));
    test_ft_strdup("This is a longer string to test ft_strdup.", strdup("This is a longer string to test ft_strdup."));
    test_ft_strdup("1234567890", strdup("1234567890"));
    test_ft_strdup("!@#$%^&*()", strdup("!@#$%^&*()"));
}

// ============ ft_strjoin tests =================

void test_ft_strjoin(const char *s1, const char *s2, const char *expected)
{
    char *result;

    result = ft_strjoin(s1, s2);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_strjoin(\"%s\", \"%s\") = \"%s\"\n", s1, s2, result);
    else
        printf("FAIL: ft_strjoin(\"%s\", \"%s\") = \"%s\", expected \"%s\"\n", s1, s2, result, expected);
    free(result);
}

void run_ft_strjoin_tests(void)
{
    test_ft_strjoin("hello", "world", "helloworld");
    test_ft_strjoin("", "world", "world");
    test_ft_strjoin("hello", "", "hello");
    test_ft_strjoin("", "", "");
    test_ft_strjoin("foo", "bar", "foobar");
    test_ft_strjoin("123", "456", "123456");
    test_ft_strjoin("!@#", "$%^", "!@#$%^");
    test_ft_strjoin(NULL, "world", NULL);
    test_ft_strjoin("hello", NULL, NULL);
    test_ft_strjoin(NULL, NULL, NULL);
}

// ============ ft_strmapi tests =================

char test_func(unsigned int i, char c)
{
    return c + i;
}

void test_ft_strmapi(const char *s, char (*f)(unsigned int, char), const char *expected)
{
    char *result;

    result = ft_strmapi(s, f);
    if ((result == NULL && expected == NULL) || (result != NULL && strcmp(result, expected) == 0))
        printf("PASS: ft_strmapi(\"%s\", f) = \"%s\"\n", s, result);
    else
        printf("FAIL: ft_strmapi(\"%s\", f) = \"%s\", expected \"%s\"\n", s, result, expected);
    free(result);
}

void run_ft_strmapi_tests(void)
{
    test_ft_strmapi("abc", test_func, "ace");
    test_ft_strmapi("", test_func, "");
    test_ft_strmapi("123", test_func, "135");
    test_ft_strmapi("abc", test_func, "ace");
    test_ft_strmapi("hello", test_func, "hfnos");
    test_ft_strmapi(NULL, test_func, NULL);
    test_ft_strmapi("hello", NULL, NULL);
}

// =========== ft_split tests =========================

void test_ft_split(const char *s, char c, char **expected)
{
    char **result;
    int i = 0;
    int pass = 1;

    result = ft_split(s, c);
    while (expected[i] != NULL)
    {
        if (result[i] == NULL || strcmp(result[i], expected[i]) != 0)
        {
            pass = 0;
            break;
        }
        i++;
    }
    if (result[i] != NULL)
        pass = 0;

    if (pass)
        printf("PASS: ft_split(\"%s\", '%c')\n", s, c);
    else
        printf("FAIL: ft_split(\"%s\", '%c')\n", s, c);

    i = 0;
    while (result[i] != NULL)
    {
        free(result[i]);
        i++;
    }
    free(result);
}

void run_ft_split_tests(void)
{
    char *expected1[] = {"hello", "world", NULL};
    char *expected2[] = {"hello", "world", "1337", NULL};
    char *expected3[] = {"hello", NULL};
    char *expected4[] = {NULL};

    test_ft_split("hello world", ' ', expected1);
    test_ft_split("hello world 1337", ' ', expected2);
    test_ft_split("hello", ' ', expected3);
    test_ft_split("", ' ', expected4);
}

// ============ ft_striteri tests =================

// Helper function for ft_striteri
void test_func1(unsigned int i, char *c)
{
    *c = *c + i;
}

void test_ft_striteri(char *s, void (*f)(unsigned int, char *), const char *expected)
{
    char *original = strdup(s);
    ft_striteri(s, f);
    if (strcmp(s, expected) == 0)
        printf("PASS: ft_striteri(\"%s\", f) = \"%s\"\n", original, s);
    else
        printf("FAIL: ft_striteri(\"%s\", f) = \"%s\", expected \"%s\"\n", original, s, expected);
    free(original);
}

void run_ft_striteri_tests(void)
{
    char s1[] = "abc";
    char s2[] = "";
    char s3[] = "123";
    char s4[] = "a";
    char s5[] = "z";

    test_ft_striteri(s1, test_func1, "ace");
    test_ft_striteri(s2, test_func1, "");
    test_ft_striteri(s3, test_func1, "135");
    test_ft_striteri(s4, test_func1, "a");
    test_ft_striteri(s5, test_func1, "z");
}

// ============ ft_memset tests =================

void test_ft_memset(void *b, int c, size_t len, void *expected)
{
    void *result;

    result = ft_memset(b, c, len);
    if (memcmp(result, expected, len) == 0)
        printf("PASS: ft_memset(%p, %d, %zu) = %p\n", b, c, len, result);
    else
        printf("FAIL: ft_memset(%p, %d, %zu) = %p, expected %p\n", b, c, len, result, expected);
}

void run_ft_memset_tests(void)
{
    char buffer1[10] = "abcdefghi";
    char buffer3[10] = "abcdefghi";
    char buffer4[10] = "abcdefghi";
    char buffer5[10] = "abcdefghi";

    test_ft_memset(buffer1, 'x', 5, memset(buffer1, 'x', 5));
    test_ft_memset(buffer3, 'z', 10, memset(buffer3, 'z', 10));
    test_ft_memset(buffer4, 0, 5, memset(buffer4, 0, 5));
    test_ft_memset(buffer5, 255, 5, memset(buffer5, 255, 5));
}

// ============ ft_memchr tests =================
void test_ft_memchr(const void *s, int c, size_t n, void *expected)
{
    void *result;

    result = ft_memchr(s, c, n);
    if (result == expected)
        printf("PASS: ft_memchr(%p, %d, %zu) = %p\n", s, c, n, result);
    else
        printf("FAIL: ft_memchr(%p, %d, %zu) = %p, expected %p\n", s, c, n, result, expected);
}

void run_ft_memchr_tests(void)
{
    char buffer1[10] = "abcdefghi";
    char buffer2[10] = "abcdefghi";
    char buffer3[10] = "abcdefghi";
    char buffer4[10] = "abcdefghi";

    test_ft_memchr(buffer1, 'c', 5, memchr(buffer1, 'c', 5));
    test_ft_memchr(buffer2, 'z', 10, memchr(buffer2, 'z', 10));
    test_ft_memchr(buffer3, 0, 5, memchr(buffer3, 0, 5));
    test_ft_memchr(buffer4, 255, 5, memchr(buffer4, 255, 5));
}

// ============ ft_memcpy tests =================
void test_ft_memcpy(void *dest, const void *src, size_t n, void *expected)
{
    void *result;

    result = ft_memcpy(dest, src, n);
    if (memcmp(result, expected, n) == 0)
        printf("PASS: ft_memcpy(%p, %p, %zu) = %p\n", dest, src, n, result);
    else
        printf("FAIL: ft_memcpy(%p, %p, %zu) = %p, expected %p\n", dest, src, n, result, expected);
}
void run_ft_memcpy_tests(void)
{
    char dest1[10] = "abcdefghi";
    char src1[10] = "123456789";
    test_ft_memcpy(dest1, src1, 10, memcpy(dest1, src1, 10));

    char dest2[10] = "abcdefghi";
    char src2[10] = "123";
    test_ft_memcpy(dest2, src2, 4, memcpy(dest2, src2, 5));

    char dest3[10] = "abcdefghi";
    char src3[10] = "";
    test_ft_memcpy(dest3, src3, 0, memcpy(dest3, src3, 0));
}

// ============ ft_memmove tests =================
void test_ft_memmove(void *dest, const void *src, size_t n, void *expected)
{
    void *result;

    result = ft_memmove(dest, src, n);
    if (memcmp(result, expected, n) == 0)
        printf("PASS: ft_memmove(%p, %p, %zu) = %p\n", dest, src, n, result);
    else
        printf("FAIL: ft_memmove(%p, %p, %zu) = %p, expected %p\n", dest, src, n, result, expected);
}

void run_ft_memmove_tests(void)
{
    char dest1[10] = "abcdefghi";
    char src1[10] = "123456789";
    test_ft_memmove(dest1, src1, 10, memmove(dest1, src1, 10));

    char dest2[10] = "abcdefghi";
    char src2[10] = "123";
    test_ft_memmove(dest2, src2, 4, memmove(dest2, src2, 4));

    char dest3[10] = "abcdefghi";
    char src3[10] = "";
    test_ft_memmove(dest3, src3, 0, memmove(dest3, src3, 0));

    char dest4[10] = "abcdefghi";
    test_ft_memmove(dest4 + 2, dest4, 5, memmove(dest4 + 2, dest4, 5));

    char dest5[10] = "abcdefghi";
    test_ft_memmove(dest5, dest5 + 2, 5, memmove(dest5, dest5 + 2, 5));
}

// ============ ft_bzero tests =================
void test_ft_bzero(void *s, size_t n, void *expected, size_t size)
{
    ft_bzero(s, n);
    if (memcmp(s, expected, size) == 0)
        printf("PASS: ft_bzero(%p, %zu)\n", s, n);
    else
        printf("FAIL: ft_bzero(%p, %zu)\n", s, n);
}

void run_ft_bzero_tests(void)
{
    char buffer1[10] = "abcdefghi";
    char expected1[10] = "\0\0\0\0\0fghi";
    test_ft_bzero(buffer1, 5, expected1, 10);

    char buffer2[10] = "abcdefghi";
    char expected2[10] = "\0\0\0\0\0\0\0\0\0\0";
    test_ft_bzero(buffer2, 10, expected2, 10);

    char buffer3[10] = "abcdefghi";
    char expected3[10] = "abcdefghi";
    test_ft_bzero(buffer3, 0, expected3, 10);
}

// ============ ft_memcmp tests =================
void test_ft_memcmp(void *s1, const void *s2, size_t n, int expected)
{
    int result;

    result = ft_memcmp(s1, s2, n);
    if (result == expected)
        printf("PASS: ft_memcmp(%p, %p, %zu) = %d\n", s1, s2, n, result);
    else
        printf("FAIL: ft_memcmp(%p, %p, %zu) = %d, expected %d\n", s1, s2, n, result, expected);
}

void run_ft_memcmp_tests(void)
{
    char buffer1[10] = "abcdefghi";
    char buffer2[10] = "abcdefghi";
    char buffer3[10] = "abcdezzzz";
    char buffer4[10] = "zzzzzzzzz";

    test_ft_memcmp(buffer1, buffer2, 10, memcmp(buffer1, buffer2, 10));
    test_ft_memcmp(buffer1, buffer3, 5, memcmp(buffer1, buffer3, 5));
    test_ft_memcmp(buffer1, buffer3, 10, memcmp(buffer1, buffer3, 10));
    test_ft_memcmp(buffer1, buffer4, 0, memcmp(buffer1, buffer4, 0));
    test_ft_memcmp(buffer1, buffer4, 1, memcmp(buffer1, buffer4, 1));
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

    printf("Running ft_strchr tests...\n");
    run_ft_strchr_tests();
    printf("ft_strchr tests completed.\n");

    printf("Running ft_strrchr tests...\n");
    run_ft_strrchr_tests();
    printf("ft_strrchr tests completed.\n");

    printf("Running ft_strtrim tests...\n");
    run_ft_strtrim_tests();
    printf("ft_strtrim tests completed.\n");

    printf("Running ft_strdup tests...\n");
    run_ft_strdup_tests();
    printf("ft_strdup tests completed.\n");

    printf("Running ft_strjoin tests...\n");
    run_ft_strjoin_tests();
    printf("ft_strjoin tests completed.\n");

    printf("Running ft_strmapi tests...\n");
    run_ft_strmapi_tests();
    printf("ft_strmapi tests completed.\n");

    printf("Running ft_split tests...\n");
    run_ft_split_tests();
    printf("ft_split tests completed.\n");

    printf("Running ft_striteri tests...\n");
    run_ft_striteri_tests();
    printf("ft_striteri tests completed.\n");

    printf("Running ft_memset tests...\n");
    run_ft_memset_tests();
    printf("ft_memset tests completed.\n");

    printf("Running ft_memchr tests...\n");
    run_ft_memchr_tests();
    printf("ft_memchr tests completed.\n");

    printf("Running ft_memcpy tests...\n");
    run_ft_memcpy_tests();
    printf("ft_memcpy tests completed.\n");

    printf("Running ft_memmove tests...\n");
    run_ft_memmove_tests();
    printf("ft_memmove tests completed.\n");

    printf("Running ft_bzero tests...\n");
    run_ft_bzero_tests();
    printf("ft_bzero tests completed.\n");

    printf("Running ft_memcmp tests...\n");
    run_ft_memcmp_tests();
    printf("ft_memcmp tests completed.\n");

    return (0);
}