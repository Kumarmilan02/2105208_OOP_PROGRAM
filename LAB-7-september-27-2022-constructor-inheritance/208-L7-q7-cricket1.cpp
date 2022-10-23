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
        int lngsix;
    public:
        Batsman(string n,int a,int j,int nm,int rs,int ha,int fu,float st,int hi,int six,int sixd):Cricket(n,a,j,nm){
            cout<<"\n BATSMAN CALLED";
            runs=rs;half=ha;full=fu;str=st;high=hi;
            nosix=six;lngsix=sixd;
            bat_avg=runs/nms;
        }
        void display(){
            cout<<"\n BATTING STATS: ";
            cout<<"\n-RUNS-\t-BATTING AVERAGE-\t-HALF CENTURIES-\t-CENTURIES-\t-STRIKE RATE-\t-HIGHEST SCORE-\t-NO.OF SIXES-\t-LONGEST SIX-\n";
            cout<<runs<<"\t"<<bat_avg<<"\t"<<half<<"\t"<<full<<"\t"<<str<<"\t"<<high<<"\t"<<nosix<<"\t"<<lngsix;
        }
        ~Batsman(){
            cout<<"\n BATSMAN DESTROYED.";
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
            cout<<"\n BOWLING STATS: ";
            cout<<"\n-WICKETS-\t-AVG BOWLING SPEED-\t-ECONOMY-\t-TYPE-\t-NO.OF HATTRICKS-\t-BESTFIGURE\n";
            cout<<wkts<<"\t"<<avg_spd<<"\t"<<eco<<"\t"<<type<<"\t"<<no_hat<<"\t"<<bsw<<"/"<<bsrun;
        }
        ~Bowler(){
            cout<<"\n BOWLER DESTROYED.";
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
        Allrounder(string n,int a,int j,int nm,int rs,int ha,int fu,float st,int hi,int six,int sixd,
        int wk,float spd,float ecn,int flg,int hat,int bwk,int bwkr,
        int man,int inter,int catches,int rank,int awd):Cricket(n,a,j,nm),Batsman(n,a,j,nm,rs,ha,fu,st,hi,six,sixd),
        Bowler(n,a,j,nm,wk,spd,ecn,flg,hat,bwk,bwkr){
            cout<<"\n ALL ROUNDER CALLED.";
            no_mom=man;
            int_ms=inter;
            no_cat=catches;
            iccrank=rank;
            noofsty=awd;                                 
        }
        void display(){
            cout<<"\n ================================================================================================\n";
            Cricket::display();
            Batsman::display();
            Bowler::display();
            cout<<"\n ALL ROUNDER STATS: ";
            cout<<"\n-MAN OF MATCHES-\t-INTERNATIONAL MATCHES-\t-NO.OF CATCHES-\t-ICC RANK-\t-NO.OF STYLISH PLAYER AWARDS\n";
            cout<<no_mom<<"\t"<<int_ms<<"\t"<<no_cat<<"\t"<<iccrank<<"\t"<<noofsty;
        }
        ~Allrounder(){
            cout<<"\n ALL ROUNDER DESTROYED";
        }
};
int main(){
    Allrounder a("R.Jadeja",33,8,171,2447,13,0,86.53,87,50,156,189,73.47,4.92,0,1,5,36,11,330,87,9,0);
    a.display();
    return 0;
}