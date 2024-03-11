#include <stdio.h>
#include <stdbool.h>

bool isAutomorphic(int N)
{
    if (N < 0) N = -N;

    // Store the square
    int sq = N * N;
    while (N > 0) {
        if (N % 10 != sq % 10)
            return false;

        // Reduce N and square
        N /= 10;
        sq /= 10;
    }

    return true;
}
int main()
{
    int N ;
    scanf("%d",&N);
    isAutomorphic(N) ? printf("Automorphic Number") : printf("Not an Automorphic Number");
    return 0;
}