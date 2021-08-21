/*              4. 结构体与容器

    * 容器可以存放自定义的结构体类型

*/
#include <iostream>
#include <vector>

using  namespace std;

struct car
{
    // 成员列表
    string id;
    string color;
    int max_speed;
    string brand;
    
    // 构造函数
    car(string id, string brand, string color, int max_speed)
    {
        this->id = id;
        this->brand = brand;
        this->color = color;
        this->max_speed = max_speed;
    }
    // 成员方法
    void print()
    {
        cout << this->id << " " << color << " " << max_speed << " " << brand << endl;
    }
};

int main() 
{
    car car1("1","volvo","red",300);
    car car2("2","bmw","yellow",500);
    car car3("3","camry","black",250);

    vector<car> cars({car1, car2, car3});

    for(int i = 0; i < cars.size(); ++i)
    {
        cars[i].print();
    }

    return 0;
}
