vi pre(n);
f(i, 0, n) pre[i] = (i - 1 >= 0 ? a[i] + pre[i - 1] : a[i]);

vi suf(n);
fr(i, n - 1, 0) suf[i] = (i + 1 < n ? suf[i + 1] + a[i] : a[i]);