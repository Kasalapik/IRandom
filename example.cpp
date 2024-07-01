#include "IRandom.h"
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    char b;
    int start, end, num;
    cout << "IRandom V 1.0";
    cout << endl << "Starting number (included)"<< endl;
    cin >> start;
    cout << endl << "Ending number (included)" << endl;
    cin >> end;
    cout << endl << "Numbers to generate" << endl;
    cin >> num;
    for (int i=0; i < num; i++){
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << irandom(start, end) << ' ';
    }
    cout << endl << "Press any character and enter to close"<< endl;
    cin>>b;
    return 0;
}