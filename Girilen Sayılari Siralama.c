#include<stdio.h>

#define MAX_SIZE 5

void selection_sort(int[]);

int main() {
    int arr_sort[MAX_SIZE], i;

    printf("%d adet eleman giriniz\n\n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d", &arr_sort[i]);

    printf("\nGirilen sayilar:");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("\t%d", arr_sort[i]);
    }

    selection_sort(arr_sort);
    getch();

}

void selection_sort(int fn_arr[]) {
    int i, j, a, b, c;

    for (i = 0; i < MAX_SIZE; i++) {
        c = i;
        for (j = i; j < MAX_SIZE; j++) {
            if (fn_arr[c] > fn_arr[j])
                c = j;
        }

        if (c != 1) {

            b = fn_arr[i];
            fn_arr[i] = fn_arr[c];
            fn_arr[c] = b;
        }


    }

    printf("\n\nSiralanan elamanlar:");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("\t%d", fn_arr[i]);
    }
}
