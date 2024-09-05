#include<iostream>
using namespace std;

struct job {
    int profit;
    int startTime;
    int endTime;
};

int JobChoose(struct job jobs[], int n) {
    int cap = 100000;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int denom_i = jobs[i].endTime - jobs[i].startTime;
            int denom_j = jobs[j].endTime - jobs[j].startTime;
            
            if (denom_i == 0 || denom_j == 0) continue; // Skip division by zero
            
            if ((jobs[i].profit / denom_i) < (jobs[j].profit / denom_j)) {
                struct job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    int i = 0;
    int final_profit = 0;
    while (i < n) {
    if (i == 0 && (jobs[i].endTime - jobs[i].startTime) < cap) {
        final_profit += jobs[i].profit;
        cap -= (jobs[i].endTime - jobs[i].startTime);
        i++;
    } else {
        bool canSelect = true;
        for (int j = 0; j < i; j++) {
            if (!(jobs[i].startTime >= jobs[j].endTime || jobs[i].endTime <= jobs[j].startTime)) {
                canSelect = false;
                break;
            }
        }
        
        if (canSelect && (jobs[i].endTime - jobs[i].startTime) < cap) {
            final_profit += jobs[i].profit;
            cap -= (jobs[i].endTime - jobs[i].startTime);
            i++;
        } else {
            i++;
        }
    }
}
    return final_profit;
}

int main() {
    int n;
    cin >> n;
    struct job jobs[n];
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].startTime;
    }
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].endTime;
    }
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].profit;
    }

    cout << "Final_profit: " << JobChoose(jobs, n)+1;
    return 0;
}
