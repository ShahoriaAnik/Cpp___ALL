
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class YouTubeChannel{
    private:

    protected:
    
    
     
        int ChannelID;
        string ChannelName;
        string OwnerName;
        int SubscriberCounts;
        int numberOfVideos;
        list<string> VideoList;
      public:
        //YouTubeChannel(int id, string nam, string onam, int subcnt){
        YouTubeChannel(){  
           cout<<"Enter Channel Id :"<<endl;
            cin>>ChannelID;

            cout<<"Enter Channel Name :\n";
            cin>>ChannelName;

            cout<<"Enter OwnerName :\n";
            cin>>OwnerName;

            cout<<"Enter Subscribers :\n";
            cin>>SubscriberCounts;
            
            cout<<"Enter How many video you want to uploade :\n";
            
            cin>>numberOfVideos;
            cout<<"enter video titles :\n";
            for(int i=0;i<numberOfVideos;i++){
                string s;
                char c;
                cin>>c;
                getline(cin,s);
                s=c+s;
                VideoList.push_back(s);
            }
            cout<<endl;

        }

        bool operator==(const YouTubeChannel&channel) const{
            return ChannelID == channel.ChannelID;
        }
       
        friend ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel);

};




ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel){
       COUT<<"ID: "<<ytChannel.ChannelID<<endl;
       COUT<<"Name: "<<ytChannel.ChannelName<<endl;
       COUT<<"OwnerName: "<<ytChannel.OwnerName<<endl;
       COUT<<"Subscribers: "<<ytChannel.SubscriberCounts<<endl;
       
      COUT<<"Videos: "<<ytChannel.numberOfVideos<<endl;
      COUT<<"Video Titles: \n";
      for(auto u:ytChannel.VideoList) COUT<<u<<endl;
     
       return COUT;
}

class SubscriptionList{
    private:

    protected:

    public:
        
    
        list<YouTubeChannel> ChannelList;

        
        void operator +=(YouTubeChannel& channel){
            
            ChannelList.push_back(channel);
            
        }
        void operator -=(YouTubeChannel& channel){
            ChannelList.remove(channel);
        }


      friend ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel);
       
};

ostream& operator << (ostream& COUT, SubscriptionList& cnllist){
    for(YouTubeChannel ytChannel : cnllist.ChannelList)
    COUT<<ytChannel<<endl;
    return COUT;
}



int main(){
    YouTubeChannel yt1;
    YouTubeChannel yt2;
    YouTubeChannel yt3;
    SubscriptionList cnllist;
   
    cnllist+=yt1;
    cnllist+=yt2;
    cnllist+=yt3;
    cout<<"All channel list:\n";
    cout<<cnllist;
    cout<<endl;
    
    cnllist-=yt1;
    cout<<"After remove, channel list:\n";
    cout<<cnllist;
    

    return 0;
}
