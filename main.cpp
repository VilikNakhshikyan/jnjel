#include <iostream>
#include <stack>

int main()
{
    int a[]{1, 2, 3, 4, 5, 6, 7};
    std::stack<int> revers;
    for (auto i : a)
        revers.push(i);
    for (auto &i : a)
    {
        i = revers.top();
        revers.pop();
    }
}