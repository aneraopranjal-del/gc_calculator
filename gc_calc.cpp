// Roll No: 01 - Pranjal Anerao - M.Sc. Bioinformatics
// Practical 1 - GC Content Calculator
#include <iostream>
#include <string>
using namespace std;

int main() {
    string seq = "ATGCGATCGATCGAATTCG";
    int gc_count = 0;
    for (char base : seq) {
        if (base == 'G' || base == 'C') {
            gc_count++;
        }
    }
    double gc_percentage = (double(gc_count) / seq.length()) * 100.0;
    cout << "Student: Pranjal Anerao - Roll No: 01" << endl;
    cout << "Sequence: " << seq << endl;
    cout << "GC Content: " << gc_percentage << "%" << endl;
    cout << "Total Length: " << seq.length() << " bp" << endl;
    return 0;
}