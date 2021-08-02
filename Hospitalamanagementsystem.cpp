#include<bits/stdc++.h>
using namespace std;
#include<conio.h>

/////////////////Function Declaration
void menu();
void pascode();
void cpascode();

////////Class One

class one{

    public:
    virtual void get()=0;
    virtual void show()=0;

};

///////////////////////////////class information

class info: public one{
    public:
    char all[999];
    char name[50],time[50];
    char num[50],age[50];
    void get(){
        ofstream out("appointment.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\n Enter the patient name = ";
            cin.getline(name, 50);
            cout<<"\n Enter the Appointment Time= ";
            cin.getline(time,50);
            cout<<"Enter the age = ";
            cin.getline(age,20);
            cout<<"\nEnter Appointment No.= ";
            cin.getline(num,20);
        }
        out<<"\nName = "<<name<<"\nAge "<<age<<"\nTime "<<time<<"\nAppointment Number\n"<<num;
        out.close();
        cout<<"\n\nYour Information has been saved: \n\t\t\tPress any key to continue ";
        getch();
        menu();
    }

    void show(){
        ifstream in("appointment.txt");
        if(!in){
            cout<<"File open error";
        }
        while(!(in.eof())){
            in.getline(all,999);
            cout<<all<<endl;
        }
        in.close();
        cout<<"\n\n\t\t\tPress Any Key To Continue : ";
        getch();
        menu();
    }
};


////////////////////////////////////class Sandip//////////////

class Sandip:public info{

    public:
    info a1;
    void get(){
        system("cls");
        ofstream out("Sandip.txt", ios:: app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your Entry has been saved \n\nPress Any Key To Continue\n\n";
        getch();
        menu();
    }
    void show(){
        ifstream in("Sandip.txt");
        if(!in){
            cout<<"\n\nNo Data In the File";
            cout<<"\n\n\t\tPress Any key To Continue: ";
            getch();
            menu();
        }
        else{
            while(!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }
};

///////////////////////////////class Dr Rohit.............

class Rohit:public info{
    public:
    info a1;
    void get(){
        system("cls");
        ofstream out("Rohit.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1, sizeof(info));
        out.close();
        cout<<"Your Entry has been saved \n\nPress Any Key To Continue\n\n";
        getch();
        menu();
    }
    void show(){
        ifstream in("Rohit.txt");
        if(!in){
            cout<<"No Data In the File";
            cout<<"\nPress Any key To Continue: ";
            getch();
            menu();
        }
        else{
            while(!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            cout<<"Press Enter To Continue = ";
            getch();
            menu();
        }
    }
};


////////////////////////////////class Dr. Srijash///////

class Srijash: public info{
    public:
    info a1;
    void get(){
        system("cls");
        ofstream out("Srijash.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1, sizeof(info));
        out.close();
        cout<<"Your Entry has been saved \nPress Any Key To Continue : \n\n";
        getch();
        menu();
    }
    void show(){
        ifstream in("Srijash.txt");
        if(!in ){
            cout<<"No Data In the File";
            cout<<"\nPress Any key To Continue: ";
            getch();
            menu();
        }
        else{
            while(!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            cout<<"Press Enter To Continue = ";
            getch();
            menu();
        }
    }
};



class staff: public one{
    public:
    char all[999];
    char name[50],age[20],sal[30],pos[20];

    void get(){

        ofstream out("staff.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter Name = ";
            cin.getline(name,50);
            cout<<"\nEnter Age = ";
            cin.getline(age,20);
            cout<<"\nEnter Salary = ";
            cin.getline(sal,30);
            cout<<"\nEnter Working Position =";
            cin.getline(pos,20);
        }
        out<<"\nName = "<<name<<"\nAge "<<age<<"\nsalary "<<sal<<"\nWorking Position\n"<<pos;
        out.close();
        cout<<"\n\nYour Information has been saved: \n\t\t\tPress any key to continue ";
        getch();
        menu();
    }

    void show(){
        ifstream in("staff.txt");
        if(!in){
            cout<<"File open error";
        }
        while(!(in.eof())){
            in.getline(all,999);
            cout<<all<<endl;
        }
        in.close();
        cout<<"\n\n\t\t\tPress Any Key To Continue : ";
        getch();
        menu();
    }
};


//////////////////////class information
class information{

    public:
    void drinfo()
    {
        system("cls");
        system("color F3");
        cout<<"\n======================================================\n";
        cout<<"\n\n\t\t(Three Doctor Available) \n\n \t\t[Information And Timing Are Given Below]\n";
        cout<<"----------------------------------------------------------\n";
        cout<<"\t\tDr Available:\n";
        cout<<"\t\tDr. Sandip(skin specialist)\n\n";
        cout<<"\t\t\t\t\t  Timing:\n\n";
        cout<<"\tMonday To Friday\t\t9AM TO 5PM\n";
        cout<<"\tSaturday       \t\t\t9AM TO 1PM\n";
        cout<<"\tSunday         \t\t\tOff\n";
        cout<<"\n-------------------------------------------------------\n";
        cout<<"\t\tDr. Rohit(child specialist)\n\n";
        cout<<"\t\t\t\t\t  Timing:\n\n";
        cout<<"\tMonday To Friday\t\t2PM TO 10PM\n";
        cout<<"\tSaturday       \t\t\t8AM TO 1PM\n";
        cout<<"\tSunday          \t\t12PM TO 9PM\n";
        cout<<"\n-------------------------------------------------------\n";
        cout<<"\t\tDr. Srijash(DVM)\n\n";
        cout<<"\t\t\t\t\t Timing:\n\n";
        cout<<"\tMonday To Friday\t\t8AM TO 5PM\n";
        cout<<"\tSaturday       \t\t\t10AM TO 1PM\n";
        cout<<"\tSunday          \t\tOff\n";
        cout<<"\n-------------------------------------------------------\n";
        cout<<"\nPress Any Key To Continue: \n\n";
        getch();
        menu();
    }
};

void call_dr(){

    system("cls");
    int choice;
    cout<<"\n\n\n\t\tPress 1 for Dr Sandip \n\n\t\t Press 2 for Dr Rohit \n\n\t\t Press 3 for Dr Srijash\n";
    cin>>choice;

    one *ptr;
    Sandip s3;
    Rohit s4;
    Srijash s5;
    if(choice == 1){
        ptr = &s3;
        ptr->get();
    }
    if(choice==2){
        ptr = &s4;
        ptr->get();
    }
    if(choice == 3){
        ptr = &s5;
        ptr->get();
    }
    else{
        cout<<"Sorry invalid choice :";
        getch();
        menu();
    }
}

void menu(){
    cout<<"\n\n\n\t\tIIT Jodhpur\n\n\tHealth Centre Of IIT Jodhpur\n";
    cout<<"\n\n\t1-\t\tPress 1 for Available Doctor Information\n\n";
    cout<<"\t2-\t\tPress 2 for Doctor Appointment\n\n";
    cout<<"\t3-\t\tPress 3 for Saving Staff Information\n\n";
    cout<<"\t4-\t\tPress 4 for Patient Appointment Menu:\n\n ";
    cout<<"\t5-\t\tPress 5 for Checking Staff Information Menu:\n\n";
    cout<<"\t6-\t\tPress 6 for Checking Password or Create password :\n\n";
    cout<<"\t7-\t\t[   press 7 for logout  ]\n";
    cout<<"\n--------------------------------------------------------------------------------------------------------------\n";
    cout<<"\n\n\t\tPlease Enter your choice : ";
    information a1;
    one *ptr;
    staff a2;
    int a;
    info a3;
    cin>>a;
    if(a==1){
        a1.drinfo();
    }
    else if(a==2){
        call_dr();
    }
    else if(a==3){
        ptr = &a2;
        ptr->get();
    }
    else if(a==4){
        ptr=&a3;
        ptr->show();
    }
    else if(a==5){
        ptr=&a2;
        ptr->show();
    }
    else if(a==6){
        cpascode();
    }
    else if(a==7){
        pascode();
    }
    else{
        cout<<"Sorry invalid choice: ";
    }
}

void pascode(){
    system("cls");
    char p1[50],p2[50],p3[50];
    system("color Fc");
    ifstream in("password.txt");
    {
        cin.sync();
        cout<<"\n\n\n\n\n\n\n\n\t\t\tEnter the Password: ";
        cin.getline(p1,50);
        in.getline(p2,50);
        if(strcmp(p2,p1)==0){
            menu();
        }
        else{
            cout<<"\n\n\t\t\tIncorrect Passcode Please Try Again\n";
           // _sleep(999);
            pascode();
        }
        in.close();
    }
}

void cpascode(){
    char n[50];
    system("cls");
    ofstream out("password.txt");
    {
        cin.sync();
        cout<<"\n\n\n\n\t\t\tEnter The New password ";
        cin.getline(n,50);
        cout<<n;
    }
    out.close();
    cout<<"\n\nYour Password has been saved: ";
    getch();
    menu();
}

int main(){
    pascode();
    system("pause");
}