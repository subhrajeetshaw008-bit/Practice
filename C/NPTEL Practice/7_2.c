/*Student Database with Structures
Write a C program to create and sort a database of students using structures.
The template code is provided. You must complete both the struct Student
definition and the compare() function.
Each student record contains:
• Name: a string with no spaces.
• Physics: an integer in [0, 100].
• Chemistry: an integer in [0, 100].
• Mathematics: an integer in [0, 100].
The program uses qsort() to sort the array of students. Complete the
compare() function so that students are sorted according to the following rules:
4
1. Higher Physics marks come first.
2. If Physics marks are equal, higher Chemistry marks come first.
3. If both Physics and Chemistry marks are equal, higher Mathematics marks
come first.
The compare() function should return a negative value if a should come
before b, and a positive value if a should come after b.
Input
The first line contains an integer n (1 ≤ n ≤ 100).
The next n lines contain the student’s name followed by their Physics, Chemistry, and Mathematics marks.
Output
Print the sorted student database, one student per line, in the following format:
name physics chemistry mathematics
Note
Ignore the comment “Passed after ignoring Presentation Error”.
Constraints
• 1 ≤ n ≤ 100
• All marks are integers in [0, 100].
• Names contain no spaces.
• All Mathematics marks are distinct
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int physics;
    int chemistry;
    int maths;
};

// comparator for qsort
int compare(const void *a, const void *b) {
    struct Student *s1 = (struct Student *)a;
    struct Student *s2 = (struct Student *)b;

    if (s1->physics != s2->physics)
        return s2->physics - s1->physics;      // higher physics first

    if (s1->chemistry != s2->chemistry)
        return s2->chemistry - s1->chemistry;  // higher chemistry first

    return s2->maths - s1->maths;              // higher maths first
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student arr[100];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", arr[i].name, &arr[i].physics,
              &arr[i].chemistry, &arr[i].maths);
    }

    qsort(arr, n, sizeof(struct Student), compare);

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n", arr[i].name,
               arr[i].physics, arr[i].chemistry, arr[i].maths);
    }

    return 0;
}