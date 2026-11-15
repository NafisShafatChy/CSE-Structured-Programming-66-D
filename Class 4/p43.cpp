#include<bits/stdc++.h>
using namespace std;
int calculateTotal(int quiz,int midterm,int finalExam) {
    return quiz+midterm+finalExam;
}
double calculatePercentage(int totalMarks,int maxMarks) {
    return ((double)totalMarks / maxMarks)*100.0;
}
char assignGrade(double percentage) {
    if(percentage>=80.0) return 'A';
    if(percentage>=60.0) return 'B';
    if(percentage>=50.0) return 'C';
    return 'F';
}
int main(){
    int quiz,mid,finalExam;
    cin>>quiz>>mid>>finalExam;
    int total=calculateTotal(quiz,mid,finalExam);
    double pct=calculatePercentage(total,100);
    char grade=assignGrade(pct);
    cout<<total<<"\n"<<pct<<"\n"<<grade<<"\n";
}
