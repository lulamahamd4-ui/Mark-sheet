#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main (){
char name[5][20];
int mark[5][3];
int total[5];
float average[5];
int top =0;
for (int i=0; i<5; i++){
cout <<"enter student name:"<<endl;
cin.getline(name[i],20);
total[i]=0;
for (int j=0; j<3; j++){
cout <<"enter student`s mark";
cin >>mark[i][j];
total[i]+=mark[i][j];}
average[i]=total[i]/3;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
for(int i=0;i<5;i++){
 if(total[i] > total[top]){
 top = i;}
}
cout << "\n";
cout << left
     << setw(20) <<"name"
     << setw(10) <<"M1"
     << setw(10) <<"M2"
     << setw(10) <<"M3"
     << setw(10) <<"total"
     << setw(10) <<"average"<<endl;
     for (int i=0;i<5;i++){
     cout << left << setw(20)<<name[i];
     for (int j=0; j<3;j++ ){
     cout << setw(10) << mark[i][j];
     }
     cout << setw(10) <<total[i]<< fixed <<setprecision(1)
          << average[i] <<endl;
          }
          cout<<"\nTop student: "<< name[top] <<endl;
          return 0;
}
