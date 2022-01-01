#include <iostream>
#include <cstdio>

double doMath(int sRooms, int lRooms);

int main() {
    int sRooms = 0;
    int lRooms = 0;




    std::cout << "Hello, how many Small Rooms would you like cleaned?" << "\n";
    std::cin >> sRooms;
    std::cout << "Hello, how many Large Rooms would you like cleaned?" << "\n";
    std::cin >> lRooms;

    double total = doMath(sRooms, lRooms);
    std::cout << "Your total is : " << total;


    return 0;
}

double doMath(int sRooms, int lRooms) {
    double smallRoomFee = 25.00;
    printf("Small Room Fee: %4.2f \n", smallRoomFee);
    double largeRoomFee = 35.00;
    printf("Large Room Fee: %4.2f \n", largeRoomFee);
    double salesTax = .06;
    printf("Sales Tax: %4.2f \n", salesTax);

    double total = (((sRooms * smallRoomFee) + (lRooms * largeRoomFee)) * salesTax) + (sRooms * smallRoomFee) + (lRooms * largeRoomFee);
    return total;
}

