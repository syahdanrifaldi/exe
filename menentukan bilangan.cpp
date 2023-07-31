#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    
    int sqrtNum = sqrt(num);
    for (int i = 2; i <= sqrtNum; i++) {
        if (num % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    int num;
    
    std::cout << "Masukkan sebuah bilangan: ";
    std::cin >> num;
    
    if (num > 0) {
        std::cout << num << " adalah bilangan asli." << std::endl;
        
        if (num % 2 == 0)
            std::cout << num << " adalah bilangan genap." << std::endl;
        else
            std::cout << num << " adalah bilangan ganjil." << std::endl;
        
        if (isPrime(num))
            std::cout << num << " adalah bilangan prima." << std::endl;
        else
            std::cout << num << " bukan bilangan prima." << std::endl;
    } else {
        std::cout << "Masukkan harus lebih besar dari 0." << std::endl;
    }
    
    return 0;
}

