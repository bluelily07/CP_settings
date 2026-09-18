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
eyJoaXN0b3J5IjpbLTU2Mzc5NTg5MCwtNDE0MTgwNTE2LC0yMD
g4NzQ2NjEyXX0=
-->