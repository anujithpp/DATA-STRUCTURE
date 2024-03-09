#include <iostream>

using namespace std;

class Strings {
    int LB, UB;
    char S[100]{};
public:
    Strings();

    Strings(int);

    int find_length() const;

    int compare(const Strings &);

    void concatenate(const Strings &);
};