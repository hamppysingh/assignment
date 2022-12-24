#include<bits/stdc++.h>
using namespace std;

class newspaper{
    private:
        string name;
        float data[7];
        float sum;

    public:
        newspaper() {
            // cout << "\nEnter the Name:";
            cin >> name;
            // cout << "\nEnter the Day wise values:";
            int s=0;
            for(int i=0;i<7;i++) {
                float a;
                cin>>a;
                s+=a;
                data[i]=a;
            }
            sum=s;
        }
        string ret_name() {
            return name;
        }
        float ssum() {
            return sum;
        }
        float ret_day_amount(int day) {
            return data[day];
        }
};

void solve(newspaper data[],int papers, int limit){
    for(int i=0;i<papers-1;i++) {
        for(int j=i+1;j<papers;j++) {
            if (data[i].ssum()+data[j].ssum()<=limit) {
                cout<<"{"<<data[i].ret_name()<<","<<data[j].ret_name()<<"}";
            }
        }
    }
    cout<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int total_newspaper,total_cases;
    cin>>total_newspaper;
    newspaper data[total_newspaper];
    cin>>total_cases;
    while(total_cases--) {
        float budget;
        cin>>budget;
        solve(data,total_newspaper,budget);
    }
    return 0;
}