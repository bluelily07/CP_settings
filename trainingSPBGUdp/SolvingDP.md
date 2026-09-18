## А - Лестница
```cpp
void solve() {
    int n;
    cin >> n;
    
    int prev = 0;
    int a;
    cin >> a;

    int prev2 = a;

    for(int i = 2; i <= n; i++){
        int a2;
        cin >> a2;
        int cur = a2 + max(prev, prev2);
        prev = prev2;
        prev2 = cur;
    }
    cout << prev2 << '\n';
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTQxNDE4MDUxNiwtMjA4ODc0NjYxMl19
-->