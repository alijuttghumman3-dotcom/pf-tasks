#include<iostream>
using namespace std;
 main()
{
    string username[3],password[3];
    string name[3];
    string course[3];
    int age[3];
    int choice;
    bool login= false;
    for(int n=0 ; n<3 ; n++)
    {
        cout<<"enter the username ";
        cin >> username[n];
        cout<<"enter the password ";
        cin >> password[n];
        if(username[n]=="admin" && password[n]=="1234")
        {
            login=true;
            cout<<"LOGIN SUCCESSFUL "<<endl;
            break;
        }
        else 
        {
            cout<<"LOGIN FAILED"<<endl;
        }
        if(n== 2 && username[n]!="admin" && password[n]!="1234")
        {
            cout<<"too many attempt. program ends "<<endl;
        }
    }
    int studentcount=0;
    int studentcourse=0;
    if(login==true)
    {
    while(true)
    {
        cout<<endl<<"--------university manangement system---------"<<endl;
        cout<<"1. ADD STUDENT "<<endl;
        cout<<"2. VIEW STUDENT"<<endl;
        cout<<"3. ADD COURSE  "<<endl;
        cout<<"4. VIEW COURSES"<<endl;
        cout<<"5. EXIT "<<endl;
    
    cout<<"enter the choice ";
    cin >> choice;
    if(choice==1)
    {
        if(studentcount < 3)
        {
        cout<<"enter student name ";
        cin >> name[studentcount];
        cout<<"enter the student age ";
        cin >> age[studentcount];
        cout<<"student added successfully "<<endl;
        studentcount++;
        // if(name[i]!='\0'&& age[i]!='')
        // {
        //     i=i+1;
        // }
        }
    
    }
     else if(choice==2)
    {
        for(int i=0 ; i<studentcount ; i++)
        {
            cout<<"Student "<<(i+1)<<": "<<name[i]<<" age: "<<age[i]<<endl;
        }
        // else
        // {
        //     cout<<"no record found "<<endl;
        // }
    }
      else if(choice==3)
    {
        if(studentcourse < 3 )
        {
        cout<<"enter the course name ";
        cin>> course[studentcourse];
        cout<<"course added successfully "<<endl;
        studentcourse++;
        }
    }
     else  if(choice==4)
    {
        for(int i=0;i<studentcourse;i++)
        {
            cout<<"Courses are  "<<course[i]<<endl;
        }

        // else
        // {
        //     cout<<"no record found "<<endl;
        // }
    }    
     else if(choice==5)
    {
        cout<<"program ends "<<endl;
        break;
    }
    else{
        cout<<"invalid choice "<<endl;
    }

    }
    }
}