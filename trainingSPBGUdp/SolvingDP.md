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
        int cur = a + max(prev, prev2);//дп переход, стоимость текущей ступеньки + максимум из dp[i-1] dp[i-2], в i мы можем попасть только двумя способами.
        prev = prev2;//двигаемся вперед dp[i-2] = dp[i-1]
        prev2 = cur;//dp[i-1] = dp[i]
    }
    cout << prev2 << '\n';//вывод от
}
```

<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEyODA3NjM0ODMsLTE1Mzk1NTg3MDQsLT
QxNDE4MDUxNiwtMjA4ODc0NjYxMl19
-->