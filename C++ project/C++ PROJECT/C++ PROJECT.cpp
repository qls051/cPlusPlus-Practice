// C++ PROJECT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int; // typedef로 한 것과 같음

namespace first {
    int x = 1;
}
int main()
{
#pragma region 기본 C++

    // 간단한 출력
    //std::cout << "I like pizza!\n";
    //std::cout << "It;s really good!\n";

    // 선언
    int z = 5;
    int y = 6;
    int sum = z + y;

    //std::cout << z << '\n';
    //std::cout << y << '\n';
    //std::cout << sum << '\n';

    // integer (whole number)
    int age = 21;
    int year = 2024;
    int days = 7.5;

    // double (number including decimal)
    double price = 10.99;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char currency = '$';

    // boolean (ture or false)
    bool student = true;

    // string
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 fake st.";

   // std::cout << "Hello " << name << '\n';
    //std::cout << "You are " << age << "years old";

#pragma endregion

#pragma region const

    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    //std::cout << circumference << "cm";

    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

#pragma endregion

#pragma region Namespaces

    int x = 0;

    //std::cout << x; // x = 0 출력
    // std::cout << first::x; // x = 1 출력

    using namespace std;

    string name2 = "bro";
    //cout << "Hello " << name2; // std::cout할떄 std 생략 가능
    
#pragma endregion

#pragma region Typedef

    text_t firstName = "Bro";
    number_t age2 = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';
    // typedef와 using의 차이는 타입 별칭을 만들 수 있냐 없냐 using만 만들 수 있다.
    //using은 typedef보다 더 간결한 구문을 함수 포인터를 선언하는데 사용할 수 있다.
#pragma endregion

    
    return 0;
}
