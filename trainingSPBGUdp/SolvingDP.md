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
    cout << prev2 << '\n';//dp[n]
}
```

## B - Зайчик
```cpp
int define(char x){// функция перевода для удобства
    if(x == 'w')return -1001;//тк n <= 1000, берем -1001 как маркер недостижимости
    else if(x == '.')return 0;
    else return 1;
}

void solve() {
    int n;
    cin >> n;
    str s;
    cin >> s;
    vector<int> dp(n);//можно использовать 3 переменные как в прошлой задаче, чтобы не хранить весь массив

    
    dp[0] = define(s[0]);//базовый случай
     
    for(int i = 1; i < n; i++){//dp[1] начало
        int mx = dp[i-1];//начинаем считать максимум, dp[0] существует всегда, if не нужен
        if(i-3 >= 0)mx = max(mx, dp[i-3]);
        if(i-5 >= 0)mx = max(mx, dp[i-5]);//выбираем максимум из доступных предков

        dp[i] = mx + define(s[i]);//добавляем к максимальному предку текущую клетку.
    }
    if(dp[n-1] >= 0)cout << dp[n-1] << '\n';//если 
    else cout << -1 << '\n';   
}
```
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTY4MTA0Mjc2NSwtMTUzOTU1ODcwNCwtND
E0MTgwNTE2LC0yMDg4NzQ2NjEyXX0=
-->