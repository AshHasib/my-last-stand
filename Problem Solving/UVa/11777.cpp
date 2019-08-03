#include<bits/stdc++.h>
using namespace std;

int main() {

    int T;
    scanf("%d",&T);

    for(int c=1;c<=T;c++) {

        double t1,t2, fin, attendance, ct1, ct2, ct3;
        string grade;
        scanf("%lf%lf%lf%lf%lf%lf%lf", &t1, &t2, &fin,
              &attendance, &ct1, &ct2, &ct3);

        double termFinal = t1+t2+fin+attendance;
        double avg;

        if(ct1<=ct2 && ct1<=ct3) {
            avg= (ct2+ct3)/2;
        }

        else if(ct2<=ct1 && ct2<=ct3) {
            avg= (ct1+ct3)/2;
        }
        else {
            avg= (ct1+ct2)/2;
        }

        double totGrade= termFinal+avg;


        if(totGrade>=90) {
            grade="A";
        }
        else if(totGrade<90 && totGrade>=80) {
            grade="B";
        }
        else if(totGrade<80 && totGrade>=70) {
            grade="C";
        }
        else if(totGrade<70 && totGrade>=60) {
            grade="D";
        }
        else {
            grade="F";
        }

        printf("Case %d: %s\n", c, grade.c_str());

    }

    return 0;
}
