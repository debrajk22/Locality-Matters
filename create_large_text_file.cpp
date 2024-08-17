#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("large_text_file8.txt");
    if (file.is_open()) {
        long long n = 8e9;
        for (long long i = 0; i < n; i++) {
            file << "1";
        }
        file.close();
        cout << "File created and written successfully." << endl;
    } else {
        cout << "Unable to create or open the file." << endl;
    }

    return 0;
}