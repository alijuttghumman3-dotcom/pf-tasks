#include <iostream>
#include <string>
#include<fstream>
using namespace std;

int main()
{
   const int MAX_BOOKS = 100;
   const int MAX_ISSUED = 500;

    // data structures
    int permit[MAX_BOOKS];
    string title[MAX_BOOKS];
    string writer[MAX_BOOKS];
    int volume[MAX_BOOKS];
    int takeaway[MAX_BOOKS];

    int total = 0;

    //Student tracking: each issued record stores book id + student name
    int issued_bookid[MAX_ISSUED];
    string issued_student[MAX_ISSUED];
    int issued_total = 0;
    int choosen;

    string username = "admin";
    string password = "1234";
    string u, p;

    // main header of lms
    cout << "---------------------------------------" << endl;
    cout << "------Library Management System-------" << endl;
    cout << "--------------------------------------" << endl;
    // login system
    for (int attempt = 1; attempt <= 3; attempt++)
    {
        cout << "Enter username" << endl;
        cin >> u;
        cout << "Enter password"  << endl;
        cin >> p;

        if (u == username && p == password)
        {
            cout << "Login successful" << endl;
            break;
        }
        else
        {
            cout << "Wrong username or password" << endl;
        }
        if (attempt == 3)
        {
            cout << "Too many attempts. Exiting" << endl;
            return 0;
        }
    }
    //__load datafrom file on startup_____________________
    {
     ifstream fin("library_data.txt");
    if (fin.is_open())
    {
        fin >> total;
        fin.ignore();
        for (int i=0;i<total; i++)
        {
         fin >> permit[i];
         fin.ignore();
        getline(fin, title[i]);
        getline(fin, writer[i]);
        fin >> volume[i] >> takeaway[i];
        fin.ignore();
    }
         fin>>issued_total;
         fin.ignore();
         for (int i=0; i<issued_total; i++)
         {
            fin >> issued_bookid[i];
            fin.ignore();
            getline(fin, issued_student[i]);

         }
         fin.close();
         cout << "Data loaded from file." <<endl; 
        }
    }
     while (true)
    {
        cout << "\n------------MENU------------" << endl;
        cout << "1 Add book" << endl;
        cout << "2 Show all books" << endl;
        cout << "3 Find book" << endl;
        cout << "4 Issue book" << endl;
        cout << "5 Return book" << endl;
        cout << "6 count total books" << endl;
        cout << "7 show available books" << endl;
        cout << "8 update book" << endl;
        cout << "9 Search by title" << endl;
        cout << "10 Show issued books" << endl;
        cout << "11 Library summary" << endl;
        cout<<"12 Delete book"<<endl;
        cout<<"13 sort books by title"<<endl;
        cout<<"14 sort books by ID"<<endl;
        cout<<"15 save data to file"<<endl;
        cout<<"16 Exit"<<endl;
        cout << "Enter choice" << endl;
        cin >> choosen;
        cin.ignore();

        // Add book
        if (choosen == 1)
        {
            if(total<MAX_BOOKS)
            {
            cout << "Enter book id: " <<endl;
            cin >> permit[total];
            cin.ignore();
            cout << "Enter book title : " <<endl;
            getline(cin, title[total]);
            cout << "Enter writer name: " <<endl;
            getline(cin, writer[total]);
            cout << "Enter quantity" <<endl;
            cin >> volume[total];

            takeaway[total] = 0;
            total++;
            cout << "Book added succcessfully" << endl;
            }
            else
            {
                cout << "Library full:" << endl;
            }
        }
        // View books
        else if (choosen == 2)
        {
             if (total == 0)
            {
                cout << "no books in library"<<endl;
            }
        
            
                for (int i = 0; i < total; i++)
                {
                    cout << "\nBook" << i + 1 << endl;
                    cout << "permit: " << permit[i] << endl;
                    cout << "Title: " << title[i] << endl;
                    cout << "Writer :" << writer[i] << endl;
                    cout << "Quantity :" << volume[i] << endl;
                    cout << "issued :" << takeaway[i] << endl;
                }
            
           
        }
        // search books
        else if (choosen == 3)
        {
            int searchid;
            bool found = false;
            cout << "Enter book ID :" <<endl;
            cin >> searchid;
            for (int i = 0; i < total; i++)
            {
                if (permit[i] == searchid)
                {
                    cout << "Book found" <<endl;
                    cout << title[i]<< "|" << writer[i] <<endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Book not found" <<endl;
        }
        
        // Issue book (with student name tracking)
        else if (choosen == 4)
        {
            int bid;
            bool found = false;
            cout << "Enter book id: " <<endl;
            cin >> bid;

            for (int i = 0; i < total; i++)
            {
                if (permit[i] == bid)
                {
                    found = true;
                    if (volume[i] > 0)
                    {
                        string sname;
                        cout << "Enter student name"<<endl;
                        getline(cin, sname);
                        volume[i]--;
                        takeaway[i]++;
                        //Recordd student issue
                        issued_bookid[issued_total] = bid;
                        issued_student[issued_total] = sname;
                        issued_total++;
                        

                        cout << "Book issued successfully" << sname << "." << endl;
                    }
                    else
                    {
                        cout << "Book not available (out of stock)" <<endl;
                    }
                    break;
                }
            }
            if (!found)
            
                cout << "Book not found" <<endl;
            
        }
        // Return book
        else if (choosen == 5)
        {
            int bid;
            bool found = false;
            string sname;
            cout << "Enter bookid to return" <<endl;
            cin >> bid;
           cin.ignore();
           cout<<" Enter student name" << endl;
           getline(cin, sname);

            for (int i = 0; i < total; i++)
            {
                if (permit[i] == bid )
                {
                    found = true;
                    if (takeaway[i] > 0)
                    {
                        // Remove matching student record
                        bool recordFound = false;
                        for (int j = 0; j < issued_total; j++)
                        {
                            if (issued_bookid[j] == bid && issued_student[j] == sname)
                            {
                                // Shift records left to fill gap
                                for (int k = j; k < issued_total - 1; k++)
                                {
                                    issued_bookid[k] = issued_bookid[k + 1];
                                    issued_student[k] = issued_student[k + 1];
                                }
                                issued_total--;
                                recordFound = true;
                                break;
                            }
                        }
                        volume[i]++;
                        takeaway[i]--;
                        if (recordFound)
                            cout << "Book returned successfully by " << sname << "." << endl;
                        else
                            cout << "Book returned, but student record not found (may have been issued before tracking)." << endl;
                    }
                    else
                    {
                        cout << "No copies of this book are currently issued." << endl;
                    }
                    break;
                }
            }
            if (!found)
                cout << "Book not found." << endl;
        }
 
        // Count total books
        else if (choosen == 6)
        {
            cout<<"------------------------------"<<endl;
            cout << "Total book titles" << total << endl;
            cout<<"-------------------------------"<<endl;
        }
        // available books
        else if (choosen == 7)
        {
            bool found = false;
            for (int i = 0; i < total; i++)
            {
                
                
                    if (volume[i] > 0)
                    {
                        cout<< "ID: " << permit[i] << "Title" << title[i] << "in stock " << volume[i] <<endl;                 
                    
                    found = true;
                    }
            
           }
            if (!found)
                cout << "No available books" <<endl;
        }
        // update book info
        else if (choosen == 8)
        {
            int id;
            bool found = false;
            cout << "Enter book ID to update: " <<endl;
            cin >> id;
            cin.ignore();

            for (int i = 0; i < total; i++)
            {
                if (permit[i] == id)
                {
                    cout << "Enter new title" <<endl;
                    getline(cin, title[i]);

                    cout << "Enter new writer" <<endl;
                    getline(cin, writer[i]);

                    cout << "Enter new quantity" <<endl;
                    cin >> volume[i];

                    cout << "Books updated succcessfully" <<endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Books not found" <<endl;
        }
        // search by title
        else if (choosen == 9)
        {
            string searchtitle;
            bool found = false;
            cout << "Enter title to search" <<endl;
            getline(cin, searchtitle);

            for (int i = 0; i < total; i++ )
            {
                if (title[i].find(searchtitle) != string::npos)
                {
                    cout << "ID: "<< permit[i] << "|" << title[i] << "|" << writer[i] << endl;
                    found = true;
                }
            }
            if (!found)
                cout << "No matching title found" <<endl;
            
        }
        // show issued books only
        else if (choosen == 10)
        {
            if (issued_total == 0)
            {
                cout<<"No books are issued currently." <<endl;
            }
            else{
                cout<<"Currently issued books: " <<endl;
            
            
            for (int i = 0; i < total; i++)
            {
            
                // Find title for this book id
                string btitle = "unknown";
                for (int j=0;j<total; j++)
                {
                    if (permit[j] == issued_bookid[i])
                    {
                        btitle = title[j];
                        break;

                    }
                }
                cout <<" Book id" << issued_bookid[i] <<"| Title: " << btitle << "|student: " << issued_student[i] <<endl;
            }
        }  
            
        }
        // library summary
        else if (choosen == 11)
        {
            
            int totalissued = 0;
            int totalstock = 0;
            for (int i = 0; i < total; i++)
            {
        
                totalissued += takeaway[i];
                totalstock +=volume[i];
            }
            cout << "Total titles" << total << endl;
            cout<<"Total in stock: "<< totalstock << endl;
            cout << "Issued books" << totalissued << endl;
            cout<<"Students issued"<< issued_total <<endl;
            cout<<"--------------------------"<<endl;
            
        }
       //Delete book
       else if (choosen == 12)
       {
        int did;
        bool found = false;
        cout<<"Enter book id to delete"<<endl;
        cin>>did;
        for (int i =0; i<total; i++)
        {
            if (permit[i] == did)
            {
                found = true;
                if (takeaway[i] >0)
                {
                    cout << "Cannot delete: " << takeaway[i] <<" copies are still issued." <<endl;
                }
                else
                {
                    // Shift all records left to fill the gap
                    for (int j=i; j<total-1;j++)
                    {
                        permit[j] = permit[j+1];
                        title[j]=title[j+1];
                        writer[j]=writer[j+1];
                        volume[j]=volume[j+1];
                        takeaway[j]=takeaway[j+1];
                    }
                    total--;
                    cout<<"Book deleted successfully"<<endl;
                
                
                }
                break;
            }
        }
        if (!found)
        cout <<"Book not found"<<endl;
       }
       //Sort by title
       else if (choosen ==13)
       {
        for (int i=0; i<total; i++)
      {
        for (int j=0; j < total-1; j++)
        {
            if (title[j] > title[j+1])
            {
                // Swap all parallel arrays together
                swap(permit[j], permit[j+1]);
                swap(title[j], title[j+1]);
                swap(writer[j], writer[j+1]);
                swap(volume[j], volume[j+1]);
                swap(takeaway[j], takeaway[j+1]);
            }
        }
      }
      cout << "Books sorted by title" << endl;
    }
    //Sort by id
    else if (choosen == 14)
    {
         for (int i=0; i<total-1; i++)
      {
        for (int j=0; j < total-1; j++)
        {
            if (permit[j] > permit[j+1])
            {
                swap(permit[j], permit[j+1]);
                swap(title[j], title[j+1]);
                swap(writer[j], writer[j+1]);
                swap(volume[j], volume[j+1]);
                swap(takeaway[j], takeaway[j+1]);
            }
        }
      
    }
    cout <<"Books sorted by id" << endl;
}
//Save data to file
 
else if (choosen == 15)
{
    ofstream fout("library_data.txt");
    if (fout. is_open())
    {
        fout<< total <<"\n";
        for (int i =0; i < total; i++)
        {
            fout<< permit[i] << "\n";
            fout << title[i] <<"\n";
            fout <<writer[i] <<"\n";
            fout<< volume[i] <<"\n";
        }
        fout << issued_total << "\n";
        for (int i=0; i < issued_total; i++)
        {
            fout << issued_bookid[i] <<"\n";
            fout << issued_student[i] << "\n";

        }
        fout.close();
        cout <<"data saved to library_data.txt" << endl;

    }
    else
    {
        cout << "Error: could not open file for saving." << endl;
    }
}
//Exit
else if (choosen == 16)
{
    cout << "Exiting program" <<endl;
    break;
}
else{
    cout <<"Invalid choice. Please enter 1-16." <<endl;
}
    }
    return 0;
}
