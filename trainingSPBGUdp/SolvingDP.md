## А - Лестница

```cpp
void solve() {
    int n;
    cin >> n;
    
    int prev = 0;
    int prev2;
    cin >> prev2;
	//вместо хранения вектора дп, храним всего два элемента
	//тк для решения задачи нам нужно всего два последних элемента
    for(int i = 2; i <= n; i++){
        int a;
        cin >> a;
        int cur = a + max(prev, prev2);
        prev = prev2;
        prev2 = cur;
    }
    cout << prev2 << '\n';
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE1Mzk1NTg3MDQsLTQxNDE4MDUxNiwtMj
A4ODc0NjYxMl19
-->