#include <stdio.h>

int main()
{
    int numStudents, i;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++) {
        int s, a, o, sp, e, en, g, p;
        printf("\nStudent %d:\n", i + 1);

        printf("Marks of statistics: ");
        scanf("%d", &s);

        printf("Marks of Account: ");
        scanf("%d", &a);

        printf("Marks of OCM: ");
        scanf("%d", &o);

        printf("Marks of SPCC: ");
        scanf("%d", &sp);

        printf("Marks of economics: ");
        scanf("%d", &e);

        printf("Marks of english: ");
        scanf("%d", &en);

        printf("Marks of gujarati: ");
        scanf("%d", &g);

        printf("Total marks obtained out of 700: %d\n", s + a + o + sp + e + en + g);
        p = s + a + o + sp + e + en + g;

        printf("Percentage obtained: %d/700 * 100 = %.2f\n", p, (float)p / 700 * 100);
    }

    return 0;
}
