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
            getline(cin,name);
            cout<<"\n ENTER AGE/JERSEY NO./ NO. OF MATCHES PLAYED: ";
            cin>>age>>jer_no>>nms;
        }
        void display(){
            cout<<name<<"\n"<<age<<"\n"<<jer_no<<"\n"<<nms;
        }

};
class Batsman: virtual public Cricket{
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
            cout<<"\n ENTER IN FOLLOWING ORDER-- RUNS--NO.OF HALF CENTURRIES--NO. OF CENTURIES--STRIKE RATE--HIGHEST SCORE--NO. OF SIXES--LONGEST SIX: ";
            cin>>runs>>half>>full>>str>>high>>nosix>>lngsix;
            bat_avg=runs/nms;
        }
        void display(){
            cout<<"\n BATTING STATS: ";
            cout<<"\n-RUNS-\t-BATTING AVERAGE-\t-HALF CENTURIES-\t-CENTURIES-\t-STRIKE RATE-\t-HIGHEST SCORE-\t-NO.OF SIXES-\t-LONGEST SIX-\n";
            cout<<runs<<"\t"<<bat_avg<<"\t"<<half<<"\t"<<full<<"\t"<<str<<"\t"<<high<<"\t"<<nosix<<"\t"<<lngsix;
        }

};
class Bowler: virtual public Cricket{
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
            cout<<"\n BOWLING STATS: ";
            cout<<"\n-WICKETS-\t-AVG BOWLING SPEED-\t-ECONOMY-\t-TYPE-\t-NO.OF HATTRICKS-\t-BESTFIGURE\n";
            cout<<wkts<<"\t"<<avg_spd<<"\t"<<eco<<"\t"<<type<<"\t"<<no_hat<<"\t"<<bsw<<"/"<<bsrun;
        }

};
class Allrounder: public Batsman, public Bowler{
    protected:
        int no_mom;
        int int_ms;
        int no_cat;
        int iccrank;
        int noofsty;
    public:
        void enter(){
            Cricket::enter();
            Batsman::enter();
            Bowler::enter();
            cout<<"\n ENTER IN FOLLOWING ORDER: NO. OF MAN OF MATCHES--NO.OF INTERNATIONAL MATCHES--NO.OF CATCHES--ICC RANKING--NO.OF STYLISH PLAYER AWARDS:";
            cin>>no_mom>>int_ms>>no_cat>>iccrank>>noofsty;
        }
        void display(){
            Cricket::display();
            Batsman::display();
            Bowler::display();
            cout<<"\n ALL ROUNDER STATS: ";
            cout<<"\n-MAN OF MATCHES-\t-INTERNATIONAL MATCHES-\t-NO.OF CATCHES-\t-ICC RANK-\t-NO.OF STYLISH PLAYER AWARDS\n";
            cout<<no_mom<<"\t"<<int_ms<<"\t"<<no_cat<<"\t"<<iccrank<<"\t"<<noofsty;
        }
};

int main(){
    Allrounder a1;
    a1.enter();
    a1.display();
    return 0;
}