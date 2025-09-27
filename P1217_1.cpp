// 循环结构
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    // len = 1
    for(int d1 = 5; d1 <= 9; d1 += 2)
    {
        if(d1 < a)
        {
            continue;
        }
        else if(d1 > b)
        {
            break;
        }
        else
        {
            bool is_prime = true;
            for(int k = 3; k * k <= d1; k += 2)
            {
                if(d1 % k == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if(is_prime)
            {
                cout << d1 << endl;
            }
        }
    }
    // len = 2
    for(int d1 = 1; d1 <= 9; d1 += 2)
    {
        int tmp = d1 * 10 + d1;
        if(tmp < a)
        {
            continue;
        }
        else if(tmp > b)
        {
            break;
        }
        else
        {
            bool is_prime = true;
            for(int k = 3; k * k <= tmp; k += 2)
            {
                if(tmp % k == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if(is_prime)
            {
                cout << tmp << endl;
            }
        }
    }
    // len = 3
    for(int d1 = 1; d1 <= 9; d1 += 2)
    {
        for(int d2 = 0; d2 <= 9; ++d2)
        {
            int tmp = d1 * 100 + d2 * 10 + d1;
            if(tmp < a)
            {
                continue;
            }
            else if(tmp > b)
            {
                break;
            }
            else
            {
                bool is_prime = true;
                for(int k = 3; k * k <= tmp; k += 2)
                {
                    if(tmp % k == 0)
                    {
                        is_prime = false;
                        break;
                    }
                }
                if(is_prime)
                {
                    cout << tmp << endl;
                }
            }
        }
    }
    // len = 4
    for(int d1 = 1; d1 <= 9; d1 += 2)
    {
        for(int d2 = 0; d2 <= 9; ++d2)
        {
            int tmp = d1 * 1000 + d2 * 100 + d2 * 10 + d1;
            if(tmp < a)
            {
                continue;
            }
            else if(tmp > b)
            {
                break;
            }
            else
            {
                bool is_prime = true;
                for(int k = 3; k * k <= tmp; k += 2)
                {
                    if(tmp % k == 0)
                    {
                        is_prime = false;
                        break;
                    }
                }
                if(is_prime)
                {
                    cout << tmp << endl;
                }
            }
        }
    }
    // len = 5
    for(int d1 = 1; d1 <= 9; d1 += 2)
    {
        for(int d2 = 0; d2 <= 9; ++d2)
        {
            for(int d3 = 0; d3 <= 9; ++d3)
            {
                int tmp = d1 * 10000 + d2 * 1000 + d3 * 100 + d2 * 10 + d1;
                if(tmp < a)
                {
                    continue;
                }
                else if(tmp > b)
                {
                    break;
                }
                else
                {
                    bool is_prime = true;
                    for(int k = 3; k * k <= tmp; k += 2)
                    {
                        if(tmp % k == 0)
                        {
                            is_prime = false;
                            break;
                        }
                    }
                    if(is_prime)
                    {
                        cout << tmp << endl;
                    }
                }
            }
        }
    }
    // len = 6
    for(int d1 = 1; d1 <= 9; d1 += 2)
    {
        for(int d2 = 0; d2 <= 9; ++d2)
        {
            for(int d3 = 0; d3 <= 9; ++d3)
            {
                int tmp = d1 * 100000 + d2 * 10000 + d3 * 1000 + d3 * 100 + d2 * 10 + d1;
                if(tmp < a)
                {
                    continue;
                }
                else if(tmp > b)
                {
                    break;
                }
                else
                {
                    bool is_prime = true;
                    for(int k = 3; k * k <= tmp; k += 2)
                    {
                        if(tmp % k == 0)
                        {
                            is_prime = false;
                            break;
                        }
                    }
                    if(is_prime)
                    {
                        cout << tmp << endl;
                    }
                }
            }
        }
    }
    // len = 7
    for(int d1 = 1; d1 <= 9; d1 += 2)
    {
        for(int d2 = 0; d2 <= 9; ++d2)
        {
            for(int d3 = 0; d3 <= 9; ++d3)
            {
                for(int d4 = 0; d4 <= 9; ++d4)
                {
                    int tmp = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                    if(tmp < a)
                    {
                        continue;
                    }
                    else if(tmp > b)
                    {
                        break;
                    }
                    else
                    {
                        bool is_prime = true;
                        for(int k = 3; k * k <= tmp; k += 2)
                        {
                            if(tmp % k == 0)
                            {
                                is_prime = false;
                                break;
                            }
                        }
                        if(is_prime)
                        {
                            cout << tmp << endl;
                        }
                    }
                }
            }
        }
    }
    // len = 8
    for(int d1 = 1; d1 <= 9; d1 += 2)
    {
        for(int d2 = 0; d2 <= 9; ++d2)
        {
            for(int d3 = 0; d3 <= 9; ++d3)
            {
                for(int d4 = 0; d4 <= 9; ++d4)
                {
                    int tmp = d1 * 10000000 + d2 * 1000000 + d3 * 100000 + d4 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                    if(tmp < a)
                    {
                        continue;
                    }
                    else if(tmp > b)
                    {
                        break;
                    }
                    else
                    {
                        bool is_prime = true;
                        for(int k = 3; k * k <= tmp; k += 2)
                        {
                            if(tmp % k == 0)
                            {
                                is_prime = false;
                                break;
                            }
                        }
                        if(is_prime)
                        {
                            cout << tmp << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}