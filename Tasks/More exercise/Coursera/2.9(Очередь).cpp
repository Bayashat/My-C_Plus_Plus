//  Основная идея решения — сохранить данные о том, беспокоится ли каждый из людей в очереди, в векторе булевских значений.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<bool> is_nervous;

    for (int i = 0; i < q; ++i)
    {
        string operation_code;
        cin >> operation_code;

        if (operation_code == "WORRY_COUNT")
        {

            // подсчитываем количество элементов в векторе is_nervous, равных true
            cout << count(begin(is_nervous), end(is_nervous), true) << endl;
        }
        else
        {
            if (operation_code == "WORRY" || operation_code == "QUIET")
            {

                int person_index;
                cin >> person_index;

                // выражение в скобках имеет тип bool и равно true для запроса WORRY,
                // поэтому is_nervous[person_index] станет равным false или true
                // в зависимости от operation_code
                is_nervous[person_index] = (operation_code == "WORRY");
            }
            else if (operation_code == "COME")
            {

                int person_count;
                cin >> person_count;

                // метод resize может как уменьшать размер вектора, так и увеличивать,
                // поэтому специально рассматривать случаи с положительным
                // и отрицательным person_count не нужно
                is_nervous.resize(is_nervous.size() + person_count, false);
            }
        }
    }

    return 0;
}
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int Q;
    cin >> Q;
    vector<int> v;

    int n = 0;
    while (n < Q){
        string s;
        cin >> s;
        if (s == "COME") {
            int k;
            cin >> k;
            int c = v.size() + k;
            v.resize(c, 0);
        } else if(s == "WORRY") {
            int i;
            cin >> i;
            v[i] = 1;
        } else if(s == "QUIET") {
            int i;
            cin >> i;
            v[i] = 0;
        } else if(s == "WORRY_COUNT") {
            int quanity = count(begin(v), end(v), 1);
            cout << quanity << endl;
        }
        n += 1;
    }

    return 0;
}
*/