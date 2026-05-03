#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//-------------------------------------------------------------------
//    CONSTANTS AND GLOBAL ARRAYS
//-------------------------------------------------------------------
const int MAX_BOOKS = 100;
const int MAX_ISSUED = 300;
// Books
int bID[MAX_BOOKS];
string bTitle[MAX_BOOKS];
string bAuthor[MAX_BOOKS];
int bQty[MAX_BOOKS];
int bIssued[MAX_BOOKS];

int totalbooks = 0;
// Issue records
int iBookID[MAX_ISSUED];
int iMemberID[MAX_ISSUED];
string iMembername[MAX_ISSUED];
string idate[MAX_ISSUED];
int totalissues = 0;

//-----------------------------------------------------------------
//   UTILITY FUNCTIONS
//-----------------------------------------------------------------
void line()
{
    cout << "------------------------------------------------" << endl;
}
void header(string title)
{
    cout << "\n ---------------------------------------------" << endl;
    cout << " " << title << endl;
    cout << "------------------------------------------------" << endl;
}

// Retuen index of book with given ID or -1 iof not found
int findbook(int id)
{
    for (int i = 0; i < totalbooks; i++)
        if (bID[i] == id)
            return i;
    return -1;
}
// Print full details of books
void printbook(int i)
{
    cout << " ID : " << bID[i] << endl;
    cout << " Title : " << bTitle[i] << endl;
    cout << " Author : " << bAuthor[i] << endl;
    cout << " Total quantity : " << bQty << endl;
    cout << " Issued : " << bIssued[i] << endl;
    cout << " Available : " << bQty[i] - bIssued[i] << endl;
    line();
}
//--------------------------------------------------------
//  LOGIN
//--------------------------------------------------------
bool login() 
{
    string u, p;
    header("Library Management System - Admin Login");
    for ( int attempt =1; attempt <= 3; attempt++)
    {
        cout <<" usernmae :";
        cin >>u;
        cout<<" Password :";
        cin >> p;
        if (u == "admin" && p == "1234")
        {
            cin.ignore();
            cout << "\n login successful! Welcome admin." <<endl;
            return true;
        }
        cout << "Incorrect. Attempts reamaining: "<< 3-attempt <<endl;
    }
    cout <<"Too many failed attempts.Exiting."<<endl;
    return false;
}

//------------------------------------------------------------
//   BOOK MANAGEMENT FUNCTIONS
//------------------------------------------------------------

void addbook()
{
    header("Add BOOK");
    if (totalbooks >= MAX_BOOKS)
    {
        cout << " Library catalog is full " << endl;
        return;
    }
    int id;
    cout << "Enter book id : ";
    cin >> id;
    cin.ignore();
    if (findbook(id) != -1)
    {
        cout << " Book ID already exists. Use a unique ID. " << endl;
        return;
    }
    bID[totalbooks] = id;
    cout << " Enter title : ";
    getline(cin, bTitle[totalbooks]);
    cout << " Enter Author :";
    getline(cin, bAuthor[totalbooks]);
    cout << "Enter quantity :";
    cin >> bQty[totalbooks];
    cin.ignore();
    bIssued[totalbooks] = 0;
    totalbooks++;
    cout << " Book added successfully!" << endl;
}
void showallbooks()
{
    header("allbooks");
    if (totalbooks == 0)

    {
        cout << " No books in library" << endl;
        return;
    }
    cout << "Total titles :" << totalbooks << endl;
    line();
    for (int i = 0; i < totalbooks; i++)
        printbook(i);
}
void searchbook()
{
    header("Search book by ID");
    int id;
    cout <<"Enter book id";
    cin >> id;
    cin.ignore();
    int i = findbook(id);
    if (i == -1)
    cout <<"Book not found. " <<endl;
    else
    printbook(i);
}
void searchbytitle()
{
    header("Search book by Title");
    string key;
    cout <<"Enter keyword: ";
    getline(cin, key);
    bool found = false;
    for (int i = 0;i <totalbooks; i++)
    if (bTitle[i].find(key) !=string::npos)
    {
        printbook(i);
        found = true;
    }
    if (!found)
    cout<<"No booko found matching\"" <<key << "\"." << endl;

}
void updatebook()
{
    header("Update book");
    int id;
    cout <<"Enter book id to update: ";
    cin >> id;
    cin.ignore();
    int i = findbook(id);
     if (i==-1) {
     cout <<"Book not found." <<endl;
     return;
}
cout << "Current details: " <<endl;
printbook(i);
string s;
cout<< "New title (press enter to keep current: ";
getline(cin, s);
if (s != "") bTitle[i] = s;
cout << "New Author(Press enter to keep currernt): ";
getline(cin, s);
if (s != "") bAuthor[i] = s;
int q;
cout << "New quantity (enter 0 to keep current) :";
cin >> q;
cin.ignore();
if (q>0) bQty[i] = q;
cout <<"Book updated successfully "<<endl;
}
void deletebook()
{
header("Delete book");
int id;
cout <<"Enter book id to delete : ";
cin >>id;
cin.ignore();
int i = findbook(i);
if (i == -1)
{
cout <<"Book not found" <<endl;
return;
}
if (bIssued[i] > 0)
{
    cout << "Cannot delete: " << bIssued[i] << "copies are still issued. "<<endl;
    return;
}
for(int j = i; j< totalbooks-1; j++)
{
bID[j] = bID[j+1];
bTitle[j] = bTitle[j+1];
bAuthor[j] = bAuthor[j+1];
bQty[j] = bQty[j+1];
bIssued[j] = bIssued[j+1];
}
totalbooks--;
cout <<"Book deleted successfully"<<endl;
}
void showavailable()
{
    header("Available Books");
    bool found = false;
    for(int i = 0; i < totalbooks; i++)
    {
    if (bQty[i] - bIssued[i] > 0)
    {
        cout <<"  [" <<bID[i] << "]" << bTitle
             << " by "  << bAuthor[i]
             << "  (Available: " <<bQty[i] - bIssued[i] << ")" << endl;
             found = true;
    }
    }
    if (!found)
    cout << " No books are avalable right now." <<endl;
}
void sortbytitle()
{
    for(int i = 0; i<totalbooks - 1; i++)
    for(int j = 0; j< totalbooks-1; j++)
    if(bTitle[j] > bTitle[j+1])
    {
      swap (bID[j], bID[j+1]);
swap(bTitle[j], bTitle[j+1]);
swap(bAuthor[j], bAuthor[j+1]);
swap(bQty[j], bQty[j+1]);
swap(bIssued[j], bIssued[j+1]);
}
cout <<" Book sorted by title" << endl;
    }
void sortbyid()
{
      for(int i = 0; i<totalbooks - 1; i++)
    for(int j = 0; j< totalbooks-1; j++)
    if(bID[j] > bID[j+1])
    {
      swap (bID[j], bID[j+1]);
swap(bTitle[j], bTitle[j+1]);
swap(bAuthor[j], bAuthor[j+1]);
swap(bQty[j], bQty[j+1]);
swap(bIssued[j], bIssued[j+1]);
}
cout << "Books soorted by ID" <<endl;
}
//------------------------------------------------------
//  ISSUEE & RETURN FUNCTION
//-----------------------------------------------------
void issuebook()
{
    header("Issue book");
if (totalissues >= MAX_ISSUED)
{
    cout << " Issue records are full" << endl;
    return;
}
int bid;
cout <<" Enter book ID :";
cin >> bid;
cin.ignore();
int i = findbook(bid);
if ( i== -1)
{
    cout <<" Book not found "<<endl;
    return;
}
if (bQty[i] - bIssued[i] <= 0)
{
    cout << " NO copies of \"" << bTitle[i] << "\" are available. " << endl;
    return;
}
cout << " Enter numbeer ID: ";
cin >> iMemberID[totalissues];
cin.ignore();
cout <<"Enter member name: ";
getline(cin, iMembername[totalissues]);
cout << "Enter date: ";
getline(cin, idate[totalissues]);

iBookID[totalissues] = bid;
totalissues++;
bIssued[i]++;
cout <<" \"" << bTitle[i] << "\" issued to " << iMembername[totalissues - 1] << "Successfully!" <<endl;
}
void returnbook ()
{
    header("Return Book");
    int bid, mid;
    cout <<" Enter book ID :";
    cin >> bid;
    cin .ignore();
    cout <<"Enter member ID";
    cin >> mid;
    cin. ignore();
    int bi = findbook(bid);
    if (bi == -1)
    {
cout <<"Book not found"<<endl;
return;
    }
    for (int i =0; i< totalissues; i++)
    {
        if (iBookID[i] == bid && iMemberID[i]== mid)
        {
          for (int j = i; j< totalissues -1; j++)
          {
            iBookID[j] = iBookID[j+1];
            iMemberID[j] = iMemberID[j+1];
            iMembername[j] = iMembername[j+1];
            idate[j] = idate[j+1];
          }
          totalissues--;
          bIssued[bi]--;
          cout <<"Book \"" << bTitle[bi] << "\" returned successfully!" << endl;
          return;
        }
    }
    cout <<" No issue record found for this book and member. "<<endl;
}
void showissued()
{
    header("All issued books");
    if (totalissues = 0)
    {
        cout <<" No books are issued currently"<<endl;
        return;
    }
    cout <<" total issued: " << totalissues <<endl;
    line();
    for (int i =0; i < totalissues; i++)
    {
        int bi = findbook(iBookID[i]);
        string t = (bi != -1) ? bTitle[bi] : "Unknown";
        cout <<" Book : ["<<iBookID[i] <<"]" << t <<endl;
        cout << "Member : [" <<iMemberID[i] << "]" << iMembername[i] <<endl;
        cout << " Date :" << idate[i] << endl;
        line();
    }
}
//---------------------------------------------------------------=
//  SUMMARY
//-----------------------------------------------------------------
void librarysummary()
{
    header("Library summary");
    int totalcopies = 0, totalavail = 0,totalissuedC = 0;
    for (int i=0; i < totalbooks; i++)
    {
        totalcopies +=bQty[i];
        totalissuedC +=bIssued[i];
        totalavail += bQty[i] - bIssued[i];
    }
    cout <<"Book titles: " << totalbooks << endl;
    cout <<" Total copies: " << totalcopies << endl;
    cout <<" Available copies "<<totalavail <<endl;
    cout <<"Issued copies "<<  totalissuedC <<endl;
    cout <<"Active copies: " << totalissues << endl;
}

//----------------------------------------------------------------
//  FILE OPERATIONS
//----------------------------------------------------------------

void  savedata()
{
    ofstream f("lms_data.txt");
    if (!f.is_open())
    {
        cout << "Error: could not save file." <<endl;
        return;
    }
    f << totalbooks << "\n";
    for (int i=0; i< totalbooks; i++)
    f << bID[i] << "\n" << bTitle[i] << "\n" << bAuthor[i] << "\n" << bQty[i] << "\n" << bIssued[i] << "\n";
    f << totalissues << "\n";
    for (int i=0; i < totalissues; i++)
    f << iBookID[i] << "\n" << iMemberID[i] << "\n" << iMembername[i] << "\n" << idate[i] <<"\n";
    f.close();
    cout <<" Data saved to lms data txt "<<endl;
}
void loaddata()
{
ifstream f("lms_data.txt");
if (!f.is_open()) return;
f >> totalbooks;
f.ignore();
for (int i=0;i < totalbooks; i++)
{
    f >> bID[i];
    f.ignore();
    getline(f, bTitle[i]);
    getline(f, bAuthor[i]);
    f >> bQty[i] >> bIssued[i];
    f.ignore();
}
f >> totalissues;
f.ignore();
for (int i=0; i< totalissues; i++)
{
    f >> iBookID[i] >> iMemberID[i];
    f.ignore();
    getline(f, iMembername[i]);
    getline(f, idate[i]);
}
f.close();
cout << " Previous data loaded successfully "<< endl;
}
//-------------------------------------------------------------
//   MAIN MENU & MAIN
//-------------------------------------------------------------
void showmenu()
{
cout <<"---------------MAIN MENU---------------------"<<endl;
cout <<"1. Add book"<<endl;
cout<<"2. Show all books"<<endl;
cout<<"3. Search book by id"<<endl;
cout<<"4. Search by title"<<endl;
cout <<"5. Update book"<<endl;
cout <<"6. Delete book"<<endl;
cout <<"7.Available books"<<endl;
cout <<"8. sort by title"<<endl;
cout <<"9. Sort by ID"<<endl;
cout<<"10. Issue book"<<endl;
cout<<"11. Return book"<<endl;
cout <<"12. Show issued"<<endl;
cout <<"13. Library summary"<<endl;
cout<<"14. Save data"<<endl;
cout <<" 15. Exit"<<endl;
cout<<"------------------------------------------"<<endl;
cout<<"Enter choice"<<endl;
}
int main()
{
    if (!login()) return 0;
    loaddata;

    int ch;
    while(true)
    {
        showmenu();
        cin >> ch;
        cin.ignore();
        if (ch ==1) addbook();
        else if(ch==2) showallbooks();
        else if(ch == 3) searchbook();
        else if (ch==4) searchbytitle();
        else if(ch==5) updatebook();
        else if (ch==6) deletebook();
        else if (ch==7) showavailable();
        else if (ch==8) sortbytitle();
        else if (ch==9) sortbyid();
        else if (ch==10) issuebook();
        else if (ch==11) returnbook();
        else if (ch==12) showissued();
        else if(ch==13) librarysummary();
        else if (ch==14) savedata();
        else if (ch==15) 
        {
        cout<<" Goodbye!"<<endl;
        break;
        }
        else cout <<" Invalid choice. Enter 1-15." <<endl;
    }
    return 0;
}