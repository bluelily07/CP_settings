## А - Лестница

```cpp
void solve() {
    int n;
    cin >> n;
    
    int prev = 0;//базовый случай (dp[0] = 0)
    int prev2;
    cin >> prev2;//считываем dp[1]
	//вместо хранения вектора дп, храним всего два элемента
	//тк для решения задачи нам нужно всего два последних элемента
    for(int i = 2; i <= n; i++){
        int a;
        cin >> a;//стоимость i ступеньки
        int cur = a + max(prev, prev2);
        prev = prev2;
        prev2 = cur;
    }
    cout << prev2 << '\n';
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE3MDIwNTA4MiwtMTUzOTU1ODcwNCwtND
E0MTgwNTE2LC0yMDg4NzQ2NjEyXX0=
-->