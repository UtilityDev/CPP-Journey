#include <iostream>

class Log { // Log class
public:
    static void Write(const char* message) {  // Static function with a 'message' parameter
        std::cout << message << std::endl;    // Printing out the message using standard output
    }
};

// Program entry point
int main() {
    Log::Write("Hello World!");  // Using our class to write 'Hello World' to the console
}
