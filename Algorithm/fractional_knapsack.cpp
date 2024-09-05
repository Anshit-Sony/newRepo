#include<iostream>
using namespace std;

struct item{
    float profit;
    float weight;
};

float knapsack(struct item items[],int cap,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((items[i].profit/items[i].weight)<(items[j].profit/items[j].weight)){
                struct item temp=items[i];
                items[i]=items[j];
                items[j]=temp;
            }
        }
    }

    int i=0;
    float finalProfit=0;
    while(i<n && cap>=items[i].weight){
        finalProfit+=items[i].profit;
        cap-=items[i].weight;
        i++;
    }

    if(i<n && cap!=0){
        finalProfit+=(items[i].profit/items[i].weight)*cap;
    }
    return finalProfit;
}
int main(){
    int n;
    cout<<"Enter the value of item: ";
    cin>>n;
    struct item items[n];
    cout<<"Enter the profits: ";
    for(int i=0;i<n;i++){
        cin>>items[i].profit;
    }
    cout<<"Enter the weight: ";
    for(int i=0;i<n;i++){
        cin>>items[i].weight;
    }

    cout<<knapsack(items,15,n);
    return 0;
}