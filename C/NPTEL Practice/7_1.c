/*3D Vector Operations Using Structures
Write a C program to perform basic operations on two three-dimensional integer
vectors A and B using structures. The structure definition and function
declarations are given below. Complete the function definitions as required.
Structure Definition
struct Vector3D {
int x;
int y;
int z;
};
The following functions are to be completed:
struct Vector3D add(struct Vector3D a, struct Vector3D b);
struct Vector3D subtract(struct Vector3D a, struct Vector3D b);
int dotProduct(struct Vector3D a, struct Vector3D b);
struct Vector3D crossProduct(struct Vector3D a, struct Vector3D b);
The function add() must return the sum of the two vectors, subtract()
must return their difference, dotProduct() must return their dot product, and
crossProduct() must return their cross product.
Vector Addition and Subtraction
For two vectors
A = (ax, ay, az) and B = (bx, by, bz),
1
the sum and difference are given by
A + B = (ax + bx, ay + by, az + bz)
and
A − B = (ax − bx, ay − by, az − bz).
For example, if A = (1, 2, 3) and B = (4, 5, 6):
A + B = (1 + 4, 2 + 5, 3 + 6)
= (5, 7, 9),
A − B = (1 − 4, 2 − 5, 3 − 6)
= (−3, −3, −3).
Dot Product
The dot product of two vectors produces a single integer. It is calculated by
multiplying corresponding components and adding the results:
A · B = (axbx) + (ayby) + (azbz).
For example, for A = (1, 2, 3) and B = (4, 5, 6):
A · B = (1 × 4) + (2 × 5) + (3 × 6)
= 4 + 10 + 18
= 32.
Cross Product
The cross product of two 3D vectors produces a new 3D vector. It is given
by
A × B =
⎛
⎝
aybz − azby,
azbx − axbz,
axby − aybx
⎞
⎠ .
For example, for A = (1, 2, 3) and B = (4, 5, 6):
A × B =
(︁
(2 × 6) − (3 × 5),
(3 × 4) − (1 × 6),
(1 × 5) − (2 × 4))︁
= (−3, 6, −3).
Thus, the key difference is that the dot product returns a single integer,
while all other operations return a 3D vector.
2
Input
The first line contains three integers representing the components x, y, and z
of vector A.
The second line contains three integers representing the components of vector
B.
Output
Print the results of the four operations in the following order:
1. The result of A + B.
2. The result of A − B.
3. The dot product A · B.
4. The result of A × B.
For vector results, print the three components separated by spaces.
*/

#include <stdio.h>

struct Vector3D {
    int x;
    int y;
    int z;
};

struct Vector3D add(struct Vector3D a, struct Vector3D b) {
    struct Vector3D result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

struct Vector3D subtract(struct Vector3D a, struct Vector3D b) {
    struct Vector3D result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

int dotProduct(struct Vector3D a, struct Vector3D b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

struct Vector3D crossProduct(struct Vector3D a, struct Vector3D b) {
    struct Vector3D result;
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    return result;
}

int main() {
    struct Vector3D a, b;
    struct Vector3D sum, difference, cross;
    int dot;

    scanf("%d %d %d", &a.x, &a.y, &a.z);
    scanf("%d %d %d", &b.x, &b.y, &b.z);

    sum = add(a, b);
    difference = subtract(a, b);
    dot = dotProduct(a, b);
    cross = crossProduct(a, b);

    printf("%d %d %d\n", sum.x, sum.y, sum.z);
    printf("%d %d %d\n", difference.x, difference.y, difference.z);
    printf("%d\n", dot);
    printf("%d %d %d", cross.x, cross.y, cross.z);

    return 0;
}