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
        Cricket(string n,int a,int j,int nm){
            cout<<"\nCRICKET CONSTRUCTOR.";
            name=n;
            age=a;jer_no=j;
            nms=nm;
        }
        void display(){
            cout<<"\nName-\t\t-Age-\t-jersy no-\t-ODI matches\n";
            cout<<name<<"\t"<<age<<" \t"<<jer_no<<"\t\t"<<nms;
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
        Batsman(string n,int a,int j,int nm,int rs,int ha,int fu,float st,int hi,int six,int sixd):Cricket(n,a,j,nm){
            cout<<"\n BATSMAN CALLED";
            runs=rs;half=ha;full=fu;str=st;high=hi;
            nosix=six;lngsix=sixd;
            bat_avg=runs/nms;
        }
        void display(){
            Cricket::display();
            cout<<"\n BATTING STATS: ";
            cout<<"\n-RUNS-\t-BATTING AVERAGE-\t-HALF CENTURIES-\t-CENTURIES-\t-STRIKE RATE-\t-HIGHEST SCORE-\t-NO.OF SIXES-\t-LONGEST SIX-\n";
            cout<<runs<<"\t\t"<<bat_avg<<" \t\t"<<half<<" \t\t\t"<<full<<" \t\t"<<str<<" \t\t"<<high<<" \t\t"<<nosix<<" \t\t"<<lngsix;
        }
        ~Batsman(){
            cout<<"\n BATSMAN DESTROYED.";
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
        Bowler(string n,int a,int j,int nm,int wk,float spd,float ecn,int flg,int hat,int bwk,int bwkr):Cricket(n,a,j,nm){
            cout<<"\n BOWLER CALLED.";
           wkts=wk;avg_spd=spd;eco=ecn;flag=flg;
           no_hat=hat;
           bsw=bwk;
           bsrun=bwkr;
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
        ~Bowler(){
            cout<<"\n BOWLER DESTROYED.";
        }

};
int main(){
    Bowler b2("Bhubaneswar Kumar",32,15,121,141,35.11,5.08,1,1,5,42);
    Batsman b1("Rohit Sharma",35,45,233,9376,45,29,89.18,264,250,182);
    b1.display();
    cout<<"\n----------------------------------------------------------------------------------------\n";
    b2.display();
    return 0;
}