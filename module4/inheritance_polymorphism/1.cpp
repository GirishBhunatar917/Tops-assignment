#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int matchesPlayed;
public:
    void inputData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter matches played: ";
        cin >> matchesPlayed;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;
public:
    void calculateAverageRuns() {
        averageRuns = totalRuns / matchesPlayed;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }

    void inputData() {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();

    return 0;
}
