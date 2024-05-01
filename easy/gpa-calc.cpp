#include <bits/stdc++.h>
using namespace std;

void menu() { cout << "1. Calculate GPA\n2. Calculate CGPA\n3. Quit\n"; }

void calcgpa() {
    cout << "Subject points: ";
    int sp;
    cin >> sp;

    vector<float> credit(sp);
    vector<float> point(sp);

    cout << endl;

    for (int i = 0; i < sp; ++i) {
        cout << "Credit for subject " << i + 1 << ": ";
        cin >> credit[i];
    }

    float sum = 0;
    float tot;
    for (int i = 0; i < sp; ++i) {
        cout << "Point for subject " << i + 1 << ": ";
        cin >> point[i];
        tot = credit[i] * point[i];
        sum += tot;
    }

    float totCr = 0;
    for (int i = 0; i < sp; ++i) totCr += credit[i];

    cout << "\n\n Total points: " << sum
         << ". Total credits: " << totCr
         << ". Total GPA: " << sum / totCr << ".\n";
}

void calccgpa() {
    cout << "Semester results: ";
    int sr;
    cin >> sr;
    cout << endl;

    vector<float> smstr(sr);

    for (int i = 0; i < sr; ++i) {
        cout << "Semester " << i + 1 << ": ";
        cin >> smstr[i];
    }

    float semtot = 0;
    for (int i = 0; i < sr; ++i) semtot += smstr[i];

    cout << "CGPA: " << semtot / sr << endl;
}

int main() {
    while (true) {
        menu();
        cout << "Enter your choice: ";
        int ch;
        cin >> ch;

        switch (ch) {
            case 1:
                calcgpa();
                break;
            case 2:
                calccgpa();
                break;
            case 3:
                exit(0);
            default:
                cout << "Wrong input!\n";
                break;
        }
    }

    return 0;
}
