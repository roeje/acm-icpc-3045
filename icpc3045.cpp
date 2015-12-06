//
// Created by Jesse on 12/5/2015.
// Done without using any data structures.
//

#include <iostream>
#include <sstream>

using namespace std;

void readData(istream& input) {
    int days = 0;
    while (input >> days) {

        /*base case*/
        if(days == 0) {
            break;
        }
        /*temp used for cout at end of test case*/
        int daysTemp = days;
        int pay = 0;
        int increment = 1;
        int itr = 1;

        /*Run for every day*/
        while (days != 0) {

            /*if the iterator equals 0, set it equal to the next pay level (increment)*/
            if(itr == 0) {

                /*Move increment to the next pay level*/
                increment++;

                /*start the loop over for the next set of days*/
                itr = increment;
            }
            pay += increment;
            itr--;
            days--;
        }
        cout << daysTemp << " " << pay << endl;
    }
}

int main() {

#ifndef ONLINE_JUDGE
    string tempData = "10\n"
            "6\n"
            "7\n"
            "11\n"
            "15\n"
            "16\n"
            "100\n"
            "10000\n"
            "1000\n"
            "21\n"
            "22\n"
            "0";

    istringstream data (tempData);
#else
    istream& data = cin;
#endif
    readData(data);
}