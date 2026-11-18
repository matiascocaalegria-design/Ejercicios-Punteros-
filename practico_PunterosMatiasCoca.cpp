#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void ejercicio01() {
    int x = 8;
    int* p = &x;
    cout << *p;
} //resultado: 8

void ejercicio02() {
    int x = 5;
    int* p = &x;
    *p = 12;
    cout << x;
} //resultado: 12

void ejercicio03() {
    int a = 7;
    int* p = &a;
    cout << a + *p;
} //resultado: 14

void ejercicio04() {
    int x = 3;
    int* p = &x;
    x++;
    cout << *p;
} //resultado: 4

void ejercicio05() {
    int a = 10, b = 20;
    int* p = &a;
    p = &b;
    cout << *p;
} //resultado: 20

void ejercicio06() {
    int n = 9;
    int* p = &n;
    cout << (&n == p);
} //resultado: 1

void ejercicio07() {
    int x = 6;
    int* p = &x;
    cout << *p << " " << x;
} //resultado: 6 6

void ejercicio08() {
    int a = 4;
    int* p = &a;
    *p += 3;
    cout << a * 2;
} //resultado: 14

void ejercicio09() {
    int x = 11;
    int* p = &x;
    int** pp = &p;
    cout << **pp;
} //resultado: 11

void ejercicio10() {
    int x = 2;
    int* p = &x;
    int** pp = &p;
    **pp = 15;
    cout << x;
} //resultado: 15

void ejercicio11() {
    int a[4] = {2, 4, 6, 8};
    int* p = a;
    cout << *p;
} //resultado: 2

void ejercicio12() {
    int a[] = {3, 5, 7};
    int* p = a;
    cout << *(p + 1);
} //resultado: 5

void ejercicio13() {
    int a[] = {1, 2, 3, 4};
    int* p = a;
    cout << p[2];
} //resultado: 3

void ejercicio14() {
    int a[] = {8, 6, 4};
    int* p = a;
    cout << *(p + 2) + *p;
} //resultado: 12

void ejercicio15() {
    int a[] = {10, 20, 30};
    int* p = a;
    p++;
    cout << *p;
} //resultado: 20

void ejercicio16() {
    int a[] = {2, 4, 6, 8};
    int* p = a;
    *(p + 1) = 9;
    cout << a[1];
} //resultado: 9

void ejercicio17() {
    int a[] = {1, 2, 3, 4};
    int* p = a;
    int suma = 0;
    for (int i = 0; i < 4; i++) suma += *(p + i);
    cout << suma;
} //resultado: 10

void ejercicio18() {
    int a[] = {5, 9, 2, 7};
    int* p = a;
    cout << *(p + 3) - *(p + 1);
} //resultado: -2

void ejercicio19() {
    int a[] = {1, 3, 5, 7, 9};
    int* p = &a[4];
    cout << *(p - 2);
} //resultado: 5

void ejercicio20() {
    int a[] = {2, 4, 6, 8};
    int* p = a;
    cout << (p + 3) - p;
} //resultado: 3

void ejercicio21() {
    int a[] = {4, 7, 1};
    int* p = a;
    *p = *(p + 1) + *(p + 2);
    cout << a[0];
} //resultado: 8

void ejercicio22() {
    int a[] = {1, 2, 3};
    int* p = a;
    for (int i = 0; i < 3; i++) *(p + i) *= 2;
    cout << a[0] << " " << a[2];
} //resultado: 2 6

void ejercicio23() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << m[1][2];
} //resultado: 6

void ejercicio24() {
    int m[2][2] = {{2, 4}, {6, 8}};
    int (*p)[2] = m;
    cout << p[1][0];
} //resultado: 6

void ejercicio25() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = m;
    cout << *(*(p + 1) + 1);
} //resultado: 5

void ejercicio26() {
    int m[2][2] = {{1, 3}, {5, 7}};
    int (*p)[2] = m;
    cout << *(*(p) + 1) + *(*(p + 1));
} //resultado: 8

void ejercicio27() {
    int m[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int (*p)[2] = m;
    cout << (p + 2)[0][1];
} //resultado: 6

void ejercicio28() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = m;
    p[0][2] = p[1][0] + p[1][1];
    cout << m[0][2];
} //resultado: 9

void ejercicio29() {
    int m[2][2] = {{2, 3}, {4, 5}};
    int (*p)[2] = m;
    int s = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) s += p[i][j];
    cout << s;
} //resultado: 14

void ejercicio30() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int (*p)[3] = m;
    cout << p[0][0] + p[1][1] + p[2][2];
} //resultado: 15

void ejercicio31() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = m;
    cout << p[0][2] + p[1][2];
} //resultado: 9

void ejercicio32() {
    int m[2][2] = {{1, 2}, {3, 4}};
    int (*p)[2] = m;
    for (int i = 0; i < 2; i++) p[i][i] *= 3;
    cout << m[0][0] << " " << m[1][1];
} //resultado: 3 12

void ejercicio33() {
    int* p = new int(25);
    cout << *p;
    delete p;
} //resultado: 25

void ejercicio34() {
    int* a = new int[3]{3, 6, 9};
    cout << a[1];
    delete[] a;
} //resultado: 6

void ejercicio35() {
    int* a = new int[4]{1, 2, 3, 4};
    int* p = a;
    cout << *(p + 3);
    delete[] a;
} //resultado: 4

void ejercicio36() {
    int n = 3;
    int* a = new int[n]{2, 4, 6};
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    cout << s;
    delete[] a;
} //resultado: 12

void ejercicio37() {
    int (*m)[2] = new int[2][2]{{1, 2}, {3, 4}};
    cout << m[1][0];
    delete[] m;
} //resultado: 3

void ejercicio38() {
    int (*m)[3] = new int[2][3]{{2, 4, 6}, {1, 3, 5}};
    cout << *(*(m + 1) + 2);
    delete[] m;
} //resultado: 5

void cambiar(int* p) {
    *p += 5;
}

void ejercicio39() {
    int x = 7;
    cambiar(&x);
    cout << x;
} //resultado: 12

int sumarFila(int (*m)[3], int fila) {
    return m[fila][0] + m[fila][1] + m[fila][2];
}

void ejercicio40() {
    int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << sumarFila(m, 1);
} //resultado: 15


int main () {
    // ejercicio01();
    // ejercicio02();
    // ejercicio03();
    // ejercicio04();
    // ejercicio05();
    // ejercicio06();
    // ejercicio07();
    // ejercicio08();
    // ejercicio09();
    // ejercicio10();
    // ejercicio11();
    // ejercicio12();
    // ejercicio13();
    // ejercicio14();
    // ejercicio15();
    // ejercicio16();
    // ejercicio17();
    // ejercicio18();
    // ejercicio19();
    // ejercicio20();
    // ejercicio21();
    // ejercicio22();
    // ejercicio23();
    // ejercicio24();
    // ejercicio25();
    // ejercicio26();
    // ejercicio27();
    // ejercicio28();
    // ejercicio29();
    // ejercicio30();
    // ejercicio31();
    // ejercicio32();
    // ejercicio33();
    // ejercicio34();
    // ejercicio35();
    // ejercicio36();
    // ejercicio37();
    // ejercicio38();
    // ejercicio39();
    ejercicio40();
    return 0;
}