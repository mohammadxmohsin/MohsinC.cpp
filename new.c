#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[100], str2[100], choice;
    int o;

    printf("\nEnter the First string: ");
    scanf("%s", str1);
    printf("Enter the Second string: ");
    scanf("%s", str2);

    while (1) {
        printf("\n\n--- String Operations Menu ---");
        printf("\n1: String Length");
        printf("\n2: String Copy");
        printf("\n3: String Concatenate");
        printf("\n4: String Compare");
        printf("\n5: String Upper Case");
        printf("\n6: String Lower Case");
        printf("\n7: String Reverse");

        printf("\n\nSelect One Option (1-7): ");
        scanf("%d", &o);

        switch (o) {
            case 1:
                printf("\nLength of First String: %lu", strlen(str1));
                printf("\nLength of Second String: %lu", strlen(str2));
                break;

            case 2:
                strcpy(str2, str1);
                printf("\nAfter Copy:");
                printf("\nFirst String: %s", str1);
                printf("\nSecond String: %s", str2);
                break;

            case 3:
                if (strlen(str1) + strlen(str2) < sizeof(str1)) {
                    strcat(str1, str2);
                    printf("\nConcatenated String: %s", str1);
                } else {
                    printf("\nError: Concatenation would cause buffer overflow.");
                }
                break;

            case 4:
                if (strcmp(str1, str2) == 0) {
                    printf("\nStrings are equal");
                } else if (strcmp(str1, str2) > 0) {
                    printf("\nFirst String is larger");
                } else {
                    printf("\nSecond String is larger");
                }
                break;

            case 5:
                toUpperCase(str1);
                toUpperCase(str2);
                printf("\nUpper Case of String1: %s", str1);
                printf("\nUpper Case of String2: %s", str2);
                break;

            case 6:
                toLowerCase(str1);
                toLowerCase(str2);
                printf("\nLower Case of String1: %s", str1);
                printf("\nLower Case of String2: %s", str2);
                break;

            case 7:
                reverseString(str1);
                reverseString(str2);
                printf("\nReverse of String1: %s", str1);
                printf("\nReverse of String2: %s", str2);
                break;

            default:
                printf("\nPlease Select a Valid Option (1 to 7)!");
        }

        printf("\n\nDo you want to exit? Type (Y/N): ");
        // To consume the newline left in the buffer
        getchar();
        scanf(" %c", &choice);

        if (choice == 'Y' || choice == 'y') {
            printf("\nGoodbye!\n");
            break;
        }
    }

    return 0;
}
