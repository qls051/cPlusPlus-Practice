// C++ PROJECT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <string> // getline할 떄 필요
#include <cmath> // 수학
#include <ctime> // 시간
#include <iomanip>

//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int; // typedef로 한 것과 같음

void happyBrithday(std::string brithdaygirl, int age5) {
    std::cout << "생일 축하해 " << brithdaygirl << '\n';
    std::cout << "생일 축하해 " << age5 << "살 생일" << '\n';
} // 사용자 정의 함수

namespace first {
    int x = 1;
}

//double square(double length);

//std::string concatStrings(std::string string1, std::string string2);

/*void bakePizza();
void bakePizza(std::string topping1);*/

/*int myNum = 3;

void printNum();*/

/*void showBalance(double balance);
double deposiit();
double withdraw(double balance);*/

/*char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);*/

double getTotal(double prices[], int size);

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

    //text_t firstName = "Bro";
    //number_t age2 = 21;

    //std::cout << firstName << '\n';
    //std::cout << age << '\n';
    // typedef와 using의 차이는 타입 별칭을 만들 수 있냐 없냐 using만 만들 수 있다.
    //using은 typedef보다 더 간결한 구문을 함수 포인터를 선언하는데 사용할 수 있다.
#pragma endregion

#pragma region 산술 연산자(+ - * /)

    //int students = 20;

    //students += 1;
    //students++;

    //students *= 2;

    //students /= 2;

    //int remainder = students % 3; % 나머지 구하는거

    //std::cout << remainder;

#pragma endregion

#pragma region Type Conversion 명시적 형 변환

    //int correct = 8;
    //int questions = 10;
    //double score = correct / (double)questions * 100;
    // double score = correct questions * 100을 하게 되면 questions이 int이기 때문에 0%가 나오지만
    // (double)로 형 변환을 해주면 80%가 나온다

    //std::cout << score << "%";

#pragma endregion

#pragma region User Input 사용자 입력

    //std::string name3;
    //int age3;

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

    //double a;
    //double b;
    //double c;

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

#pragma region 닉네임 입력할 때 유용한 함수들

    //std::string name4;

    /*std::cout << "Enter your name: ";
    std::getline(std::cin, name4);*/

    /*name4.append("@gmail.com");
    std::cout << "our username is now " << name4;*/

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

#pragma region While문

    /*std::string name4;

    while(name4.empty())
    {
        std::cout << "이름을 입력하세요: ";
        std::getline(std::cin, name4);
    }

    std::cout << "Hello " << name4;*/


#pragma endregion

#pragma region do while문

    /*int number4 = 0;
    do
    {
    std::cout << "양수를 입력하요:";
    std::cin >> number4;
    } while (number4 < 0);
    std::cout << "입력된 숫자는:" << number4;*/

#pragma endregion

#pragma region for문

    /*for (int i = 3; i >= 1; i--) {
    std::cout << i << '\n';
    }
    std::cout << "Happ new year";*/

#pragma endregion

#pragma region Break & continue

    /*for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            //break; // 13에서 멈춘다
            //continue // 13 건너뜀
        }
        std::cout << i << '\n';
    }*/

#pragma endregion

#pragma region 중첩 loops

    /*int 행;
    int 열;
    char 기호;

    std::cout << "행을 입력하세요: ";
    std::cin >> 행;

    std::cout << "열을 입력하세요: ";
    std::cin >> 열;

    std::cout << "기호를 입력하세요: ";
    std::cin >> 기호;

    for (int i = 1; i <= 행; i++) {
        for (int j = 1; j <= 열; j++) {
            std::cout << 기호;
        }
        std::cout << '\n';
    }*/

#pragma endregion

#pragma region 난수 생성

    /*srand(time(NULL));

    int num = (rand() % 100) + 1; // 1 ~ 100까지 랜덤한 숫자 

    std::cout << num;*/


#pragma endregion

#pragma region 무작위 이벤트 생성기

    /*srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1: std::cout << "You win a bumper sticker\n";
        break;
    case 2: std::cout << "You win a t-shirt\n";
        break;
    case 3: std::cout << "You win a free lunch\n";
        break;
    case 4: std::cout << "You win a gift card\n";
        break;
    case 5: std::cout << "You win a concert tickets\n";
        break;
    }*/

#pragma endregion

#pragma region 숫자 추측 게임

    /*int num;          // 랜덤으로 생성된 숫자
    int guess;        // 사용자의 추측값
    int tries = 0;     // 시도 횟수

    srand(time(NULL));
    num = (rand() % 100) + 1;  // 1부터 100까지의 랜덤 숫자 생성

    std::cout << "---------- 숫자 추측 게임 ----------" << std::endl;

    do {
    std::cout << " 1~100까지 숫자 중 추측하세요: ";
    std::cin >> guess;
    tries++;

    if (guess > num) {
        std::cout << "너무 높아요" << std::endl;
    }
    else if (guess < num) {
        std::cout << "너무 낮아요" << std::endl;
    }
    else {
        std::cout << "정답! 시도 횟수: " << tries << '\n';
    }
}   while (guess != num);
    std::cout << "----------------------------------" << std::endl;*/

#pragma endregion

#pragma region 사용자 정의 함수
    
    /*std::string name4 = "예빈";
    int age5 = 18;

    happyBrithday(name4, age5);*/
    
#pragma endregion

#pragma region Return
    
    /*double length = 5.0;
    double area = square(length);

    std::cout << "Area: " << area << "cm^2\n";*/

    /*std::string firstName = "Lee";
    std::string lastName = "Yebin";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName;*/

#pragma endregion

#pragma region Overloaded functions

    //bakePizza("pepperoni");
    //return 0;

#pragma endregion

#pragma region Variable scope 변수의 유효 범위

    //int myNum = 1;
    //printNum();

#pragma endregion

#pragma region Banking practice project
    
    /*double balance = 0;
    int choice = 0;

    do {
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std:: cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1: showBalance(balance);
            break;
        case 2: balance += deposiit();
                showBalance(balance);
            break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
            break;
        case 4:std::cout << "Thanks for visiting!";
            break;
        default:std::cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);  */
    
#pragma endregion

#pragma region 가위바위보 게임

    /*char player;
    char computer;

    player = getUserChoice();
    std::cout << "You choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);*/

#pragma endregion

#pragma region Arrays

    /*std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Mustang";

    std::cout << cars[0] << '\n';
    std::cout << cars[1];*/

#pragma endregion

#pragma region sizeof()

    /*std::string name1 = "Bro";
    double gpa = 2.5;
    char grade1 = 'F';
    bool student1 = true;
    char grades[] = { 'A', 'B', 'C', 'D', 'E', 'F'};

    std::cout << sizeof(gpa) << " bytes\n";*/
    
#pragma endregion

#pragma region Iterate over an array 배열 반복

    //std::string students[] = { "스폰지밥", "패트릭", "Squidward", "샌디"};

    /*char grades[] = {'A','B','C','D','E','F'};
    for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
        std::cout << grades[i] << '\n';
    }*/

#pragma endregion

#pragma region foreach loop

    /*std::string students[] = {"스폰지밥", "패트릭", "Squidward", "샌디"};

    for (std::string student : students) {
        std::cout << student << '\n';
    }*/

    /*int grades[] = {83,93,2,18};

    for (int grade : grades) {
        std::cout << grade << '\n';
    }*/
    
#pragma endregion

#pragma region Pass array to a function

    double prices[] = { 49.99, 28.0, 94,94.8 };
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;
    
#pragma endregion


    return 0;
}
/*double square(double length) {
    return length * length;
}*/

/*std::string concatStrings(std::string string1, std::string string2) {
    return string1 + " " + string2;
}*/

/*void bakePizza() {
    std::cout << "Here is your pizza\n";
}
void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizzz\n";
}*/

/*void printNum() {
    int myNum2 = 2;
    std::cout << myNum;
}*/

/*void showBalance(double balance) {
    std::cout << "Your balance is: $"<< std::setprecision(2)<< std::fixed << balance << '\n';
}
double deposiit() {
    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "That's not a valid amount: ";
        return 0;
    }
}
double withdraw(double balance) {
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std:: cin >> amount;

    if (amount > balance) {
        std::cout << "insufficient funds\n";
        return 0;
    }
    else if (amount < 0) {
        std::cout << "That;s not a val;id amount\n";
    }
    else {
        return amount;
    }
    return amount;
}*/

/*char getUserChoice() {
    char player;
    std::cout << "가위바위보 게임\n";

    do {
        std::cout << "Choose one of the following\n";
        std::cout << "***************************\n";
        std::cout << "'r' 주먹\n";
        std::cout << "'p' 보자기\n";
        std::cout << "'s' 가위\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

      return player;
}
char getComputerChoice() {

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1 : return 'r';
    case 2 : return 'p';
    case 3 : return 's';

    }
    return 0;
}
void showChoice(char choice) {

    switch (choice)
    {
    case 'r': std::cout << "주먹\n";
        break;
    case 'p': std::cout << "보자기\n";
        break;
    case 's':std::cout << "가위\n";
        break;
    default:
        break;
    }
}
void chooseWinner(char player, char computer) {
    switch (player) {
    case 'r':   if (computer=='r') {
        std::cout << "비겼다!\n";
                    }
                 else if (computer == 'p') {
        std::cout << "졌다";
                    }
                 else {
        std::cout << "이겼다!";
                    }
    case 'p':   if (computer == 'r') {
        std::cout << "이겼다!\n";
    }
            else if (computer == 'p') {
        std::cout << "비겼다!";
    }
            else {
        std::cout << "졌다!";
    }
    case 's':   if (computer == 'r') {
        std::cout << "졌다!\n";
    }
            else if (computer == 'p') {
        std::cout << "이겼다";
    }
            else {
        std::cout << "비겼다!";
    }
}
}*/

double getTotal(double prices[], int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += prices[i];
    }

    return total;
}


