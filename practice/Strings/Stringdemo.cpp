#include "Strings.cpp"

int main() {
    int ub1, ub2;
    cout << "Enter upper bound: ";
    cin >> ub1;
    Strings s1(ub1);
    int len = s1.find_length();
    cout << "STRING LENGTH:" << len << endl;
    cout << "Enter the upper bound:";
    cin >> ub2;
    Strings s2(ub2);
    int comp = s1.compare(s2);
    cout << "Compared value:" << comp << endl;
    s1.concatenate(s2);
    return 0;
}