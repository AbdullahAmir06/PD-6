#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    string signUpName,signUpPassword,signInName,signInPassword,username,password,course1="NV",course2="NV",course3="NV",course4="NV",course5="NV",course;
    int option,choice,hour1=0,hour2=0,hour3=0,hour4=0,hour5=0,hour,total_hours;
    float gPoint1,gPoint2,gPoint3,gPoint4,gPoint5,gp1,gp2,gp3,gp4,gp5,GPA;
    char grade1,grade2,grade3,grade4,grade5;

    cout<<"************************************************************"<<endl;
    cout<<setw(19)<<" "<<"GPA Calculation System"<<endl<<endl;
    cout<<"************************************************************"<<endl<<endl;
    cout<<"1. Log in as Admin "<<endl;
    cout<<"2. Proceed as Student "<<endl;
    cout<<"0. Exit "<<endl<<endl;
    cout<<"************************************************************"<<endl<<endl;
    cout<<"Enter Input: ";
    cin>>option;
    cout<<endl;
    
    if(option ==0)                                                                                //if option = 0 program closes immediately
    cout<<"Program Closed Successfully!";
    if(option ==1){
            cout<<"Username: ";
            cin>>username;
            cout<<"Password: ";
            cin>>password;
            cout<<endl;
            if(username !="admin" || password !="admin123")
            cout<<"Invalid Login"<<endl;
    }
    while(option !=0){                                                                          //if option != 0 program goes here
        switch (option){
        case 0:
        cout<<"Program Closed Successfully!";
        break;

        case 1:                                                         
            if(username=="admin" && password =="admin123"){      
            cout<<"************************************************************"<<endl;
            cout<<setw(15)<<" "<<"GPA Calculation System (Admin)"<<endl<<endl;
            cout<<"************************************************************"<<endl<<endl;
            cout<<"1. Add a course"<<endl;
            cout<<"2. Edit a course"<<endl;
            cout<<"3. Delete a course"<<endl;
            cout<<"4. Display all courses"<<endl;
            cout<<"0. Exit "<<endl;
            cout<<"Enter Input: ";
            cin>>choice;
            while(choice !=0){
            if(choice ==1 ){
                cout<<endl<<"Enter Course Name: ";
                cin>>course;
                cout<<endl<<"Enter Credit Hours: ";
                cin>>hour;
                if(course1=="NV"){
                    course1=course;
                    hour1=hour;
                    cout<<endl<<endl<<"Course Added Successfully."<<endl;
                }
                else
                if(course2=="NV"){
                    course2=course;
                    hour2=hour;
                    cout<<endl<<endl<<"Course Added Successfully."<<endl;
                }
                else
                if(course3=="NV"){
                    course3=course;
                    hour3=hour;
                    cout<<endl<<endl<<"Course Added Successfully."<<endl;
                }
                else
                if(course4=="NV"){
                    course4=course;
                    hour4=hour;
                    cout<<endl<<endl<<"Course Added Successfully."<<endl;
                }
                else
                if(course5=="NV"){
                    course5=course;
                    hour5=hour;
                    cout<<endl<<endl<<"Course Added Successfully."<<endl;
                }
                else
                cout<<endl<<endl<<"Course list  is full."<<endl;
            }
            if(choice==2){
                cout<<"Enter course name to edit: ";
                cin>>course;
                cout<<"Enter new credit hours: ";
                cin>>hour;
                if(course != course1 && course != course2 && course != course3 && course != course4 && course != course5)
                    cout<<"Course not found!"<<endl;
                else    
                if(course==course1){
                    hour1=hour;
                    cout<<"Course updated successfully!"<<endl;
                }
                if(course==course2){
                    hour2=hour;
                    cout<<"Course updated successfully!"<<endl;
                }
                if(course==course3){
                    hour3=hour;
                    cout<<"Course updated successfully!"<<endl;
                }
                if(course==course4){
                    hour4=hour;
                    cout<<"Course updated successfully!"<<endl;
                }
                if(course==course5){
                    hour5=hour;
                    cout<<"Course updated successfully!"<<endl;
                }
            }
            if(choice==3){
                cout<<"Enter course name to delete: ";
                cin>>course;
                if(course != course1 && course != course2 && course != course3 && course != course4 && course != course5)
                    cout<<"Course not found!"<<endl;
                else    
                if(course==course1){
                    course1="NV";
                    hour1=0;
                    cout<<"Course deleted successfully! "<<endl;
                }
                if(course==course2){
                    course2="NV";
                    hour2=0;
                    cout<<"Course deleted successfully! "<<endl;
                }
                if(course==course3){
                    course3="NV";
                    hour3=0;
                    cout<<"Course deleted successfully! "<<endl;
                }
                if(course==course4){
                    course4="NV";
                    hour4=0;
                    cout<<"Course deleted successfully! "<<endl;
                }
                if(course==course5){
                    course5="NV";
                    hour5=0;
                    cout<<"Course deleted successfully! "<<endl;
                }
            }
            if(choice==4){
                cout<<endl<<endl<<endl<<"Course Name"<<setw(25)<<"Credit Hours"<<endl;
                if(course1 =="NV" && course2 =="NV" && course3=="NV" && course4=="NV" && course5=="NV")
                    cout<<endl<<"No courses available"<<endl<<endl;
                else
                    if(course1 !="NV")
                        cout<<setw(5)<<course1<<setw(25)<<hour1<<endl;
                    if(course2 !="NV")
                        cout<<setw(5)<<course2<<setw(25)<<hour2<<endl;
                    if(course3 !="NV")
                        cout<<setw(5)<<course3<<setw(25)<<hour3<<endl;
                    if(course4 !="NV")
                        cout<<setw(5)<<course4<<setw(25)<<hour4<<endl;
                    if(course5 !="NV")
                        cout<<setw(5)<<course5<<setw(25)<<hour5<<endl<<endl<<endl;
            }       
            cout<<"************************************************************"<<endl<<endl;
            cout<<"1. Add a course"<<endl;
            cout<<"2. Edit a course"<<endl;
            cout<<"3. Delete a course"<<endl;
            cout<<"4. Display all courses"<<endl;
            cout<<"0. Exit "<<endl;
            cout<<"Enter Input: ";
            cin>>choice;
        }    
            }                                                                                  //case 1 if bracket
            break;
        case 2:
            cout<<endl<<endl<<"1.Sign up"<<endl;
            cout<<"2.Sign in"<<endl;
            cout<<"0.Exit"<<endl;
            cin>>choice;
            if(choice==1){
                cout<<setw(15)<<"Sign up Menu"<<endl;
                cout<<"Enter Your Name: ";
                cin>>signInName;
                cout<<"Enter Your Password: ";
                cin>>signInPassword;
                cout<<endl<<"Account created successfully!";
            }
            if(choice==2){
                cout<<setw(15)<<"Sign in Menu"<<endl;
                cout<<"Enter Your Name: ";
                cin>>signUpName;
                cout<<"Enter Your Password: ";
                cin>>signUpPassword;
                if(signInName==signUpName && signInPassword==signUpPassword){
                    cout<<endl<<endl<<"************************************************************"<<endl;
                    cout<<setw(13)<<" "<<"GPA Calculation System (Student)"<<endl<<endl;
                    cout<<"************************************************************"<<endl<<endl;            
                    cout<<"1. View all courses"<<endl;
                    cout<<"2. Enter grades and calculate semester GPA "<<endl;
                    cout<<"0. Exit"<<endl<<endl;
                    cout<<"************************************************************"<<endl;
                    cout<<"Enter Input: ";
                    cin>>choice;
                    while(choice != 0){
                        if(choice==1){
                            cout<<endl<<endl<<"Name: "<<signInName<<endl<<endl;
                            cout<<"Courses"<<setw(30)<<"Credit Hours"<<endl;
                            if(course1 =="NV" && course2 =="NV" && course3=="NV" && course4=="NV" && course5=="NV")
                                cout<<endl<<"No courses added by the admin yet."<<endl<<endl;
                            else
                                if(course1 !="NV")
                                    cout<<setw(5)<<course1<<setw(25)<<hour1<<endl;
                                if(course2 !="NV")
                                    cout<<setw(5)<<course2<<setw(25)<<hour2<<endl;
                                if(course3 !="NV")
                                    cout<<setw(5)<<course3<<setw(25)<<hour3<<endl;
                                if(course4 !="NV")
                                    cout<<setw(5)<<course4<<setw(25)<<hour4<<endl;
                                if(course5 !="NV")
                                    cout<<setw(5)<<course5<<setw(25)<<hour5<<endl<<endl<<endl;
                        }
                        if(choice==2){
                            if(course1 =="NV" && course2 =="NV" && course3=="NV" && course4=="NV" && course5=="NV")
                                cout<<endl<<"No courses added by the admin yet."<<endl<<endl;
                            else
                            {
                                if(course1 !="NV"){
                                    cout<<"Enter grade for "<<course1<<":";
                                    cin>>grade1;
                                    if(grade1=='A')
                                        gPoint1=4.0;
                                    if(grade1=='B')
                                        gPoint1=3.2;
                                    if(grade1=='C')
                                        gPoint1=2.7;
                                    if(grade1=='D')
                                        gPoint1=2.0;
                                    if(grade1=='F')
                                        gPoint1=1.0;
                                    gp1=gPoint1*hour1;
                                }
                                if(course2 !="NV"){
                                    cout<<"Enter grade for "<<course2<<":";
                                    cin>>grade2;
                                    if(grade2=='A')
                                        gPoint2=4.0;
                                    if(grade2=='B')
                                        gPoint2=3.2;
                                    if(grade2=='C')
                                        gPoint2=2.7;
                                    if(grade2=='D')
                                        gPoint2=2.0;
                                    if(grade2=='F')
                                        gPoint2=1.0;
                                    gp2=gPoint2*hour2;
                                }
                                if(course3 !="NV"){
                                    cout<<"Enter grade for "<<course3<<":";
                                    cin>>grade3;
                                    if(grade3=='A')
                                        gPoint3=4.0;
                                    if(grade3=='B')
                                        gPoint3=3.2;
                                    if(grade3=='C')
                                        gPoint3=2.7;
                                    if(grade3=='D')
                                        gPoint3=2.0;
                                    if(grade3=='F')
                                        gPoint3=1.0;
                                    gp3=gPoint3*hour3;
                                }
                                if(course4 !="NV"){
                                    cout<<"Enter grade for "<<course4<<":";
                                    cin>>grade4;
                                    if(grade4=='A')
                                        gPoint4=4.0;
                                    if(grade4=='B')
                                        gPoint4=3.2;
                                    if(grade4=='C')
                                        gPoint4=2.7;
                                    if(grade4=='D')
                                        gPoint4=2.0;
                                    if(grade4=='F')
                                        gPoint4=1.0;
                                    gp4=gPoint4*hour4;
                                }
                                if(course5 !="NV"){
                                    cout<<"Enter grade for "<<course5<<":";
                                    cin>>grade5;
                                    if(grade5=='A')
                                        gPoint5=4.0;
                                    if(grade5=='B')
                                        gPoint5=3.2;
                                    if(grade5=='C')
                                        gPoint5=2.7;
                                    if(grade5=='D')
                                        gPoint5=2.0;
                                    if(grade5=='F')
                                        gPoint5=1.0;
                                    gp5=gPoint5*hour5;
                                }   
                                total_hours=hour1+hour2+hour3+hour4+hour5;           
                                GPA=(gp1+gp2+gp3+gp4+gp5)/total_hours;
                                cout<<endl<<endl<<"Your semester GPA is "<<GPA<<endl;
                            } 
                        }                                                                    // choice 2 bracket
                        cout<<"1. View all courses"<<endl;
                        cout<<"2. Enter grades and calculate semester GPA "<<endl;
                        cout<<"0. Exit"<<endl<<endl;
                        cout<<"************************************************************"<<endl;
                        cout<<"Enter Input: ";
                        cin>>choice;
                    }                                                                       // while loop bracket
                }
                if(signInName != signUpName  && signInPassword != signUpPassword)
                    cout<<endl<<endl<<"Invalid Credentials"<<endl;                          //wrong credential output
        }                                                                                   // choice 2 bracket    
            break;
        default :
            if(option<0 || option>2)  
            cout<<endl<<"Invalid Option"<<endl<<endl;

        }                                                                                   //switch statement bracket
            cout<<endl<<endl<<"1. Log in as Admin "<<endl;
            cout<<"2. Proceed as Student "<<endl;
            cout<<"0. Exit "<<endl<<endl;
            cout<<"************************************************************"<<endl<<endl;
            cout<<"Enter Input: ";
            cin>>option;
            if(option==1){
                cout<<"Username: ";
            cin>>username;
            cout<<"Password: ";
            cin>>password;
            cout<<endl;
            if(username !="admin" || password !="admin123")
            cout<<"Invalid Login"<<endl;
            }


        }                                                                                   //while loop bracket

}                                                                                           // main block

    
