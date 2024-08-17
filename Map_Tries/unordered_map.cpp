#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{//creation 
  
  unordered_map<string,int>mapping;

  //insertion
    
    //way--1
    pair<string,int>p=make_pair("Prashant",24);

    //way--2
    pair<string ,int>q("Anuj",18);

    // way---3
    pair<string,int>r;
    r.first="Ayush";
    r.second=11;
    

    //way--4
    mapping["Pratiksha"]=24;

    mapping.insert(p);
    mapping.insert(q);
    mapping.insert(r);

    cout<<"size of map : "<<mapping.size()<<endl; 


    //Access
    //  cout<<mapping.at("Ayush")<<endl;

     //searching 

     cout<<mapping.count("Pratiksha")<<endl;

     if(mapping.find("Prashant")!=mapping.end()){
        cout<<"found"<<endl;

     }else{
        cout<<"not found";
     }
  

    //  cout<<"printing"<<endl;
    //  for(int i=1 ; i<=5; i++){
    //     cout<<i;
    //  }
      //  }
      cout<<mapping["Pratiksha"]<<endl;
          cout<<mapping["Anuj"]<<endl;
  cout<<mapping["pp"]<<endl;
  cout<<mapping["pa"]<<endl;
   cout<<"size of map : "<<mapping.size()<<endl;
   mapping["pp"]++;
   cout<<mapping["pp"]<<endl;
 mapping["pa"]++;
   cout<<mapping["pa"]<<endl;
    mapping["pp"]++;
   cout<<mapping["pp"]<<endl;
    mapping["pa"]++;
   cout<<mapping["pa"]<<endl;
return 0;

}