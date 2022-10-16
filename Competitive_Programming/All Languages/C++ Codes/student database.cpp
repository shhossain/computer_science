#include <iostream>
using namespace std;
class StudData;
class Student{
    string name;
    int roll_no;
    string cls;
    char* division;
    string dob;
    char* bloodgroup;
    static int count;
public:
    Student(){
        name = "";
        roll_no = 0;
        cls = "";
        division = new char;
        dob = "dd/mm/yyyy";
        bloodgroup = new char[4];
    }
    ~Student(){
        delete division;
        delete[] bloodgroup;
    }
    static int getCount(){
        return count;
    }
    void getData(StudData*);
    void dispData(StudData*);
};
class StudData{
    string caddress;
    long int* teleno;
    long int* dlno;
    friend class Student;
public:
    StudData(){
         caddress= "";
         teleno = new long;
         dlno = new long;
    }
    void getStudData(){
        cout<<"Enter Contact Address:";
        cin.get();
        getline(cin,caddress);
        cout<<"Enter tel no:";
        cin>>*teleno;
        cout<<"Enter Driving license no:";
        cin>>*dlno;
    }
    void dispStudData(){
        cout<<"Contact Address:"<<caddress<<endl;
        cout<<"Telephonr no:"<<*teleno<<endl;
        cout<<"Driving lic no:"<<*dlno<<endl;
    }
};
inline void Student::getData(StudData* st){
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"enter roll no:";
    cin>>roll_no;
    cout<<"ENter class:";
    cin.get();
    getline(cin,cls);
    cout<<"Enter div:";
    cin>>division;
    cout<<"Enter dob:";
    cin.get();
    getline(cin,dob);
    cout<<"Enter blood grp:";
    cin>>bloodgroup;
    st->getStudData();
    count++;
}
inline void Student::dispData(StudData* st1){
    cout<<"STUDENT name:"<<name<<endl;
    cout<<"roll:"<<roll_no<<endl;
    cout<<"class:"<<cls<<endl;
    cout<<"Division:"<<division<<endl;
    cout<<"Date of birth:"<<dob<<endl;
    cout<<"Blood grp:"<<bloodgroup<<endl;
    st1->dispStudData();
}
int Student::count;
int main()
{
    Student* stud1[100];
    StudData* stud2[100];
    int n=0;
    char ch;
    do{
        stud1[n] = new Student;
        stud2[n] = new StudData;
        stud1[n]->getData(stud2[n]);
        n++;
        cout<<"Do you want add another student?(y/n):";
        cin>>ch;
        cin.get();
        
    }while(ch=='y'||ch=='Y');
    for(int i=0;i<n;i++){
        cout<<"-------------------------------------------"<<endl;
        stud1[i]->dispData(stud2[i]);
    }
    for(int i=0;i<n;i++){
        delete stud1[i];
        delete stud2[i];
    }
    return 0;
}