#include <stdio.h>
#include <stdlib.h>
int path(int n, int m)
{
    int i, j, possiblePath = 0;
    if( n == 0 || m == 0) return 1;
    else {return path(n - 1, m - 1) + path(n, m - 1) + path(n - 1, m);}

}
int main()
{
    int n, m, possiblePath;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    possiblePath = path(n - 1, m - 1);
    printf("the number of the possible paths is: %d", possiblePath);
    return 0;
}
