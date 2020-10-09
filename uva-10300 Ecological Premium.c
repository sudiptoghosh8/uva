#include<stdio.h>
  int main() {
    long long a, t, n, b, c, i, j, ans;
    while (scanf("%lld", & t) == 1) {
      for (i = 0; i < t; i++) {
        ans = 0;
        scanf("%lld", & n);
        for (j = 0; j < n; j++) {
          scanf("%lld%lld%lld", & a, & b, & c);
          ans += a * c;
        }
        printf("%lld\n", ans);
      }
    }
    return 0;
  }
