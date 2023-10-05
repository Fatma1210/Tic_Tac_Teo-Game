#include <bits/stdc++.h>
using namespace std;
double Gpa ;
double CoursePoints(double grade){
    double points ;
    if(grade >= 90 and grade <= 100) points = 4 ;
    else if (grade >= 85 and grade < 90) points = 3.7 ;
    else if (grade >= 80 and grade < 85) points = 3.3 ;
    else if (grade >= 75 and grade < 80) points = 3 ;
    else if (grade >= 70 and grade < 75) points = 2.7 ;
    else if (grade >= 65 and grade < 70) points = 2.4 ;
    else if (grade >= 60 and grade < 65) points = 2.2 ;
    else if (grade >= 50 and grade < 60) points = 2 ;
    else points = 0 ;
    return points ;
}
double GPA(double sumofpoints, int hours){
    Gpa = sumofpoints / hours ;
    return Gpa ;
}
int main() {
   int NumberOfCourses ,TotaHours = 0 ;
   cout << "Enter Number Of Courses You have registered : \n" ;
    cin >> NumberOfCourses ;
    double  TotalPoints = 0  ;
   for(int i = 0 ; i < NumberOfCourses ; ++i){
       double CourseGrade ;
       cout << "Enter a Course Grade : \n" ;
       cin >> CourseGrade ;
       int NumOfCourseHours ;
       cout << "Enter The Number Of Course hours : \n" ;
       cin >> NumOfCourseHours ;
       TotaHours += NumOfCourseHours ;
       TotalPoints += CoursePoints(CourseGrade) * NumOfCourseHours ;
   }
   cout << fixed << setprecision(2) <<GPA(TotalPoints , TotaHours) << endl;

    return 0;
}
