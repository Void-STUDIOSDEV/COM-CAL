#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main() {
    char c[10]; // store user input
    double a, b, total, base, exponent, percent, num;

    printf("COMMUNITY CALCULATOR 01.00.00\n");
    printf("COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAMS 2025-2026\n");
    printf("Utilizing the GNU General Public License 2.\n");
    printf("Reconstruction of Py-Calculator.\n");

    while (1) {
        printf("\n\nADDITION [+], MULTIPLICATIONS [X], DIVISION [/], SUBTRACTION [-], POWER [^], REMAINDER [*], PERCENT OF [%], PERCENT SOMETHING IS [>], EXIT [E]\n");
        printf("[INPUT] ");
        scanf("%s", c);

        // Convert input to uppercase
        for (int i = 0; c[i]; i++) {
            c[i] = toupper(c[i]);
        }

        if (strcmp(c, "E") == 0) {
            printf("THANK YOU FOR USING THE COMMUNITY-CALCULATOR!\n");
            printf("GOODBYE!\n");
            break;
        }

        if (strcmp(c, "+") == 0) {
            printf("\nENTER NUMBER: ");
            scanf("%lf", &a);
            printf("ENTER SECOND: ");
            scanf("%lf", &b);
            total = a + b;
            printf("TOTAL: %.2lf\n", total);
        } else if (strcmp(c, "X") == 0) {
            printf("\nENTER NUMBER: ");
            scanf("%lf", &a);
            printf("ENTER SECOND: ");
            scanf("%lf", &b);
            total = a * b;
            printf("TOTAL: %.2lf\n", total);
        } else if (strcmp(c, "/") == 0) {
            printf("\nENTER NUMBER: ");
            scanf("%lf", &a);
            printf("ENTER SECOND: ");
            scanf("%lf", &b);
            if (b != 0) {
                total = a / b;
                printf("TOTAL: %.2lf\n", total);
            } else {
                printf("ERROR: Division by zero!\n");
            }
        } else if (strcmp(c, "-") == 0) {
            printf("\nENTER NUMBER: ");
            scanf("%lf", &a);
            printf("ENTER SECOND: ");
            scanf("%lf", &b);
            total = a - b;
            printf("TOTAL: %.2lf\n", total);
        } else if (strcmp(c, "^") == 0) {
            printf("\nENTER NUMBER: ");
            scanf("%lf", &base);
            printf("ENTER SECOND: ");
            scanf("%lf", &exponent);
            total = pow(base, exponent);
            printf("TOTAL: %.2lf\n", total);
        } else if (strcmp(c, "*") == 0) {
            printf("\nENTER NUMBER: ");
            scanf("%lf", &a);
            printf("ENTER SECOND: ");
            scanf("%lf", &b);
            total = fmod(a, b);
            printf("TOTAL: %.2lf\n", total);
        } else if (strcmp(c, "%") == 0) {
            printf("\nENTER NUMBER: ");
            scanf("%lf", &percent);
            printf("ENTER SECOND: ");
            scanf("%lf", &num);
            total = (percent / 100) * num;
            printf("TOTAL: %.2lf\n", total);
        } else if (strcmp(c, ">") == 0) {
            printf("\nENTER PART: ");
            scanf("%lf", &num);
            printf("ENTER TOTAL: ");
            scanf("%lf", &total);
            percent = (num / total) * 100;
            printf("%.2lf is %.2lf%% of %.2lf\n", num, percent, total);
        } else {
            printf("\nINVALID INPUT...\n");
        }
    }

    return 0;
}
