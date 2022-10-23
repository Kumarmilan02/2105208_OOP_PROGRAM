#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Cricket{
    protected:
        string name;
        int age;
        int jer_no;
        int nms;
    public:
        void enter(){
            cout<<"\n ENTER NAME: ";
            cin.ignore();
            getline(cin,name);
            cout<<"\n ENTER AGE/JERSEY NO./ NO. OF MATCHES PLAYED: ";
            cin>>age>>jer_no>>nms;
        }
        void display(){
            cout<<name<<"\n"<<age<<"\n"<<jer_no<<"\n"<<nms;
        }

};
class Batsman: public Cricket{
    protected:
        int runs;
        float bat_avg;
        int half;
        int full;
        float str;
        int high;
        int nosix;
        float lngsix;
    public:
        void enter(){
            Cricket::enter();
            cout<<"\n ENTER IN FOLLOWING ORDER-- RUNS--NO.OF HALF CENTURRIES--NO. OF CENTURIES--STRIKE RATE--HIGHEST SCORE--NO. OF SIXES--LONGEST SIX: ";
            cin>>runs>>half>>full>>str>>high>>nosix>>lngsix;
            bat_avg=runs/nms;
        }
        void display(){
            Cricket::display();
            cout<<"\n BATTING STATS: ";
            cout<<"\n-RUNS-\t-BATTING AVERAGE-\t-HALF CENTURIES-\t-CENTURIES-\t-STRIKE RATE-\t-HIGHEST SCORE-\t-NO.OF SIXES-\t-LONGEST SIX-\n";
            cout<<runs<<"\t"<<bat_avg<<"\t"<<half<<"\t"<<full<<"\t"<<str<<"\t"<<high<<"\t"<<nosix<<"\t"<<lngsix;
        }

};
class Bowler: public Cricket{
    protected:
        int wkts;
        float avg_spd;
        float eco;
        int flag;
        string type;
        int no_hat;
        int bsw;
        int bsrun;
    public:
        void enter(){
            Cricket::enter();
            cout<<"\n ENTER IN FOLLOWING ORDER-- WICKETS--AVERAGE BOWLING SPEED--ECONOMY--NO.OF HATTRICKS--BEST BOWLING FIGURE: ";
            cin>>wkts>>avg_spd>>eco>>no_hat>>bsw>>bsrun;
            cout<<"\n ENTER 1 FOR PACER OR 0 FOR SPINNER: ";
            cin>>flag;
            if(flag==1){
                type="PACER";
            }
            else{
                type="SPINNER";
            }
        }
        void display(){
            Cricket::display();
            cout<<"\n BOWLING STATS: ";
            cout<<"\n-WICKETS-\t-AVG BOWLING SPEED-\t-ECONOMY-\t-TYPE-\t-NO.OF HATTRICKS-\t-BESTFIGURE\n";
            cout<<wkts<<"\t"<<avg_spd<<"\t"<<eco<<"\t"<<type<<"\t"<<no_hat<<"\t"<<bsw<<"/"<<bsrun;
        }

};
int main(){
    Bowler b1;
    Batsman ba1;
    b1.enter();
    ba1.enter();
    b1.display();
    ba1.display();
    return 0;
}