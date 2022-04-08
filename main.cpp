//
// How to compile and run this program?
//
// clang++ -Wall -std=c++17 -stdlib=libc++ main.cpp -o test
// && ./test
//
#include <cstdint>
#include <iostream>

using namespace std;

//
//
//
int add_together(int number_one, int number_2) {
    return number_one + number_2;
}

//
//
//
void show_info(char *name) {}

//
//
//
int main() {
    cout << "Hi, I'm Fion:)" << endl;

    uint8_t my_version = 0xFF;
    bool is_success = true;

    if (is_success) {
        cout << "'is_success' is equal to 'true'!!!\n\n";
    }

    show_info((char *)"asfasdf");

    int add_result = add_together(45, -99);
    cout << add_result << "\n\n";

    //
    // C++14 feature
    //
    auto return_value_itself = [](auto x) { return x; };

    int int_value = return_value_itself(888);
    string string_value = return_value_itself("Wison Ye");

    cout << "int_value :" << int_value << "\n";
    cout << "string_value :" << string_value << "\n";

    return 0;
}
