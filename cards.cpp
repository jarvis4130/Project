#include<bits./stdc++.h>
using namespace std;
int main(){

    deque<pair<int,char>>st;
    deque<pair<int,char>>ans;
    cout<<"Enter * - Spade"<<endl;
    cout<<"Enter ^ - Diamond"<<endl;   
    cout<<"Enter & - Heart"<<endl;   
    cout<<"Enter $ - Club"<<endl;
    cout<<"Please enter the value of card and symbol."<<endl;

    cout<<"Enter the 52 cards in order:"<<endl;
    for(int i=0;i<52;i++){
        int temp; char tempo;
        cin>>temp;
        cin>>tempo;
        st.push_back({temp,tempo});
    }

    int n;
    cout<<"Enter any number ranging between 10 to 39."<<endl;
    cin>>n;
    deque<pair<int,char>>tempp;

    for(int i=0;i<n;i++){
        if(i==n-11){
            int Temp=st[i].first;
            char Tempo=st[i].second;
            ans.push_back({Temp,Tempo});
        }
        int temp=st[i].first;cout<<st[i].first;
        char tempo=st[i].second;cout<<st[i].second;
        tempp.push_back({temp,tempo});
    }
    for(int i=0;i<n;i++){
        st.pop_back();
    }
    cout<<ans[0].first<<" "<<ans[0].second<<endl;
    cout<<"Keep the "<<n<<" cards aside."<<endl;
    cout<<"Pick 3 cards from the remaning stack."<<endl;

    int v1=st[0].first;
    st.pop_front();
    // cout<<st[0].first<<" "<<st[0].second<<endl;
    int v2=st[0].first;
    st.pop_front();
    // cout<<st[0].first<<" "<<st[0].second<<endl;
    int v3=st[0].first;
    st.pop_front();
    // cout<<st[0].first<<" "<<st[0].second<<endl;

    int j=12;int count_pop=0;
    while(v1<j)
    {
        count_pop++;
        v1++;
    }cout<<count_pop<<endl;
    while(v2!=j){
        count_pop++;
        v2++;
    }cout<<count_pop<<endl;
    while(v3!=j){
        count_pop++;
        v3++;
    }cout<<count_pop<<endl;

    while(count_pop!=0){
        st.pop_front();
        count_pop--;
    }

    cout<<"Put the "<<n<<" no of cards kept aside and put it on top of remaining cards."<<endl;
    int out=n-10;
    cout<<"The "<<out<<" card from the top would be "<<ans[0].first<<" "<<ans[0].second<<endl;
    cout<<"Lets check it."<<endl;
    cout<<tempp[out-1].first<<" "<<tempp[out-1].second<<endl;

    return 0;
}