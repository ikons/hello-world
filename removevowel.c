#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

// Function to check if a character is a vowel
int is_vowel(wchar_t ch) {
    ch = towlower(ch); // Convert the character to lowercase
    return (ch == L'a' || ch == L'e' || ch == L'i' || ch == L'o' || ch == L'u' ||
            ch == L'á' || ch == L'é' || ch == L'í' || ch == L'ú' || ch == L'ά' ||
            ch == L'α' || ch == L'ε' || ch == L'έ' || ch == L'η' || ch == L'ή' || ch == L'ι' || ch == L'ί' || ch == L'ο' || ch == L'ό' || ch == L'υ' || ch == L'ύ' || ch == L'ω' || ch == L'ώ'); 
}

// Function to remove vowels from a wide character string
void removevowel(wchar_t* str) {
    int i, j = 0;
    for (i = 0; str[i] != L'\0'; i++) {
        if (!is_vowel(str[i])) {
            str[j++] = str[i]; // Copy non-vowel characters
        }
    }
    str[j] = L'\0'; // Null-terminate the result string
}
