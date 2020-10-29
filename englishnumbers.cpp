#include <iostream>
#include <math.h>
#include <string>
#include <vector>

int main(){
    int x;
    std::cout << "Введите число, которое хотите преобразовать" << std::endl;
    std::cin >> x;
    int r = x/100;
    int t = x%100;
    int l = t/10;
    int u = t%20-10;
    int y = t%10;
    int r1 = x/1000;
    int g = r1%100;
    int t1 = r1%100;
    int l1 = g/10;
    int u1 = r1%20-10;
    int y1 = r1%10;
    int r2 = x/1000000;
    int g1 = r2%100;
    int t2 = r2/100;
    int l2 = g1/10;
    int u2 = r2%20-10;
    int y2 = r2%10;
    int r3 = x/1000000000;
    int g2 = r3%100;
    int t3 = r3/100;
    int l3 = g2/10;
    int u3 = r3%20-10;
    int y3 = r3%10;
    if ( x >= 1000){
        r1 = x/1000/100;
        r = x%1000/100;
    }
    if ( x >= 1000000){
        r = x%1000/100;
        r1 = x%1000000/1000/100;
        r2 = x/100000000;
    }
    if ( x >= 1000000000){
        r = x%1000/100;
        r1 = x%1000000/1000/100;
        r2 = x/10000000000;
        r3 = x/1000000000000;
    }
    
    


    std::cout << t1 << std::endl;   // Проверка
    std::cout << l1 << std::endl;  // Проверка
    std::cout << t << std::endl;  // Проверка
    std::cout << l << std::endl; // Проверка
    std::cout << u << std::endl; // Проверка
    std::cout << y << std::endl; // Проверка
    std::cout << r << std::endl; // Проверка
    std::cout << r3 << std::endl; // Проверка

    std::vector <std::string> arr1 = {
        " ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    std::vector <std::string> arr2 = {
        "ten", "eleven", "twelwe", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    std::vector <std::string> arr3 = {
        " ", " ", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" 
    };
    if ( r3 > 0){
        std::cout << arr1[r3] << " hundred ";
    }
    if (g2>19){
        std::cout << arr3[l3] << " ";
    }else if (g2 <= 19 && g2 >= 10){
        std::cout << arr2[u3] << " ";
    }
    if (y3 > 0 && g2 != 10 && g2 != 11 && g2 != 12 && g2 != 13 && g2 != 14 && g2 != 15 && g2 != 16 && g2 != 17 && g2 != 18 && g2 != 19){
        std::cout << arr1[y3] << " ";
    }
    std::cout << " billion ";
    if ( r2 > 0){
        std::cout << arr1[r2] << " hundred ";
    }
    if (g1>19){
        std::cout << arr3[l2] << " ";
    }else if (g1 <= 19 && g1 >= 10){
        std::cout << arr2[u2] << " ";
    }
    if (y2 > 0 && g1 != 10 && g1 != 11 && g1 != 12 && g1 != 13 && g1 != 14 && g1 != 15 && g1 != 16 && g1 != 17 && g1 != 18 && g1 != 19){
        std::cout << arr1[y2] << " ";
    }
    std::cout << " millon ";
    if ( r1 > 0){
        std::cout << arr1[r1] << " hundred ";
    }
    if (g>19){
        std::cout << arr3[l1] << " ";
    }else if (t1 <= 19 && t1 >= 10){
        std::cout << arr2[u1] << " ";
    }
    if (y1 > 0 && t1 != 10 && t1 != 11 && t1 != 12 && t1 != 13 && t1 != 14 && t1 != 15 && t1 != 16 && t1 != 17 && t1 != 18 && t1 != 19){
        std::cout << arr1[y1] << " ";
    }
    std::cout << " thousand ";
    if ( r > 0){
        std::cout << arr1[r] << " hundred ";
    }
    if (t>19){
        std::cout << arr3[l] << " ";
    }else if (t <= 19 && t >= 10){
        std::cout << arr2[u] << " ";
    }
    if (y > 0 && t != 10 && t != 11 && t != 12 && t != 13 && t != 14 && t != 15 && t != 16 && t != 17 && t != 18 && t != 19){
        std::cout << arr1[y] << " ";
    }
}