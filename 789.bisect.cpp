#include <iostream>
const int N = 100010;
int n, q, x, a[N];

int main()
{
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    while (q--) 
    {
        scanf("%d", &x);
        int l = 0, r = n - 1;
        // >=x first loc
        while (l < r) 
        {
            int mid = l + r >> 1;
            if (a[mid] >= x) r = mid;
            else l = mid + 1;
        }
        if (a[l] != x)
        {
            printf("-1 -1\n");
            continue;
        }
        int l1 = 0, r1 = n - 1;
        while (l1 < r1)
        {
            int mid = l1 + r1 + 1 >> 1;
            if (a[mid] <= x) l1 = mid;
            else r1 = mid - 1;
        }
        printf("%d %d\n", l, l1);
    }
    return 0;
}