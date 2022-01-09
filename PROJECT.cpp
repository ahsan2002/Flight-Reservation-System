#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int randnum1(int, int);
void randnum();
void loading(string);
void date();
void feedback();
void exit();

//////////////////////////////////////////////////////////////////////////////////////////////////////////

class flight
{
public:
    string arr_bl2[3] = {"04:05 AM", "06:00 AM", "09:00 AM"};
    string arr_bl1[3] = {"FLY-EMIRATES", "P.I.A", "AIR-BLUE"};
    string arr_bl3[3] = {"08:00 AM", "10:00 AM", "01:00 PM"};
    string destination;
    string origin;
    int no_of_seats, total_passengers;
    flight()
    {
        no_of_seats = 25;
        total_passengers = 25;
    }
    void schedule()
    {
        system("cls");
        cout << "\t\t\t________________________________\n\n";
        cout << "\e[1m\t\t\t\tFLIGHT SCHEDULE\e[0m\n";
        cout << "\t\t\t________________________________\n"
             << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\e[1mDate:\e[0m";
        date();
        cout << "\t\e[1mAirline Name\e[0m\t\e[1mArrival Time\e[0m\t\e[1mDeparture Time\e[0m\t\e[1mFlight No\e[0m" << endl;
        cout << "\t" << arr_bl1[0] << "\t" << arr_bl2[0] << "\t" << arr_bl3[0] << "\tBS-";
        randnum();
        cout << "\t" << arr_bl1[1]
             << "\t\t" << arr_bl2[1] << "\t" << arr_bl3[1] << "\tSA-";
        randnum();
        cout << "\t" << arr_bl1[2] << "\t" << arr_bl2[2] << "\t" << arr_bl3[2] << "\tAB-";
        randnum();
    }
    void setdata_dom()
    {
        cout << endl;
        cout << "\n\nSelect your \e[1mDestination\e[0m from the following(in BLOCK letters)" << endl;
        cout << "\n\4 KARACHI\n\4 LAHORE\n\4 ISLAMABAD\n\4 PESHAWAR\n\4 RAWALPINDI\n"
             << endl;
        cout << "\e[1mDestination\e[0m : ";
        cin >> destination;
        cout << endl;
        cout << "\n\nSelect your \e[1mOrigin\e[0m from the following(in BLOCK letters)" << endl;
        cout << "\n\4 KARACHI\n\4 LAHORE\n\4 ISLAMABAD\n\4 PESHAWAR\n\4 RAWALPINDI\n"
             << endl;
        cout << "\e[1mOrigin\e[0m : ";
        cin >> origin;
        if (destination == origin)
        {
            cout << "\n\nyou can't go from same to same place" << endl;
            Sleep(2000);
            system("cls");
            return setdata_dom();
        }
    }
    void setdata_int()
    {
        cout << "\n\nSelect your \e[1mDestination\e[0m from the following(in BLOCK letters)" << endl;
        cout << "\n\4 LONDON\n\4 NEW-YORK\n\4 ISTAMBUL\n\4 FLORIDA\n\4 CHICAGO\n"
             << endl;
        cout << "\e[1mDestination\e[0m : ";
        cin >> destination;
        cout << endl;
        cout << "\n\nSelect your \e[1mOrigin\e[0m from the following(in BLOCK letters)" << endl;
        cout << "\n\4 LONDON\n\4 NEW-YORK\n\4 ISTAMBUL\n\4 FLORIDA\n\4 CHICAGO\n"
             << endl;
        cout << "\e[1mOrigin\e[0m : ";
        cin >> origin;
        if (destination == origin)
        {
            cout << "\n\nyou can't go from same to same place" << endl;
            Sleep(2000);
            system("cls");
            return setdata_int();
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class plane
{
private:
    int tot_plane_staff, tot_no_of_seats, tot_pilots, tot_business_class_seats, tot_economic_class_seats;
    string plane_model, plane_name, captain, vice_captain;

public:
    void set_emirates_plane()
    {
        plane_model = "A380";
        plane_name = "Boeing 777";
        captain = "Captain Ashley Klinger";
        vice_captain = "Robert A. Hoover";
        tot_plane_staff = 25;
        tot_no_of_seats = 40;
        tot_business_class_seats = 20;
        tot_economic_class_seats = 20;
        tot_pilots = 2;
    }
    void get_emirates_plane()
    {
        cout << "\n\t\t\t\e[1m <> Fly-Emirates <> \e[0m\n\n"
             << endl;
        cout << " <> Plane Name : " << plane_name << endl;
        cout << " <> Plane Model : " << plane_model << endl;
        cout << " <> Captain Name : " << captain << endl;
        cout << " <> Vice Captain Name : " << vice_captain << endl;
        cout << " <> Total no of seats : " << tot_no_of_seats << endl;
        cout << " <> Total no of staff : " << tot_plane_staff << endl;
        cout << " <> Total no of Pilots : " << tot_pilots << endl;
        cout << " <> Total no of Business class seats : " << tot_business_class_seats << endl;
        cout << " <> Total no of Economic class seats : " << tot_economic_class_seats << endl;
    }
    void set_PIA_plane()
    {
        plane_model = "A320";
        plane_name = "Airbus 200";
        captain = "Captain Karim Ahmed";
        vice_captain = "Owais Zia";
        tot_plane_staff = 20;
        tot_no_of_seats = 35;
        tot_business_class_seats = 20;
        tot_economic_class_seats = 15;
        tot_pilots = 2;
    }
    void get_PIA_plane()
    {
        cout << "\n\t\t\t\e[1m <> Pakistan International Airline <> \e[0m\n\n"
             << endl;
        cout << " <> Plane Name : " << plane_name << endl;
        cout << " <> Plane Model : " << plane_model << endl;
        cout << " <> Captain Name : " << captain << endl;
        cout << " <> Vice Captain Name : " << vice_captain << endl;
        cout << " <> Total no of seats : " << tot_no_of_seats << endl;
        cout << " <> Total no of staff : " << tot_plane_staff << endl;
        cout << " <> Total no of Pilots : " << tot_pilots << endl;
        cout << " <> Total no of Business class seats : " << tot_business_class_seats << endl;
        cout << " <> Total no of Economic class seats : " << tot_economic_class_seats << endl;
    }

    void set_airblue_plane()
    {
        plane_model = "A520";
        plane_name = "Airbus 400";
        captain = "Captain Waqas Ahmed";
        vice_captain = "Asma Khan";
        tot_plane_staff = 20;
        tot_no_of_seats = 30;
        tot_business_class_seats = 10;
        tot_economic_class_seats = 20;
        tot_pilots = 2;
    }
    void get_airblue_plane()
    {
        cout << "\n\t\t\t\e[1m <> Air-Blue <> \e[0m\n\n"
             << endl;
        cout << " <> Plane Name : " << plane_name << endl;
        cout << " <> Plane Model : " << plane_model << endl;
        cout << " <> Captain Name : " << captain << endl;
        cout << " <> Vice Captain Name : " << vice_captain << endl;
        cout << " <> Total no of seats : " << tot_no_of_seats << endl;
        cout << " <> Total no of staff : " << tot_plane_staff << endl;
        cout << " <> Total no of Pilots : " << tot_pilots << endl;
        cout << " <> Total no of Business class seats : " << tot_business_class_seats << endl;
        cout << " <> Total no of Economic class seats : " << tot_economic_class_seats << endl;
    }

    void display_plane()
    {
    PlaneMenu:
        system("cls");
        int nav;
        cout << "1) \e[1mFly-Emirates\e[0m\n"
             << "2) \e[1mPakistan International Airline\e[0m\n"
             << "3) \e[1mAir-Blue\e[0m\n\n";
        cout << "Which airline plane information you want to know" << endl;
        cout << "\n\e[1mNOTE :\e[0m press \e[1m 1 , 2, 3 \e[0m go to Plane Information \n";
        cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to main menu \n";
        char ch;
        ch = getch();
        system("cls");
        switch (ch)
        {
        case '1':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            set_emirates_plane();
            get_emirates_plane();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to plane menu ";
            while (true)
            {
                nav = getch();
                if (nav != 8)
                {
                    continue;
                }
                else if (nav == 8)
                {
                    goto PlaneMenu;
                }
            }
            break;
        case '2':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            set_PIA_plane();
            get_PIA_plane();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to plane menu ";
            while (true)
            {
                nav = getch();
                if (nav != 8)
                {
                    continue;
                }
                else if (nav == 8)
                {
                    goto PlaneMenu;
                }
            }
            break;
        case '3':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            set_airblue_plane();
            get_airblue_plane();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to plane menu ";
            while (true)
            {
                nav = getch();
                if (nav != 8)
                {
                    continue;
                }
                else if (nav == 8)
                {
                    goto PlaneMenu;
                }
            }
            break;
        default:
            break;
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class pilots
{
private:
    string name_cap, name_vice, experience_cap, experience_vice;
    int age_cap, age_vice, id_cap, id_vice;

public:
    void set_emirates_pilots()
    {
        name_cap = "Captain Ashley Klinger";
        age_cap = 45;
        experience_cap = "10 Years";
        id_cap = 25601;
        name_vice = "Robert A. Hoover";
        age_vice = 40;
        experience_vice = "8 Years";
        id_vice = 25602;
    }
    void get_emirates_pilots()
    {
        cout << "\n\t\t\t\e[1m <> Fly-Emirates <> \e[0m\n\n"
             << endl;
        cout << "\n\e[1m <> Captain <> \e[0m\n\n"
             << endl;
        cout << "            Name:" << name_cap << endl;
        cout << "            Age:" << age_cap << endl;
        cout << "            Experience:" << experience_cap << endl;
        cout << "            ID:" << id_cap << endl;
        cout << "" << endl;
        cout << "\n\e[1m <> Vice Captain <> \e[0m\n\n"
             << endl;
        cout << "            Name:" << name_vice << endl;
        cout << "            Age:" << age_vice << endl;
        cout << "            Experience:" << experience_vice << endl;
        cout << "            ID:" << id_vice << endl;
    }

    void set_PIA_pilots()
    {
        name_cap = "Captain Karim Ahmed";
        age_cap = 50;
        experience_cap = "10 Years";
        id_cap = 27603;
        name_vice = "Owais Zia";
        age_vice = 45;
        experience_vice = "8 Years";
        id_vice = 27604;
    }
    void get_PIA_pilots()
    {
        cout << "\n\t\t\t\e[1m <> Pakistan-International-Airline <> \e[0m\n\n"
             << endl;
        cout << "\n\e[1m <> Captain <> \e[0m\n\n"
             << endl;
        cout << "            Name:" << name_cap << endl;
        cout << "            Age:" << age_cap << endl;
        cout << "            Experience:" << experience_cap << endl;
        cout << "            ID:" << id_cap << endl;
        cout << "" << endl;
        cout << "\n\e[1m <> Vice Captain <> \e[0m\n\n"
             << endl;
        cout << "            Name:" << name_vice << endl;
        cout << "            Age:" << age_vice << endl;
        cout << "            Experience:" << experience_vice << endl;
        cout << "            ID:" << id_vice << endl;
    }

    void set_airblue_pilots()
    {
        name_cap = "Captain Waqas Ahmed";
        age_cap = 50;
        experience_cap = "10 Years";
        id_cap = 28609;
        name_vice = "Asma Khan";
        age_vice = 45;
        experience_vice = "8 Years";
        id_vice = 28610;
    }
    void get_airblue_pilots()
    {
        cout << "\n\t\t\t\e[1m <> Air-Blue <> \e[0m\n\n"
             << endl;
        cout << "\n\e[1m <> Captain <> \e[0m\n\n"
             << endl;
        cout << "            Name:" << name_cap << endl;
        cout << "            Age:" << age_cap << endl;
        cout << "            Experience:" << experience_cap << endl;
        cout << "            ID:" << id_cap << endl;
        cout << "" << endl;
        cout << "\n\e[1m <> Vice Captain <> \e[0m\n\n"
             << endl;
        cout << "            Name:" << name_vice << endl;
        cout << "            Age:" << age_vice << endl;
        cout << "            Experience:" << experience_vice << endl;
        cout << "            ID:" << id_vice << endl;
    }
    void display_pilot()
    {
    PilotMenu:
        system("cls");
        int nav;
        cout << "1) \e[1mFly-Emirates\e[0m\n"
             << "2) \e[1mPakistan International Airline\e[0m\n"
             << "3) \e[1mAir-Blue\e[0m\n\n";
        cout << "Which airline pilot information you want to know" << endl;
        cout << "\n\e[1mNOTE :\e[0m press \e[1m 1 , 2, 3 \e[0m go to Pilot Information \n";
        cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to main menu \n";
        char ch;
        ch = getch();
        system("cls");
        switch (ch)
        {
        case '1':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            set_emirates_pilots();
            get_emirates_pilots();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to pilot menu ";
            while (true)
            {
                nav = getch();
                if (nav != 8)
                {
                    continue;
                }
                else if (nav == 8)
                {
                    goto PilotMenu;
                }
            }
            break;
        case '2':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            set_PIA_pilots();
            get_PIA_pilots();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to plane menu ";
            while (true)
            {
                nav = getch();
                if (nav != 8)
                {
                    continue;
                }
                else if (nav == 8)
                {
                    goto PilotMenu;
                }
            }
            break;
        case '3':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            set_airblue_pilots();
            get_airblue_pilots();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to plane menu ";
            while (true)
            {
                nav = getch();
                if (nav != 8)
                {
                    continue;
                }
                else if (nav == 8)
                {
                    goto PilotMenu;
                }
            }
            break;
        default:
            break;
        }
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class passenger // class passenger publicly inherited from class d_booking and i_booking
{
protected: // protected members
    char f_name[20], l_name[20], email[50];
    int age, gender, d, b;
    int st_no;
    char address[40], c_no[11];
    string gender2, psptno, o;

public: // public member functions
    void get_detail()
    {
        system("cls");
        cout << "\n\n\e[1m <> Enter passenger details <>\e[0m\n";
        cout << "\n <> First Name : ";
        cin.ignore();
        cin.getline(f_name, 20);
        cout << " <> Last Name : ";
        cin.getline(l_name, 20);
        cout << " <> Date of Birth:\n";
        cout << "\t<> Month : ", cin >> o;
        cout << "\t<> Date : ", cin >> d;
        cout << "\t<> Year : ", cin >> b;
        cin.ignore();
        cout << " <> Age : ";
        cin >> age;
        cout << " <> Passport No. : ";
        cin >> psptno;
        cout << " <> Seat No : ";
        cin >> st_no;
        cout << " <> Email Id : ";
        cin >> email;
        cin.ignore();
        cout << " <> Contact no.(11 digits) : ";
        cin.getline(c_no, 40);
        cout << " <> Resendential Address : ";
        cin.getline(address, 40);
    }

    int gender_check() // to check gender input as valid
    {
        cout << "\n <> Gender:\n->Male-press:1\n->Female-press:2\n";
        gender = getch();
        switch (gender)
        {
        case '1':
            gender2 = "Male";
            break;
        case '2':
            gender2 = "Female";
            break;
        default:
            cout << "\n\nWrong input entered.\nTry again\n"
                 << endl;
            return gender_check();
            break;
        }
    }

    // displaying details
    void show_detail()
    {
        cout << "\n\n\t\t\e[1m<> Pessenger's Detail <>\e[0m\n\n";
        cout << "\e[1m<> Name Of Passenger : \e[0m" << f_name << " " << l_name << endl;
        cout << "\e[1m<> Date of Birth : \e[0m" << o << " / " << d << " / " << b << endl;
        cout << "\e[1m<> Age : \e[0m" << age << endl;
        if (gender == '1')
        {
            cout << "\e[1m<> Gender : \e[0m" << gender2 << endl;
        }
        else
        {
            cout << "\e[1m<> Gender : \e[0m" << gender2 << endl;
        }

        cout << "\e[1m<> Seat No : SN-\e[0m" << st_no << endl;
        cout << "\e[1m<> Passport No. : \e[0m" << psptno << endl;
        cout << "\e[1m<> Email id : \e[0m" << email << endl;
        cout << "\e[1m<> Contact No. : \e[0m" << c_no << endl;
        cout << "\e[1m<> Address : \e[0m" << address << endl;
    }
    void save_Record()
    {
        ofstream fout;
        fout.open("Passenger_data.csv", ios::out | ios::app);
        fout << f_name << ","
             << l_name << ","
             << o << ","
             << d << ","
             << b << ","
             << age << ","
             << gender2 << ","
             << psptno << ","
             << st_no << ","
             << email << ","
             << c_no << ","
             << address << "\n"; // writing data to a csv file
        fout.close();
    }

    void read_record()
    {

        fstream fin;

        // Open an existing file
        fin.open("Passenger_data.csv", ios::in);

        // Get the seat number
        // of which the data is required
        int count;
        string St_num;
        cout << "\nEnter the \e[1mSeat Number\e[0m "
             << "of the \e[1mPassenger\e[0m to Display details : ";
        cin >> St_num;

        vector<string> row;
        string line, word;

        while (getline(fin, line))
        {
            row.clear();
            stringstream str(line);
            while (getline(str, word, ','))
            {
                row.push_back(word);
            }
            // Compare the seat number
            if (row[8] == St_num)
            {
                // View the found data
                count = 1;
                cout << "\n\n\t\t\t\e[1m<> Passenger Information <> \e[0m" << endl;
                cout << "\n \e[1m<> First Name : \e[0m" << row[0] << "\n";
                cout << " \e[1m<> Last Name : \e[0m" << row[1] << "\n";
                cout << " \e[1m<> Date of Birth (Month/Day/Year) : \e[0m" << row[2] << "/" << row[3] << "/" << row[4] << "\n";
                cout << " \e[1m<> Age : \e[0m" << row[5] << "\n";
                cout << " \e[1m<> Gender : \e[0m" << row[6] << "\n";
                cout << " \e[1m<> Passport No. : \e[0m" << row[7] << "\n";
                cout << " \e[1m<> Seat No. : \e[0m" << row[8] << "\n";
                cout << " \e[1m<> Email id. : \e[0m" << row[9] << "\n";
                cout << " \e[1m<> Contact No. : \e[0m" << row[10] << "\n";
                cout << " \e[1m<> Address : \e[0m" << row[11] << "\n";
                break;
            }
        }
        if (count == 0)
        {
            cout << "Record not found\n";
        }
        fin.close();
    }

    void delete_record()
    {

        fstream fin, fout;

        // Open the existing file
        fin.open("Passenger_data.csv", ios::in);

        // Create a new file to store the non-deleted data
        fout.open("Passenger_datanew.csv", ios::out);

        int count = 0, i;
        int index;
        string St_num, line, word;
        vector<string> row;

        // Get the seat number
        // to decide the data to be deleted
        cout << "\nEnter the \e[1mSeat Number\e[0m "
             << "of the record to be \e[1mDeleted\e[0m : ";
        cin >> St_num;

        while (getline(fin, line))
        {

            row.clear();

            stringstream s(line);

            while (getline(s, word, ','))
            {
                row.push_back(word);
            }

            if (row[8] != St_num)
            {
                fout << row[0] << ","
                     << row[1] << ","
                     << row[2] << ","
                     << row[3] << ","
                     << row[4] << ","
                     << row[5] << ","
                     << row[6] << ","
                     << row[7] << ","
                     << row[8] << ","
                     << row[9] << ","
                     << row[10] << ","
                     << row[11] << "\n";
            }
            else
            {
                count = 1;
            }
        }
        if (count == 1)
            cout << "\n\e[1mRecord Deleted\e[0m\n";
        else
            cout << "\nRecord not found\n";

        fin.close();
        fout.close();

        // removing the existing file
        remove("Passenger_data.csv");

        // renaming the new file with the existing file name
        rename("Passenger_datanew.csv", "Passenger_data.csv");
    }
    void Display_Pass()
    {
    PassMenu:
        char lpc1;
        int nav;
        system("cls");
        cout << "\n\n\t\t \e[1mPASSENGER SECTION\e[0m \n\n";
        cout << "\e[1m\n1) Save Passenger Details\e[0m\n"
             << "\e[1m2) Show Passenger Details\e[0m\n";
        lpc1 = getch();
        system("cls");
        switch (lpc1)
        {
        case '1':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            int n;
            cout << "How many \e[1mPassengers\e[0m to \e[1mBook Flight\e[0m : ";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                get_detail();
                gender_check();
                save_Record();
            }
            cout << "\nPress any key to \e[1mShow\e[0m previous input Record";
            getch();
            system("cls");
            for (int i = 0; i < n; i++)
            {
                show_detail();
            }
            break;
        case '2':
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            read_record();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mPassenger Section\e[0m ";
            while (true)
            {
                nav = getch();
                if (nav != 8)
                {
                    continue;
                }
                else if (nav == 8)
                {
                    goto PassMenu;
                }
            }
            break;
        default:
            break;
        }
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Ticket : public flight, public passenger
{
public:
    void display_ticket()
    {
        cout << "\t\t________________________\n\n";
        cout << "\e[1m\t\t\t TICKET \e[0m\n";
        cout << "\t\t________________________\n"
             << endl;
        cout << "" << endl;
        cout << "\e[1m <> Name Of Passenger : \e[0m" << f_name << " " << l_name << endl;
        cout << "\e[1m <> Age : \e[0m" << age << endl;
        cout << "\e[1m <> Gender : \e[0m" << gender2 << endl;
        cout << "\e[1m <> Seat No : \e[0m" << st_no << endl;
        cout << "\e[1m <> Passport No. : \e[0m" << psptno << endl;
        cout << "\e[1m <> Contact No. : \e[0m" << c_no << endl;
        cout << "\e[1m <> Origin : \e[0m" << origin << endl;
        cout << "\e[1m <> Destination : \e[0m" << destination << endl;
        cout << "\e[1m <> Time Of Flight : \e[0m" << arr_bl3[1] << endl;
    }
    void save_record_ticket()
    {
        fstream fout;
        fout.open("Ticket_data.csv", ios::out | ios::app); // writing data to a csv file
        fout << f_name << ","
             << l_name << ","
             << age << ","
             << gender2 << ","
             << st_no << ","
             << psptno << ","
             << origin << ","
             << destination << ","
             << arr_bl3[1] << "\n";
        fout.close();
    }
    void read_record_ticket()
    {

        fstream fin;

        // Open an existing file
        fin.open("Ticket_data.csv", ios::in);

        int count = 0;
        string St_num;
        cout << "\nEnter the \e[1mSeat Number\e[0m "
             << "to display \e[1mTicket\e[0m : ";
        cin >> St_num;

        vector<string> row;
        string line, word;

        while (getline(fin, line))
        {
            row.clear();
            stringstream str(line);
            while (getline(str, word, ','))
            {
                row.push_back(word);
            }
            // Compare the seat number
            if (row[4] == St_num)
            {
                // Print the found data
                count = 1;
                cout << "\n\n\t\t\t\e[1m<> Ticket Information <>\e[0m" << endl;
                cout << "\n \e[1m<> First Name : \e[0m" << row[0] << "\n";
                cout << " \e[1m<> Last Name : \e[0m" << row[1] << "\n";
                cout << " \e[1m<> Age : \e[0m" << row[2] << "\n";
                cout << " \e[1m<> Gender : \e[0m" << row[3] << "\n";
                cout << " \e[1m<> Seat No. : \e[0m" << row[4] << "\n";
                cout << " \e[1m<> Passport No. : \e[0m" << row[5] << "\n";
                cout << " \e[1m<> Origin : \e[0m" << row[6] << "\n";
                cout << " \e[1m<> Destination : \e[0m" << row[7] << "\n";
                cout << " \e[1m<> Time Of Flight : \e[0m" << row[8] << "\n";
                break;
            }
        }
        if (count == 0)
        {
            cout << "\nRecord not found\n";
        }
        fin.close();
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class payment //class for payment
{
protected: //protected members
    char bank[30], card[20], date[20], Nic_no[20], user_id[20];
    char choice1;
    char password[10], Acc_no[10];

public:
    void pay_detail()
    {
        cout << "\n\e[1mBanks Available:\e[0m \n\n1. Habib Bank Limited \n2. Meezan Bank \n3. Standard Chartered Bank \n4. Alfalah Bank \n5. Others";
        cout << "\n\nSelect your \e[1mBank : \e[0m";
        cin.get(bank, 30);
        // bank = getch();
        cout << "\nYou have Selected : \n"
             << bank << endl;
        loading("\n\e[1mPlease Wait\e[0m");
        system("cls");
        cout << "\nHow would you like to pay?\n";
        cout << "\n1. \e[1mDebit Card\e[0m \n2. \e[1mCredit Card\e[0m \n3. \e[1mNet Banking\e[0m\n";
        cout << "\n\e[1mNOTE :\e[0m press \e[1m1 , 2 , 3\e[0m to select \e[1mPayment Method : \e[0m";
        choice1 = getch();
        system("cls");
        switch (choice1) //switch case
        {
        case '1': //condition
            cout << "\n\e[1mDebit Card Information\e[0m\n"
                 << endl;
            cout << "\nEnter Debit Card NO. :";
            cin >> card;
            cout << "\nEnter NIC no.:";
            cin >> Nic_no;
            cout << "\nEnter payment date:";
            cin >> date;
            cout << "" << endl;
            system("cls");
            loading("Please Wait");
            cout << "\n\nRS:26000/= has been deducted from your account" << endl;
            cout << "\n\e[1mTransaction Successful\e[0m\n";
            Sleep(2000);
            cout << "\n\e[1mTicket is being proceed\e[0m\n\n";
            loading("Please Wait");
            system("cls");
            break;
        case '2': //condition
            cout << "\n\e[1mCredit Card Information\e[0m\n"
                 << endl;
            cout << "\nEnter Credit Card No.:";
            cin >> card;
            cout << "\nEnter NIC no.:";
            cin >> Nic_no;
            cout << "\nEnter Payment date:";
            cin >> date;
            cout << "\nEnter 4-digit password:";
            cin >> password;
            system("cls");
            loading("Please Wait");
            cout << "\n\nRS:26000/= has been deducted from your account" << endl;
            cout << "\n\e[1mTransaction Successful\e[0m\n";
            Sleep(2000);
            cout << "\n\e[1mTicket is being proceed\e[0m\n\n";
            loading("Please Wait");
            system("cls");
            break;
        case '3': //condition
            cout << "\n\e[1mNet Banking Information\e[0m\n"
                 << endl;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nEnter Account No.";
            cin >> Acc_no;
            system("cls");
            loading("Please Wait");
            cout << "\n\nRS:26000/= has been deducted from your account" << endl;
            cout << "\n\e[1mTransaction Successful\e[0m\n";
            Sleep(2000);
            cout << "\n\e[1mTicket is being proceed\e[0m\n\n";
            loading("Please Wait");
            system("cls");
            break;
        default: //condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }
};

//////////////////////////////
class Flight_Reservation_System
{

public:
    char check;
    int navl;
    int navmenu;
    void main_menu()
    {
    MainMenu:
        system("cls");
        cout << "\n\e[1m\t\t\t\t   ----- F L I G H T - R E S E R V A T I O N - S Y S T E M -----\e[0m\n\n"
             << endl;
        cout << "\t\t\t\e[1m     W E L C O M E - T O - D.A.O.S - I N T E R N A T I O N A L - A I R P O R T\e[0m\n\n"
             << endl;
        cout << "\t\t\t\t\t\t\e[1m     --- M A I N M E N U ---\e[0m\n"
             << endl;
        cout << "\t\t\t     ________________________________________________________________________\n\n\n\n";
        cout << " \e[1m1 - MAKE RESERVATION\e[0m\n"
             << endl;
        cout << " \e[1m2 - FLIGHT SCHEDULE\e[0m\n"
             << endl;
        cout << " \e[1m3 - PLANE INFORMATION\e[0m\n"
             << endl;
        cout << " \e[1m4 - PILOT INFORMATION\e[0m\n"
             << endl;
        cout << " \e[1m5 - SEARCH PASSENGER\e[0m\n"
             << endl;
        cout << " \e[1m6 - CANCEL RESERVATION\e[0m\n"
             << endl;
        cout << " \e[1m7 - TICKET INFORMATION\e[0m\n"
             << endl;
        cout << " \e[1m8 - FEEDBACK\e[0m\n"
             << endl;
        cout << " \e[1m9 - QUIT\e[0m\n"
             << endl;
        plane p;
        flight f;
        pilots pl;
        Ticket t;
        passenger p1;
        payment pm;
        check = getch();
        switch (check)
        {
        case '1':
            /////////////////////////////////////////////////////////////
            int nav;
            char book, choice, flighttype;
        menu:
            system("cls");
            cout << "\n\t\t\t\e[1mBOOKING_MENU\e[0m\n"
                 << endl;
            cout << "\e[1m  1-BOOK FLIGHT\e[0m\n"
                 << endl;
            cout << "\e[1m  2-FLIGHT SCHEDULE\e[0m" << endl;
            cout << "\n\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mMain Menu\e[0m \n";
            choice = getch();
            system("cls");
            loading("\e[1mPlease Wait\e[0m");
            system("cls");
            switch (choice)
            {
            case '1':
                system("cls");
                cout << "\n\n\e[1m1-DOMESTIC\e[0m\n"
                     << endl;
                cout << "\e[1m2-INTERNATIONAL\e[0m" << endl;
                cout << endl;
                cout << "\n\e[1mNOTE :\e[0m press \e[1m 1 , 2\e[0m to select Flight type \n";
                cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mBooking Menu\e[0m  \n";
                flighttype = getch();
                system("cls");
                loading("\e[1mPlease Wait\e[0m");
                system("cls");
                switch (flighttype)
                {
                case '1':
                    f.schedule();
                    cout << endl;
                    cout << "\n\nDo you want to book a Flight\e[1m(y/n)\e[0m?" << endl;
                    book = getch();
                    cout << endl;
                    loading("\e[1mPlease Wait\e[0m");
                    system("cls");
                    switch (book)
                    {
                    case 'y':
                        int enter;
                        t.setdata_dom();
                        t.Display_Pass();
                        cout << "\n\e[1mNOTE :\e[0m press \e[1mEnter\e[0m for \e[1mPayment\e[0m ";
                        while (true)
                        {
                            enter = getch();
                            if (enter == 13)
                            {
                                system("cls");
                                pm.pay_detail();
                                t.display_ticket();
                                t.save_record_ticket();
                                cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mMain Menu\e[0m ";
                                while (true)
                                {
                                    nav = getch();
                                    if (nav != 8)
                                    {
                                        continue;
                                    }
                                    else if (nav == 8)
                                    {
                                        goto MainMenu;
                                    }
                                }
                            }
                            else
                            {
                                continue;
                            }
                        }

                        break;

                    case 'n':
                        goto menu;
                        break;

                    default:
                        break;
                    }

                    break;
                case '2':
                    f.schedule();
                    cout << endl;
                    cout << "\n\nDo you want to book a Flight\e[1m(y/n)\e[0m?" << endl;
                    book = getch();
                    cout << endl;
                    loading("\e[1mPlease Wait\e[0m");
                    system("cls");
                    switch (book)
                    {
                    case 'y':
                        int enter;
                        t.setdata_int();
                        t.Display_Pass();
                        cout << "\n\e[1mNOTE :\e[0m press \e[1mEnter\e[0m for \e[1mPayment\e[0m ";
                        while (true)
                        {
                            enter = getch();
                            if (enter == 13)
                            {
                                system("cls");
                                pm.pay_detail();
                                t.display_ticket();
                                t.save_record_ticket();
                                cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back \e[1mMain Menu\e[0m ";
                                while (true)
                                {
                                    nav = getch();
                                    if (nav != 8)
                                    {
                                        continue;
                                    }
                                    else if (nav == 8)
                                    {
                                        goto MainMenu;
                                    }
                                }
                            }
                            else
                            {
                                continue;
                            }
                        }
                        break;
                    case 'n':
                        loading("\e[1mPlease Wait\e[0m");
                        goto menu;
                        break;

                    default:
                        break;
                    }
                default:
                    break;
                }

                while (true)
                {
                    if (flighttype != 8)
                    {
                        break;
                    }
                    else if (flighttype == 8)
                    {
                        goto menu;
                    }
                }
                break;
            case '2':
                t.schedule();
                cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mBooking Menu\e[0m ";
                while (true)
                {
                    nav = getch();
                    if (nav != 8)
                    {
                        continue;
                    }
                    else if (nav == 8)
                    {
                        goto menu;
                    }
                }
                break;
            default:
                break;
            }
            goto MainMenu;
            break;
            ////////////////////////////////////////////////////////////
        case '2':
            t.schedule();
            cout << endl;
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mMain Menu\e[0m \n";
            while (true)
            {
                navl = getch();
                if (navl != 8)
                {
                    continue;
                }
                else if (navl == 8)
                {
                    goto MainMenu;
                }
            }
            break;
        case '3':
            p.display_plane();
            goto MainMenu;
            break;
        case '4':
            pl.display_pilot();
            goto MainMenu;
            break;
        case '5':
            system("cls");
            t.read_record();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mMain Menu\e[0m \n";
            while (true)
            {
                navl = getch();
                if (navl != 8)
                {
                    continue;
                }
                else if (navl == 8)
                {
                    goto MainMenu;
                }
            }
            break;
        case '6':
            system("cls");
            t.delete_record();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mMain Menu\e[0m \n";
            while (true)
            {
                navl = getch();
                if (navl != 8)
                {
                    continue;
                }
                else if (navl == 8)
                {
                    goto MainMenu;
                }
            }
            break;

        case '7':
            system("cls");
            t.read_record_ticket();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mMain Menu\e[0m \n";
            while (true)
            {
                navl = getch();
                if (navl != 8)
                {
                    continue;
                }
                else if (navl == 8)
                {
                    goto MainMenu;
                }
            }
            break;
        case '8':
            feedback();
            cout << "\n\e[1mNOTE :\e[0m press \e[1mbackspace\e[0m go back to \e[1mMain Menu\e[0m \n";
            while (true)
            {
                navl = getch();
                if (navl != 8)
                {
                    continue;
                }
                else if (navl == 8)
                {
                    goto MainMenu;
                }
            }
            break;
        case '9':
            char ex;
            system("cls");
            cout << "  Are you you want to quit?\e[1m(y/n)\e[0m" << endl;
            ex = getch();
            switch (ex)
            {
            case 'n':
                goto MainMenu;
                break;
            case 'y':
                break;
            default:
                break;
            }
            system("cls");
            break;
        default:
            
                    goto MainMenu;

            break;
        }
    }
};

//////////////////////////////
void loading(string label)
{
    cout << label;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            Sleep(125);
            cout << ".";
        }
        Sleep(125);
        cout << "\b\b\b\b    \b\b\b\b";
    }
}
//////////////////////////////
void date()
{
    time_t t = time(0); // get time now
    tm *now = localtime(&t);
    cout << now->tm_mday << '-' << (now->tm_mon + 1) << '-' << (now->tm_year + 1900) << "\n";
}
/////////////////////////////
int randnum1(int min, int max) //range : [min, max]
{
    static bool first = true;
    if (first)
    {
        srand(time(NULL)); //seeding for the first time only!
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}
////////////////////////////
void randnum()
{
    srand((unsigned)time(0));
    int randomNumber;
    for (int index = 0; index < 1; index++)
    {
        randomNumber = (rand() % 100) + 1;
        cout << randomNumber << endl;
    }
}
///////////////////////////

void feedback()
{
    string feedback;
    system("cls");
    cout << "\t\t----------------------------\n";
    cout << "\e[1m\t\t\tFEED-BACK\e[0m\n";
    cout << "\t\t----------------------------\n"
         << endl;
    cout << "";
    cout << "Please give your valuable feedback for our \e[1mFlight Reservation System\e[0m\n"
         << endl;
    cin >> feedback;
    cout << "\n\e[1mTHANK YOU!\e[0m for your kind words.\n"
         << endl;
}
///////////////////////////////////////////////////

int main()
{
    Flight_Reservation_System f1;
    f1.main_menu();
    return 0;
}