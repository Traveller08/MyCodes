#include<bits/stdc++.h>
using namespace std;
class Library
{
private:
    int id_student = 0;
    int id_teacher = 0;
    map<int,int>fine_students;                                       // no of books of each type in the library
    map<int, stack<tuple<int, string, string>>> record_students; // roll no of student, <id of the book, name of the book, issue date>
    map<int, stack<tuple<int, string, string>>> record_teachers; // roll no of student, <id of the book, name of the book, issue date
    map<int, pair<string, bool>> students_store;                 // id, name, issued or not
    map<int, pair<string, bool>> teachers_store;

public:
           void add_book(string, bool); // parameter (name of the book, stdent/teacher))
           void distributer(string, bool);
           void add_to_students_store(string);
           void add_to_teachers_store(string);
           int get_id_student(string);  // returns the id of the book with given name from students store
           int get_id_teacher(string);  // returns the id of the book with given name from teachers store
       
          void test_func();
          void submit_student(int,int,string);   // roll_no, id_of_book , date of submission , 
          bool check_due_book(int);                 // check wehether a student has submitted all the previously issued books or not...............parameters(roll no of the student)
          void issue_student(string,string,int);          // name of book, date of issue of book,roll no of the student
          void issue_teacher(string,string,int);
          void submit_teacher(int,int,string);
   
    ~Library();
};
vector<int> date_converter(string dt)
{
    string dd = "", mm = "", yy = "";
    vector<int> dte(3);
    dd.push_back(dt[0]);
    dd.push_back(dt[1]);
    mm.push_back(dt[3]);
    mm.push_back(dt[4]);
    yy.push_back(dt[6]);
    yy.push_back(dt[7]);
    yy.push_back(dt[8]);
    yy.push_back(dt[9]);

    stringstream ss1(dd), ss2(mm), ss3(yy);
    ss1 >> dte[0];
    ss2 >> dte[1];
    ss3 >> dte[2];
    return dte;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   ** Library Methods ** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
void Library::add_book(string s, bool flag)
{
    distributer(s, flag);
    return;
}
void Library::distributer(string s, bool flag1)
{
    // students store -> if flag ==true
    if (flag1)
        add_to_students_store(s);
    else
        add_to_teachers_store(s);
    return;
}
void Library::add_to_students_store(string name11)
{
    students_store[++id_student] = make_pair(name11, false);
    cout << "Book successfully added to students's store...." << endl;
    return;
}
void Library::add_to_teachers_store(string name11)
{
    teachers_store[++id_teacher] = make_pair(name11, false);
    cout << "Book successfully added to teacher's store...." << endl;
    return;
}




void Library::test_func()
{
    cout << "Students store size -> " << students_store.size() << endl;
    cout << "Teachers store sixe -> " << teachers_store.size() << endl;
}
Library::~Library() {}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~    ** Students Methods **    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

bool Library::check_due_book(int roll_no)
{
    if (record_students[roll_no].empty())
        return false;
    else
        return true;
}
int Library::get_id_student(string name_of_the_book)
{
    int id1 = -1;
    for (auto it = students_store.begin(); it != students_store.end(); ++it)
    {
        if (it->second.first == name_of_the_book and it->second.second == false)
        {
            id1 = it->first;
            break;
        }
    }
    return id1;
}
void Library::issue_student(string book_name,string todays_date, int roll_no)
{
    if (check_due_book(roll_no))
    {
        cout << "Book cannot be issued !! Please Submit all the due books " << endl;
        return;
    }
    else
    {
        int id = get_id_student(book_name);
        if (id == -1)
        {
            cout << "Sorry!! This book is currently not available :( " << endl;
        }
        else
        {
            record_students[roll_no].push(make_tuple(id, book_name, todays_date));
            students_store[id].second=true;
            cout << "Book issued successfully" << endl;
        }
    }
    return;
}

void Library::submit_student(int roll_no,int id,string submission_date){
       vector<int>issueDate=date_converter(get<2>(record_students[roll_no].top()));
       vector<int>submissionDate=date_converter(submission_date);
       int iss_days=(issueDate[2]-1)*365+(issueDate[1]-1)*30+issueDate[0];
       int sub_days=(submissionDate[2]-1)*365+(submissionDate[1]-1)*30+submissionDate[0];
       int fine=0;
       if(sub_days-iss_days<=15)fine=0;
       else if(sub_days-iss_days>15 and issueDate[2]==submissionDate[2])fine=(sub_days-iss_days-15)*5;
       else fine=(sub_days-iss_days-15)*10;
       if(sub_days-iss_days<0)cout<<"Error !! Please Enter a valid submission date."<<endl;
       else {
           cout<<"Your fine is : "<<fine<<endl;
           cout<<"Press 'y' to pay now or 'n' to pay later : ";
           char a;
           cin>>a;
           if(a=='y' or a=='Y'){
               cout<<"Book submitted successfully..."<<endl;
               cout<<"Remaining fine = Rs. 0 "<<endl;
               record_students[roll_no].pop();
               students_store[id].second=false;
                          }
           else if(a=='n' or a=='N'){
               cout<<"Book submitted successfully..."<<endl;
               record_students[roll_no].pop();
               fine_students[roll_no]+=fine;
                  cout<<"Remaining fine = Rs. "<<fine_students[roll_no]<<endl;
                  students_store[id].second=false;
           }
           else cout<<"Error !! Please provide a valid input"<<endl;
       }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     ** Teachers methods  ** ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
int Library::get_id_teacher(string name_of_the_book)
{
    int id1 = -1;
    for (auto it = teachers_store.begin(); it != teachers_store.end(); ++it)
    {
        if (it->second.first == name_of_the_book and it->second.second == false)
        {
            id1 = it->first;
            break;
        }
    }
    return id1;
}
void Library::issue_teacher(string book_name,string todays_date, int roll_no){
    int id = get_id_teacher(book_name);
        if (id == -1)
        {
            cout << "Sorry!! This book is currently not available :( " << endl;
        }
        else
        {
            record_teachers[roll_no].push(make_tuple(id, book_name, todays_date));
            teachers_store[id].second=true;
            cout << "Book issued successfully" << endl;
        }
}
void Library::submit_teacher(int roll_no,int id,string submission_date){
            cout<<"Book submitted successfully..."<<endl;
               record_teachers[roll_no].pop();
               teachers_store[id].second=false;
}
int main()
{
   Library L1;
   L1.add_book("maths",true);
   L1.add_book("english",true);
   L1.add_book("history",false);
   L1.issue_student("maths","07/10/2022",23);
   L1.submit_student(23,1,"27/10/2022");
   L1.issue_teacher("maths","17/07/2022",12);
   L1.issue_teacher("history","17/07/2022",12);
    return 0;
}