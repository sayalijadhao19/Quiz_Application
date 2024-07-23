#include <fstream>
#include <conio.h>
#include <limits>
#include <iostream>
#include <iomanip> 
#include <cstring>
#include <cctype> 
using namespace std;

class Quiz
{
    public:
    int num=0;
    static int total;
    static int correct_que;
    static int incorrect_que;
    static int unattempted;
    static int phy_marks;
    static int chem_marks;
    static int math_marks;
    static int correct_que_p;
    static int incorrect_que_p;
    static int unattempted_p;
    static int correct_que_c;
    static int incorrect_que_c;
    static int unattempted_c;
    static int correct_que_m;
    static int incorrect_que_m;
    static int unattempted_m;

    void Login_portal();
    void display(fstream& res);
    void intro();
    void Marking_scheme(int mark,string sub)
    {
        cout<<"-------------------------------------------------"<<sub<<" Marking Scheme -----------------------------------------------------"<<endl;
        cout<<"1.All Questions are Multiple Choice Questions each having only one option correct.."<<endl;
        cout<<"2.Each question carries "<<mark<<" marks for correct answer "<<endl;
        cout<<"3.For the incorrect answer 1 mark will be deducted from total marks and 0 marks will be deducted for no attempt of question... "<<endl;      
    }
    virtual void askquestion()=0;
};
int Quiz::total=0;
// int Quiz::total[1]=0;
// int Quiz::total[2]=0;
// int Quiz::total[3]=0;
// int Quiz::total[4]=0;
int Quiz::correct_que=0;
int Quiz::incorrect_que=0;
int Quiz::unattempted=0;
int Quiz::phy_marks=0;
int Quiz::chem_marks=0;
int Quiz::math_marks=0;
int Quiz::correct_que_p=0;
int Quiz::correct_que_c=0;
int Quiz::correct_que_m=0;
int Quiz::incorrect_que_p=0;
int Quiz::incorrect_que_c=0;
int Quiz::incorrect_que_m=0;
int Quiz::unattempted_p=0;
int Quiz::unattempted_c=0;
int Quiz::unattempted_m=0;


void Quiz::intro()
{
    cout<<"*******************************************************************************************************************************\n"; 
    cout<<"|                                                       IZZQUIZZ                                                              |\n";
    cout<<"*******************************************************************************************************************************\n";
}
void Quiz::Login_portal()
{
    char ID[5];
    char name[10];
    char password[20];
    int k=0;
    cout<<endl;
    cout<<"*.................................................Welcome to Practice JEE Quiz................................................*"<<endl;
    cout<<"*...................................................Enter Login Credentials...................................................*"<<endl;
    cout<<"Enter Login ID : "<<endl;
    cin>>ID;
    system("cls");
    cout<<"Enter name : "<<endl;
    cin>>name;
    system("cls");
    string defaultpass=strcat(ID,name);
    cout<<"Enter Password : "<<endl;
    while(password[k-1]!='\r') {
        password[k]=getch();
        if(password[k-1]!='\r') {
            cout<<"*";
        }
        k++;
    }
    cout<<endl;
    password[k-1]='\0';
    // if(password==defaultpass)
    // {
    //     cout<<"Correct Password ..."<<endl;
    //     num=1;
    // }
    // else
    //     cout<<"Invalid Credentials...\nTry Again.."<<endl;
    try
    {
        if(password!=defaultpass)
           throw"Invalid";
        if(password==defaultpass)
           throw num=1;
    }
    catch(const int n)
    {
        cout<<"Correct Password : "<<endl;
    }
    catch(const char* str)
    {
        cout<<"Invalid Credentials !!\nTry Again..."<<endl;
    }
}

class Physics : public Quiz
{
    public:
    void askquestion()
    {

        string ans="ABCDA";
        char c[5];
        system("cls");
        cout<<"Question 1 : Two bodies of massees m1=5 kg and m2= 3kg and theta = 30 are connected by a light string going over a smooth light pulley on a smooth inclined plane as shown in the figure. The system is at rest. The force exerted by the inclined plane on the body of mass m2 will be :"<<endl;
        cout<<"A : 30 N\nB : 40 N\nC : 50 N\nD : 60 N"<<endl;
        cin>>c[0];
        if(c[0]==ans[0])
        {
            // total+=2;
            phy_marks+=2;
            // correct_que+=1;
            correct_que_p+=1;
        }
        else if(c[0]=='B' || c[0]=='C' || c[0]=='D')
        {
            // total-=1;
            phy_marks-=1;
            // incorrect_que+=1;
            incorrect_que_p+=1;
        }
        else
        //    unattempted+=1;
           unattempted_p+=1;
        system("cls");
        cout<<"Question 2 : A block 'A' takes 2 s to slide down a frictionless incline of 30 and length 'l', kept inside a lift going up with uniform velocity 'v'. If the incline is changed to 45, the time taken by the block, to slide down the incline, will be approximately :"<<endl;
        cout<<"A : 1 sec\nB : 2 sec\nC : 4 sec\nD : 8 sec"<<endl;
        cin>>c[1];
        if(c[1]==ans[1])
        {
            // total+=2;
            phy_marks+=2;
            // correct_que+=1;
            correct_que_p+=1;
        }
        else if(c[1]=='A' || c[1]=='C' || c[1]=='D')
        {
            // total-=1;
            phy_marks-=1;
            // incorrect_que+=1;
            incorrect_que_p+=1;
        }
        else
        //    unattempted+=1;
           unattempted_p+=1;
        system("cls");
        cout<<"Question 3 : A block of mass M=2kg slides down on a rough inclined plane with constant velocity. The angle made by the incline plane with horizontal is theta=45. The magnitude of the contact force will be : "<<endl;
        cout<<"A : 2 N\nB : 2.25 N\nC : 4 N\nD : 3 N"<<endl;
        cin>>c[2];
        if(c[2]==ans[2])
        {
            // total+=2;
            phy_marks+=2;
            // correct_que+=1;
            correct_que_p+=1;
        }
        else if(c[2]=='A' || c[2]=='B' || c[2]=='D')
        {
            // total-=1;
            phy_marks-=1;
            // incorrect_que+=1;
            incorrect_que_p+=1;
        }
        else
        //    unattempted+=1;
           unattempted_p+=1;
        system("cls");
        cout<<"Question 4 : A bag is gently dropped on a conveyor belt moving at a speed of 2 m/s. The coefficient of friction between the conveyor belt and bag is 0.2. Initially, the bag slips on the belt before it stops due to friction. The distance travelled by the bag on the belt during slipping motion, is :"<<endl;
        cout<<"A : 2 m\nB : 1.25 m\nC : 4 m\nD : 8 m"<<endl;
        cin>>c[3];
        if(c[3]==ans[3])
        {
            // total+=2;
            phy_marks+=2;
            // correct_que+=1;
            correct_que_p+=1;
        }
        else if(c[3]=='A' || c[3]=='B' || c[3]=='C')
        {
            // total-=1;
            phy_marks-=1;
            // incorrect_que+=1;
            incorrect_que_p+=1;
        }
        else
        //    unattempted+=1;
           unattempted_p+=1;
        system("cls");
        cout<<"Question 5 : A block 'A' takes 2 s to slide down a frictionless incline of thete 30 and length 'l', kept inside a lift going up with uniform velocity 'v'. If the incline is changed to 45, the time taken by the block, to slide down the incline, will be approximately :"<<endl;
        cout<<"A : 2 m\nB : 1.25 m\nC : 4 m\nD : 8 m"<<endl;
        cin>>c[4];
        if(c[4]==ans[4])
        {
            // total+=2;
            phy_marks+=2;
            // correct_que+=1;
            correct_que_p+=1;            
        }
        else if(c[4]=='B' || c[4]=='C' || c[4]=='D')
        {
            // total-=1;
            phy_marks-=1;
            // incorrect_que+=1;
            incorrect_que_p+=1;
        }
        else
        //    unattempted+=1;
           unattempted_p+=1;
        system("cls");
    }

};

class Chemistry : public Quiz
{
     void askquestion()
    {
        string ans="CDABC";
        char c[5];
        cout<<"Question 1 : 1. Sodium metal crystallizes in a body centred cubic lattice with a unit cell edge of 4.29 Å. The radius of sodium atom is approximately"<<endl;
        cout<<"A : 5.72 Ang.\nB : 0.93 Ang.\nC : 1.86 Ang.\nD : 3.22 Ang."<<endl;
        cin>>c[0];
        if(c[0]==ans[0])
        {
            // total+=2;
            chem_marks+=2;
            // correct_que+=1;
            correct_que_c+=1;
        }
        else if(c[0]=='A' || c[0]=='B' || c[0]=='D')
        {
            // total-=1;
            chem_marks-=1;
            // incorrect_que+=1;
            incorrect_que_c+=1;
            
        }
        else
        //    unattempted+=1;
           unattempted_c+=1;
        system("cls");
        cout<<"Question 2 : Which type of ‘defect’ has the presence of cations in the interstitial sites? "<<endl;
        cout<<"A : Vacancy Defect\nB : Frenkel Defect\nC : Schottky Defect\nD : Metal Deficiency Defect"<<endl;
        cin>>c[1];
        if(c[1]==ans[1])
        {
            // total+=2;
            chem_marks+=2;
            // correct_que+=1;
            correct_que_c+=1;
        }
        else if(c[1]=='A' || c[1]=='B' || c[1]=='C')
        {
            // total-=1;
            chem_marks-=1;
            // incorrect_que+=1;
            incorrect_que_c+=1;
        }
        else
        //    unattempted+=1;
           unattempted_c+=1;
        system("cls");
        cout<<"Question 3 : An element having an atomic radius of 0.14 nm crystallizes in an fcc unit cell. What is the length of a side of the cell? "<<endl;
        cout<<"A : 0.96 nm\nB : 0.4 nm\nC : 0.24 nm\nD : 0.56 nm"<<endl;
        cin>>c[2];
        if(c[2]==ans[2])
        {
            // total+=2;
            chem_marks+=2;
            // correct_que+=1;
            correct_que_c+=1;
        }
        else if(c[2]=='B' || c[2]=='C' || c[2]=='D')
        {
            // total-=1;
            chem_marks-=1;
            // incorrect_que+=1;
            incorrect_que_c+=1;
        }
        else
        //    unattempted+=1;
           unattempted_c+=1;
        system("cls");
        cout<<"Question 4 : The edge length of a face centered cubic cell of an ionic substance is 508 pm. If the radius of the cation is 110 pm, the radius of the anion is "<<endl;
        cout<<"A : 144 pm\nB : 288 pm\nC : 398 pm\nD : 618 pm"<<endl;
        cin>>c[3];
        if(c[3]==ans[3])
        {
            // total+=2;
            chem_marks+=2;
            // correct_que+=1;
            correct_que_c+=1;
        }
        else if(c[3]=='A' || c[3]=='C' || c[3]=='D')
        {
            // total-=1;
            chem_marks-=1;
            // incorrect_que+=1;
            incorrect_que_c+=1;
        }
        else
        //    unattempted+=1;
           unattempted_c+=1;
        system("cls");
        cout<<"Question 5 : Lithium forms body centred cubic structure. The length of the side of its unit cell is 351 pm. Atomic radius of the lithium will be::"<<endl;
        cout<<"A : 152 pm\nB : 75 pm\nC : 300 pm\nD : 240 pm"<<endl;  
        cin>>c[4];
        if(c[4]==ans[4])
        {
            // total+=2;
            chem_marks+=2;
            // correct_que+=1;
            correct_que_c+=1;
        }
        else if(c[4]=='A' || c[4]=='B' || c[4]=='D')
        {
            // total-=1;
            chem_marks-=1;
            // incorrect_que+=1;
            incorrect_que_c+=1;
        }
        else
        //    unattempted+=1;
           unattempted_c+=1;
        system("cls");
    } 
};

class Maths : public Quiz
{
    public:
    void askquestion()
    {
        system("cls");
        string ans="DCBAC";
        char c[5];
        cout<<"Question 1 :  If C be the centroid of the triangle having vertices (3,-1), (1,3) and (2, 4). Let P be the point of intersection of the lines x + 3y - 1 = 0 and 3x - y + 1 = 0, then the line passing through the points C and P also pass through the point :"<<endl;
        cout<<"A : (-9,-7)\nB : (-9,-6)\nC : (7,6)\nD : (9,7)"<<endl;
        cin>>c[0];
        if(c[0]==ans[0])
        {
            // total+=4;
            math_marks+=4;
            // correct_que+=1;
            correct_que_m+=1;
        }
        else if(c[0]=='A' || c[0]=='B' || c[0]=='C')
        {
            // total-=1;
            math_marks-=1;
            // incorrect_que+=1;
            incorrect_que_m+=1;
        }
        else
        //    unattempted+=1;
           unattempted_m+=1;
        system("cls");
        cout<<"Question 2 : The locus of mid points of the perpendiculars drawn from points on the line x = 2y to the line x = y is :"<<endl;
        cout<<"A : 2x - 3y = 0\nB : 3x - 2y = 0\nC : 5x - 7y = 0\nD : 7x - 5y = 0"<<endl;
        cin>>c[1];
        if(c[1]==ans[1])
        {
            // total+=4;
            math_marks+=4;
            // correct_que+=1;
            correct_que_m+=1;
        }
        else if(c[1]=='A' || c[1]=='B' || c[1]=='D')
        {
            // total-=1;
            math_marks-=1;
            // incorrect_que+=1;
            incorrect_que_m+=1;
        }
        else
        //    unattempted+=1;
           unattempted_m+=1;
        system("cls");
        cout<<"Question 3 : A plane parallel to y-axis passing through line of intersection of planes x + y + z = 1 and 2x + 3y - z - 4 = 0 which of the point lie on the plane. "<<endl;
        cout<<"A : (3, 2, 1)\nB : (-3, 0, 1)\nC : (-3, 1, 1)\nD : (3, -1, 1)"<<endl;
        cin>>c[2];
        if(c[2]==ans[2])
        {
            // total+=4;
            math_marks+=4;
            // correct_que+=1;
            correct_que_m+=1;
        }
        else if(c[2]=='A' || c[2]=='C' || c[2]=='D')
        {
            // total-=1;
            math_marks-=1;
            // incorrect_que+=1;
            incorrect_que_m+=1;
        }
        else
        //    unattempted+=1;
           unattempted_m+=1;
        system("cls");
        cout<<"Question 4 : If the foot of the perpendicular drawn from the point (1, 0, 3) on a line passing through (a, 7, 1) is (5/3, 7/3, 17/3), then What will be the value of a."<<endl;
        cout<<"A : 1\nB : 2\nC : 4\nD : 8"<<endl;
        cin>>c[3];
        if(c[3]==ans[3])
        {
            // total+=4;
            math_marks+=4;
            // correct_que+=1;
            correct_que_m+=1;
        }
        else if(c[3]=='B' || c[3]=='C' || c[3]=='D')
        {
            // total-=1;
            math_marks-=1;
            // incorrect_que+=1;
            incorrect_que_m+=1;
        }
        else
        //    unattempted+=1;
           unattempted_m+=1;
        system("cls");
        cout<<"Question 5 :  If the line, (x-3)/1 = (y+2)/-1 = (z+λ)/-2 lie in the plane, 2x - 4y + 3z = 2, then the shortest distance between this line and the line (x-1)/12 = y/9 = z/4 is :"<<endl;
        cout<<"A : 2\nB : 1\nC : 0\nD : 3"<<endl;
        cin>>c[4];
        if(c[4]==ans[4])
        {
            // total+=4;
            math_marks+=4;
            // correct_que+=1;
            correct_que_m+=1;
        }
        else if(c[4]=='A' || c[4]=='B' || c[4]=='D')
        {
            // total-=1;
            math_marks-=1;
            // incorrect_que+=1;
            incorrect_que_m+=1;
        }      
        else
        //    unattempted+=1;
           unattempted_m+=1;  
        system("cls");
    }

};
void Quiz::display(fstream& res)
{
    Physics p1;
    ofstream toFile;
    total=phy_marks+chem_marks+math_marks;
    correct_que=correct_que_p+correct_que_c+correct_que_m;
    incorrect_que=incorrect_que_p+incorrect_que_c+incorrect_que_m;
    unattempted=unattempted_p+unattempted_c+unattempted_m;
    res.open("Result.bin", ios::out|ios::binary);
    if(res.fail())
    {
      cout<<"Could not find file: Result.bin \n";
      system("read");
    }
    while(  !res.eof()  )
    {
       cout<<fixed<<showpoint<<setprecision(2);
       cout<<"-----------------------------------------------------------------------------------------------------------------------------\n";
       cout<<left<<setw(14)<<"Subject";
       cout<<right<<setw(11)<<"Marks";
       cout<<right<<setw(14)<<"Correct Que.";
       cout<<right<<setw(19)<<"Incorrect Que.";
       cout<<right<<setw(19)<<"Unattempted Que."<<endl;
       
       cout<<left<<setw(14)<<"Physics";
       cout<<right<<setw(11)<<p1.phy_marks;
       cout<<right<<setw(14)<<p1.correct_que_p;
       cout<<right<<setw(19)<<p1.incorrect_que_p;
       cout<<right<<setw(19)<<p1.unattempted_p<<endl;

       cout<<left<<setw(14)<<"Chemistry";
       cout<<right<<setw(11)<<p1.chem_marks;
       cout<<right<<setw(14)<<p1.correct_que_c;
       cout<<right<<setw(19)<<p1.incorrect_que_c;
       cout<<right<<setw(19)<<p1.unattempted_c<<endl;

       cout<<left<<setw(14)<<"Maths";
       cout<<right<<setw(11)<<p1.math_marks;
       cout<<right<<setw(14)<<p1.correct_que_m;
       cout<<right<<setw(19)<<p1.incorrect_que_m;
       cout<<right<<setw(19)<<p1.unattempted_m<<endl;
       cout<<"-----------------------------------------------------------------------------------------------------------------------------\n";

       cout<<left<<setw(14)<<"Total";
       cout<<right<<setw(11)<<p1.total;
       cout<<right<<setw(14)<<p1.correct_que;
       cout<<right<<setw(19)<<p1.incorrect_que;
       cout<<right<<setw(19)<<p1.unattempted<<endl;
       cout<<"-----------------------------------------------------------------------------------------------------------------------------\n";


       toFile.open("Score.txt",ios::app);
       toFile<<fixed<<showpoint<<setprecision(2);
       toFile<<"---------------------------------------------------------------------------------------------------------------------------\n";
       toFile<<left<<setw(14)<<"Subject";
       toFile<<right<<setw(11)<<"Marks";
       toFile<<right<<setw(14)<<"Correct Que.";
       toFile<<right<<setw(19)<<"Incorrect Que.";
       toFile<<right<<setw(19)<<"Unattempted Que."<<endl;
       
       toFile<<left<<setw(14)<<"Physics";
       toFile<<right<<setw(11)<<p1.phy_marks;
       toFile<<right<<setw(14)<<p1.correct_que_p;
       toFile<<right<<setw(19)<<p1.incorrect_que_p;
       toFile<<right<<setw(19)<<p1.unattempted_p<<endl;

       toFile<<left<<setw(14)<<"Chemistry";
       toFile<<right<<setw(11)<<p1.chem_marks;
       toFile<<right<<setw(14)<<p1.correct_que_c;
       toFile<<right<<setw(19)<<p1.incorrect_que_c;
       toFile<<right<<setw(19)<<p1.unattempted_c<<endl;

       toFile<<left<<setw(14)<<"Maths";
       toFile<<right<<setw(11)<<p1.math_marks;
       toFile<<right<<setw(14)<<p1.correct_que_m;
       toFile<<right<<setw(19)<<p1.incorrect_que_m;
       toFile<<right<<setw(19)<<p1.unattempted_m<<endl;
       toFile<<"---------------------------------------------------------------------------------------------------------------------------\n";

       toFile<<left<<setw(14)<<"Total";
       toFile<<right<<setw(11)<<p1.total;
       toFile<<right<<setw(14)<<p1.correct_que;
       toFile<<right<<setw(19)<<p1.incorrect_que;
       toFile<<right<<setw(19)<<p1.unattempted<<endl;
       toFile<<"---------------------------------------------------------------------------------------------------------------------------\n";
       res.read(reinterpret_cast<char*>(&res),sizeof(res));
    }
    res.close();
}

int main()
{
    Quiz *q1;
    Physics p;
    Chemistry c;
    Maths m;
    fstream res;
    // static int total[5];
    // static int correct_que[5];
    // static int incorrect_que[5];
    // static int unattempted[5];
    char choice='b';
    p.intro();
    p.Login_portal();
    if(p.num==1)
    {
        cout<<"Which Subject do you want to attempt first ? \nEnter : \nP for Physics\nC for Chemistry\nM for Maths"<<endl;
        for(int i=0;i<3;i++)
    {    cin>>choice;
        if(choice=='P')
        {
            p.Marking_scheme(2,"Physics");
            q1=&p;
            q1->askquestion();
            cout<<"Enter another subject : "<<endl;
        }
        else if(choice=='C')
        {
            c.Marking_scheme(2,"Chemistry");
            q1=&c;
            q1->askquestion();
            cout<<"Enter another subject : "<<endl;
        }
        else if(choice=='M')
       {
            m.Marking_scheme(4,"Maths");
            q1=&m;
            q1->askquestion();
        }
    }
    p.display(res);
    }
    else
    {
        return 0;
    }
}