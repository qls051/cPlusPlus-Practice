﻿// C++ PROJECT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

    //std::cout << "Enter side A: ";
    //std::cin >> a;
    
    //std::cout << "Enter side B: ";
    //std::cin >> b;

    //c = sqrt(pow(a, 2) + pow(b, 2));

    //std::cout << "side C: " << c;

#pragma endregion

#pragma region if

    //int age4;

    //std::cout << "Enter your age:";
    //std::cin >> age4;

    /*if (age4 >= 18) {
        std::cout << "Welcome to the site!";
    }
    else if (age < 0) {
        std::cout << "You haven't been born yet!";
    }
    else if (age >= 100) {
        std::cout << "You are too old to enter this site!";
    }
    else {
        std::cout << "Your are not old enough to enter!";
    }*/

#pragma endregion

#pragma region switch

    /*int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "1월";
        break;
    case 2:
        std::cout << "2월";
        break;
    default:
        std::cout << " 1-12 사이의 숫자만 입력하세요";
    }*/

    /*char grade2;

    std::cout << "What letter grade?: ";
    std::cin >> grade2;

    switch (grade2)
    {
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
                std::cout << "You did good!";
                break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'F':
            std::cout << "Pool";
            break;
    default:
        std::cout << "Please only enter in a letter grade (A-F)";
        break;
    }*/


#pragma endregion

#pragma region 간단한 계산기 프로그램

    /*char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";

    std::cout << "Enter either (+ _ * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op){
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result: " << result << '\n';
        break;
    default:
        std::cout << "That wasn't a valid response\n";
        break;
    }

    std::cout << "**********************************\n";*/

#pragma endregion

#pragma region 삼항 연산자

    //int grade3 = 75;
    //grade3 >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    //int number3 = 9;
    //number3 % 2 == 1 ? std::cout << "나머지 1" : std::cout << "나머지 0";
    
    //bool hungry = true;
    //hungry ? std::cout << "Yor are hungry" : std::cout << "You are full";
    //std::cout << (hungry ? "you ae hungry" : "you are full");

#pragma endregion

#pragma region 논리 연산자
    // &&, ||, !

    /*int temp;
    bool sunny = true;

    std::cout << "입력해라 온도: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) {
        std::cout << "온도 is good";
    }
    else {
    std:; cout << "The 온도 is bad";
    }

    if (!sunny) {
        std::cout << "It is cloudy outside";
    }
    else {
        std::cout << "It is sunny outside";
    }*/

#pragma endregion

#pragma region 온도 변환 프로그램

    /*double temp;
    char unit;

    std::cout << "******* Temperature conversion ********\n";
    std::cout << "F=Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would ou like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.9 * temp + 32.0);
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else {
        std::cout << "Please enter in only F or C";
    }

    std::cout << "***************\********\********\********\n";*/

#pragma endregion

#pragma region 닉네임 입력할때 유용한 함수들

    std::string name4;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name4);
    
    name4.append("@gmail.com");
    std::cout << "our username is now " << name4;

    /*if (name4.length() > 12) {
        std::cout << "Your name 12자 넘을 수 없음";
    }
    else if (name4.empty()) {
        std::cout << "이름이 비어있음";
    }
    else {
        std::cout << "Welcome " << name4;
    }*/

#pragma endregion


    return 0;
}
