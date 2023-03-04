#include <iostream>
#include <stdexcept>

using namespace std;
bool check_range(int num)
{
    if(num > 200)
    {
        throw out_of_range("범위를 벗어났습니다");
    }
    return true;
}

int main()
{
    int num1;
    cout << "범위 0~200 까지의 정수를 입력하세요: "; 
    cin >> num1;
    try
    {
        if(check_range(num1))
            cout << "올바른 입력입니다.";
    }
    catch(out_of_range ex)
    {
        cout << ex.what() << endl;
    }

    return 0;

}
