#include <iostream>

using namespace std;

void cipher(int seed) {
    static unsigned int g_seed;
    g_seed = (unsigned int)seed;
    char Chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int str_length = sizeof(Chars) - 1;
    cout << "\n0" << Chars;
    for (int i = 0; i < str_length; i++) {
        cout << "\n" << Chars[i];
        for (int j = 0; j < str_length; j++) {
            g_seed = (214013 * g_seed + 2531011);
            cout << Chars[((g_seed >> 16) & 0x7FFF) % str_length];
        }
    }
}

int main(void) {
    int seed;
    cout << "Type a seed: ";
    cin >> seed;

    cipher(seed);

    return 0;
}
