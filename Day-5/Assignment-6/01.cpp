#include<iostream>
using namespace std;

class Artist{
    
    int rating;
    char country[20];
    protected:
    char name[20];
    public:
    void acceptArtist(){
        cout<<"Enter artist's name :";
        cin>>name;
        cout<<"Enter rating :";
        cin>>rating;
        cout<<"Enter country :";
        cin>>country; 
    }
    void printArtist(){
        cout<<"\n*****ARTIST DETAILS*****\nArtist name :"<<name<<", Rating :"<<rating<<", Country :"<<country<<"\n";
        if(isFamous())
            cout<<name<<" is a famous artist!\n";
        else cout<<name<<" is not a famous artist!\n";
        
    }
    bool isFamous(){
        if(this->rating>2)
            return true;
        else return false;
    }
};
class painter : public Artist{
    char type[20];
    long rate;
    int num_of_painting;
    public:
    void acceptPainter(){
        cout<<"Enter painting type :";
        cin>>type;
        cout<<"Enter rate per painting :";
        cin>>rate;
        cout<<"Enter "<<name<<"'s total number of paiting :";
        cin>>num_of_painting;
    }
    void printPainter(){
        cout<<"Painting type             : "<<type;
        cout<<"\nPrice of each painting    : "<<rate;
        cout<<"\nTotal number of paintings : "<<num_of_painting;
        cout<<"\nOverall income            : "<<calcTotalInc()<<"\n";
    }
    float calcTotalInc(){
        return num_of_painting*rate;
    }
};
class singer : public Artist{
    int num_of_album;
    int rate;
    public:
    void acceptSinger(){
        cout<<"Enter number of albums :";
        cin>>num_of_album;
        cout<<"Enter "<<name<<"'s rate per song :";
        cin>>rate; 
    }
    float calcTotalInc(){
        return num_of_album*rate;
    }
    void printSinger(){
        cout<<"Total number of album :"<<num_of_album<<"\n";
        cout<<name<<" charges "<<rate<<"Rs. per  album.\n";
        cout<<name<<"'s total income :"<<calcTotalInc()<<"Rs.\n";
    }
};
int main(){
//    Artist a1;
//    a1.acceptArtist();
//    a1.printArtist();
    painter p1;
    p1.acceptArtist();
    p1.acceptPainter();
    p1.printArtist();
    p1.printPainter();
    cout<<"\n";
    singer s1;
    s1.acceptArtist();
    s1.acceptSinger();
    s1.printArtist();
    s1.printSinger();
}