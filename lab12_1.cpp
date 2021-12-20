#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string randGrade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";

    cin.get();
    cin.get();
    cin.get();

    srand(time(0));
    int i = rand() % 9;
    
    cout << "You will get "<<randGrade[i] <<" in this 261102.\n";
    return 0;
}
