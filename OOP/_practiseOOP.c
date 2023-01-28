#include <stdio.h>
#include <string.h>

// int getAdd(int num) {
//     int rem = 0;
//     while (num != 0) {
//         rem += num % 10;
//         num /= 10;
//     }
//     return rem;
// }

int deleteAll (char *p, int size, char ch) {
    
    for (int i = 0; i < size; ++i) {
        if (*(p + i) == ch) {
            for (int j = i; j < size - 1; ++j) {
                // arr[j] = arr[j + 1];
                *(p + j) = *(p + j + 1);
            }            
            size--;
        }
        
    }
    return size;
}
int main() {
    // int n, x, y, result;
    // printf ("Enter 3 Numbers ie. N, X and Y");
    // scanf("%d %d %d", &n, &x, &y);
    // int num1 = n;
    // while (1) {
    //     if (num1 % x == 0 && num1 % y == 0) {
    //         result = num1;
    //         break;
    //     }
    //     num1--;
    // }
    // printf ("%d", result);

    // for (int i = 1; i <= 5; ++i) {
    //     for (int j = 1; j <= i; ++j) {
    //         if (j == i)
    //             printf ("%d ", i);
    //         else printf ("%d ", i-1);
    //     }
    //     printf("\n");
    // }

    // printf ("Enter Number N and D");
    // int n, d;
    // scanf("%d %d \n", &n, &d);
    // int temp = d;

    // for (int i = 1; i <= n; i += 2) {
    //     if (temp == d) {
    //        printf ("%d ", i);
    //        temp = 0;
    //     }
    //     temp++;
    // }


    // printf ("Enter Number N");
    // int n;
    // scanf("%d\n", &n);

    // for (int i = 1; j <= n; ++i) {
    //     for (int j = i; j <= n; ++j) {
    //         if (calGCD(i,j) == 1)
    //             printf ("[%d, %d]", i, j)
    //     }
    // }

    // int N;
    // printf ("Enter N \n");
    // scanf("%d", &N);
    // while (N >= 10) {
    //     N = getAdd(N);
    // }
    // printf ("%d", N);



    // Array 5Jan
    // int n, result, ar[10001];
    // printf ("Enter Size of Array \n");
    // scanf ("%d", &n);
    
    // printf ("Enter Array Elements \n");
    // for (int i = 0; i < n; ++i) {
    //     scanf("%d", &ar[i]);
    // }
    // int min = 100001, smin = 100001;
    // for (int i = 0; i < n; ++i) {
    //     if (min > ar[i]) {
    //         smin = min;
    //         min = ar[i];
    //     }
    // }
    // printf ("%d %d", min, smin);


    // int n, ar[10][10];
    // printf ("Enter Order of Matrix \n");
    // scanf ("%d", &n);
    
    // printf ("Enter Array Elements \n");
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         scanf("%d", &ar[i][j]);
    //     }
    // }

    // int diagonal = 1;
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         if (ar[i][i] == 0) {
    //             printf ("1 : %d %d \n", i, j);
    //             diagonal = 0;
    //         }
    //         if (i != j && ar[i][j] != 0) {
    //             printf ("2 : %d %d \n", i, j);
    //             diagonal = 0;
    //         }
    //     }
    // }
    // if (diagonal == 1)
    //     printf ("Given Matrix is a Diagonal Matrix \n");
    // else printf ("Given Matrix is not a Diagonal Matrix \n");
    

    // int zeroes = 0;
    // int check = 66*n*n;
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         if (ar[i][j] == 0)
    //             ++zeroes;
    //     }
    // }
    // if (zeroes * 100 >= check)
    //     printf ("Given Matrix is a Sparse Matrix \n");
    // else printf ("Given Matrix is not a Sparse Matrix \n");


    // Pointer and Structure

    // printf ("Enter Size of  Character Array \n");
    // scanf ("%d", &size);

    char ar[] = {"NITJSRJRKD"};
    int size = strlen(ar);
    // char ar[101];

    // printf ("Enter the Elements of the Array. \n");
    // for (int i = 0; i < size; ++i) {
    //     scanf ("%c", &ar[i]);
    // }

    printf ("Enter the Character to be deleted \n");
    char ch;
    scanf ("%c", &ch);
    char *p = &ar[0];

    printf ("Array before Operation .. \n");
    for (int i = 0; i < size; ++i) {
        printf ("%c ", ar[i]);
    } 
    printf ("\n");
    int count = deleteAll(p, size, ch);

    printf ("Array after Operation .. \n");
    for (int i = 0; i < count; ++i) {
        printf ("%c ", ar[i]);
    }
}
