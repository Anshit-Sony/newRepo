#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct job {
    int profit;
    int startTime;
    int endTime;
};

bool compareJobs(const job& a, const job& b) {
    return (a.profit / (a.endTime - a.startTime)) > (b.profit / (b.endTime - b.startTime));
}

int JobChoose(vector<job>& jobs, int n) {
    sort(jobs.begin(), jobs.end(), compareJobs);

    int cap = jobs.back().endTime; // Initialize with the maximum end time
    int final_profit = 0;

    for (int i = 0; i < n; i++) {
        if ((jobs[i].endTime - jobs[i].startTime) > 0 && (jobs[i].endTime - jobs[i].startTime) <= cap) {
            final_profit += jobs[i].profit;
            cap -= (jobs[i].endTime - jobs[i].startTime);
        }
    }
    return final_profit;
}

int main() {
    int n;
    cin >> n;
    
    vector<job> jobs(n);

    for (int i = 0; i < n; i++) {
        cin >> jobs[i].startTime;
    }
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].endTime;
    }
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].profit;
    }

    cout <<n;
    return 0;
}
