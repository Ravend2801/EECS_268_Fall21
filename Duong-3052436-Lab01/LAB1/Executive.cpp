#include "Executive.h"

Executive::Executive(string fileName)
{
    infile.open(fileName);
    if(infile.is_open())
    {
        string name;
        double GibbonsRating;
        double PeopleRating;
        int YearPublished; 
        int MinPlayers;
        double MinPlayTime; 
        infile >> m_size; 
        m_array = new Game[m_size]; 
        Game temp; 
        int count =0;
    while(infile >> name >> GibbonsRating >> PeopleRating >> YearPublished >> MinPlayers >> MinPlayTime)
    {
        temp.setName(name);
        temp.setGibbonsRating(GibbonsRating);
        temp.setPublicRating(PeopleRating);
        temp.setYearPublish(YearPublished);
        temp.setMinPlayer(MinPlayers);
        temp.setPlayTime(MinPlayTime);
        m_array[count] = temp;
        count++;
    }

    }
    else
    {
        cout << "Could not open file" << endl;
    }
}

Executive::~Executive()
{
    delete [] m_array;
}

void Executive::PrintAllGames()
{
    for(int i =0; i<m_size;i++)
    {
        cout << m_array[i].getName() << " ";
        cout << "(" <<m_array[i].getYearPublish() << ")" << "[" << "GR= " << m_array[i].getGibbonsRating() <<  ", PR= " << m_array[i].getPublicRating() << ", MP= " << m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
        cout << endl;
    }
    cout << endl;
}

void Executive:: PrintGamesFromYear()
{
    cout<<"Enter the year you want the games from: ";
    int year=0;
    cin>>year;
    int total=0;
    for(int i=0; i<m_size ;i++)
    {
        if(year == m_array[i].getYearPublish())
        {
            cout << m_array[i].getName() << " ";
            cout << "(" <<m_array[i].getYearPublish() << ")" << " [" << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" << m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
            cout << endl;
            total++;
        }
    }
    if(total==0)
    {
        cout<<"No Games found";
        cout<<endl;
    }
}

void Executive:: PrintRankingRange()
{
    double LowerRange=0.0;
    double HigherRange=0.0;
    int total=0;
    cout<<"Enter the lower range and higher range respectively: ";
    cin>>LowerRange>>HigherRange;
    for(int i=0;i<m_size;i++)
    {
        if(m_array[i].getGibbonsRating()>LowerRange && m_array[i].getGibbonsRating()<HigherRange)
        {
            cout << m_array[i].getName() << " ";
            cout << "(" <<m_array[i].getYearPublish() << ")" << " [" << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" << m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
            cout << endl;cout<<endl;
            total++;
        }
        if(total==0)
        {
            cout<<"Sorry the rating are more than what you have inputed!"<<" or "<<"Sorry the rating are less than what you have inputed!";
        }
        cout<<endl;
    }
}

void Executive::ThePeopleVSGibbons()
{
    double difference=0.0;
    cout<< "Emter a the seperation range between Gibbon's rating and the public rating: ";
    cin>>difference;
    for(int i=0;i <m_size;i++)
    {
        if(abs(m_array[i].getGibbonsRating()-m_array[i].getPublicRating()) <= difference)
        {
            cout << m_array[i].getName() << " ";
            cout << "(" <<m_array[i].getYearPublish() << ")" << " [" << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" << m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
            cout << endl;
        }
        else
        {
            cout<<"There is no difference as: " << difference;
        }
        cout<<endl;
    }
}


void Executive::FindGame()
{
    int PlayNum=0;
    double TimeSpent=0.0;
    cout<<"How many player are playing today: ";
    cin >> PlayNum;
    cout<<"how long are you planning to play: ";
    cin>> TimeSpent;
    int total=0;
    for(int i=0;i<m_size;i++)
        {
            if(m_array[i].getMinPlayert()>= PlayNum && m_array[i].getPlayTime()>=TimeSpent)
            {
                cout << m_array[i].getName() << " ";
                cout << "(" <<m_array[i].getYearPublish() << ")" << " [" << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" << m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
                cout << endl;
                total++;
            }

        }
    if(total==0)
    {
        cout<<"I can't find any game of that sort for you!!";
    }

    cout<<endl;
}

void Executive::run()
{
    while(1)
    {
        int choice;
        cout << "1) Print all games" << endl;
        cout << "2) Print all games from year" << endl;
        cout << "3) Print a ranking range" << endl;
        cout << "4) The People VS Dr. Gibbons" << endl;
        cout << "5) Find a game to play" << endl;
        cout << "6) Exit" << endl;
        cin >> choice;
        if(choice ==1)
        {
            PrintAllGames();
        }
        if(choice ==2)
        {
            PrintGamesFromYear();
        }
        if(choice ==3)
        {
            PrintRankingRange();
        }
        if(choice ==4)
        {
            ThePeopleVSGibbons();
        }
        if(choice ==5)
        {
            FindGame();
        }
        if(choice ==6)
        {
            break;
        }
    }
}


