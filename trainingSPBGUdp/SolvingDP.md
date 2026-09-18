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
    for(int i = 2; i <= n; i++){//начинаем с dp[2]
        int a;
        cin >> a;//стоимость i ступеньки
        int cur = a + max(prev, prev2);//дп переход, стоимость текущей ступеньки + максимум из dp[i-1] dp[i-2],
        prev = prev2;
        prev2 = cur;
    }
    cout << prev2 << '\n';
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbODI4MzA2MDA1LC0xNTM5NTU4NzA0LC00MT
QxODA1MTYsLTIwODg3NDY2MTJdfQ==
-->