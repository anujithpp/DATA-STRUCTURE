#include "Strings.h"

Strings::Strings() {
    LB = 0;
    UB = 0;
}

Strings::Strings(int ub) {
    LB = 0;
    UB = ub;
    cout << "Enter String elements: ";
    for (int i = LB; i < UB; i++) {
        cin >> S[i];
    }
    // Add a null terminator at the end of the string
    S[UB] = '\0';
}

int Strings::find_length() const {
    int i = 0;
    while (S[i] != '\0') {
        i++;
    }
    return i;
}

int Strings::compare(const Strings &s) {
    int i = 0;
    while (S[i] == s.S[i] and S[i] != '\0' and s.S[i] != '\0') {
        i++;
    }
    return S[i] - s.S[i];
}

void Strings::concatenate(const Strings &s) {
    int l1 = this->find_length();
    int l2 = s.find_length();
    int l3 = l1 + l2;

    char *s3 = new char[l3 + 1]; // Allocate memory for the concatenated string

    for (int i = 0; i < l1; i++) {
        s3[i] = S[i];
    }
    for (int i = 0; i < l2; i++) {
        s3[l1 + i] = s.S[i];
    }
    s3[l3] = '\0'; // Null-terminate the concatenated string

    cout << "Concatenated String: " << s3 << endl;

    delete[] s3; // Deallocate memory
}
