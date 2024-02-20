// C++ PROJECT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <string> // getline할 떄 필요
#include <cmath> // 수학

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

    //std::cout << firstName << '\n';
    //std::cout << age << '\n';
    // typedef와 using의 차이는 타입 별칭을 만들 수 있냐 없냐 using만 만들 수 있다.
    //using은 typedef보다 더 간결한 구문을 함수 포인터를 선언하는데 사용할 수 있다.
#pragma endregion

#pragma region 산술 연산자(+ - * /)

    int students = 20;

    //students += 1;
    //students++;

    //students *= 2;

    //students /= 2;

    //int remainder = students % 3; % 나머지 구하는거

    //std::cout << remainder;

#pragma endregion

#pragma region Type Conversion 명시적 형 변환

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    // double score = correct questions * 100을 하게 되면 questions이 int이기 때문에 0%가 나오지만
    // (double)로 형 변환을 해주면 80%가 나온다

    //std::cout << score << "%";

#pragma endregion

#pragma region User Input 사용자 입력

    std::string name3;
    int age3;

    //std::cout << "What's your name?: ";
    //std::cin >> name3; std::cin만 쓰면 공백이 출력안됨 Yebin Lee에서 Lee가 출력이 안됨
    //std::getline(std::cin >> std::ws , name3); // Yebin Lee 출력 가능 

    //std::cout << "당신은 몇살입니까?: ";
    //std::cin >> age3;

    //std:: cout << "Hello " << name3 << '\n';
    //std::cout << age3 << "살";

#pragma endregion

#pragma region 수학 관련 함수

    //double a = 3.99;
    //double b = 4;
    //double c;

   // c = std::max(a, b); // max는 더 큰 숫자 출력
   // c = std::min(a, b); // min는 더 큰 숫자 출력

    //c = pow(2, 3); // 2의 3제곱
    //c = pow(2, 4); // 2의 4제곱
    //c = sqrt(9);  // 매개변수로 들어온 숫자에 루트를 씌워서 계산한 값을 반환해줌 sqrt9는 루트9이기 때문에 반환하면 3
    //c = abs(-3); 절대값 함수
    //c = round(a); 반올림 함수 
    //c = ceil(a); //올림 함수
    //c = floor(a); //내림 함수

    //std::cout << c; 

#pragma endregion

#pragma region 직각 삼각형 빗변 구하기

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    
    std::cout << "Enter side B: ";
    std::cin >> b;

    /*a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);*/
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c;

#pragma endregion


    return 0;
}
