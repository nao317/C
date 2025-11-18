// 挿入ソート

#include <stdio.h>

void display(int n, int array[]) {
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i != n - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
}

void insertionSort(int n, int array[]) {
    display(n, array);
    for (int i = 1; i < n; i++) {
        int v = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > v) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = v;
        display(n, array);
    }
}

int main(void) {
    int n; // 要素の数n
    scanf("%d", &n); // nに入力
    int array[n];
    // 配列への入力
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    insertionSort(n, array);
    return 0;
}
