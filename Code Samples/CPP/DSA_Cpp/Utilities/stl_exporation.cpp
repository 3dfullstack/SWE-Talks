#include<bits/stdc++.h>
using namespace std;
// Creating a template print_container funciton.
template<typename T>
void print_container(T x){
    for(auto elem: x){
        cout << elem << " " ;
    }
    cout << endl;
}
// template specialization for maps.
template<>
void print_container(std::map<std::string,int> x){
    cout << "{ ";
    for(auto elem:x){
        cout << elem.first << ':' << elem.second << ' ' ;
    }
    cout << " }"  << endl;
}
void std_multimap(){
    // Todo:
}
void std_map(){
    cout << "Initiate " << endl;
    std::map<std::string,int> m;

    cout << "Add / Insert  " << endl;
    m["apple"] = 1;
    std::pair<std::string,int> p;
    p={"apple",2};
    // map.insert skips if pair exists .
    m.insert(p);
    p={"mango",3};
    m.insert(p);
    print_container(m);

    cout << "Check Size " << endl;
    cout << m.size() << endl;
    cout << "Access front/ back / middle element  " << endl;
    cout << m["mango"] << endl;
    cout << m.begin()->second << endl;

    cout << "Getting Index /iterator, Adding iterator  " << endl;
    cout << "cout << *(st.end()-1) << endl;Error:set iterator cannot be added ." << endl;
    
    cout << "Algorithms : searching, sorting, max/min, Sum,Erase, Mics" << endl;
        cout << "   Find" << endl; 
        // The iterator access , dont use *m.find(key) 
        cout << m.find("mango")->first << ": "<< m.find("mango")->second << endl;
        cout << "   Reverse " << endl;
        cout << "Map, so no reverse/sorting" << endl; 
        cout << "   Sort " << endl;
        cout << "Map, so no reverse/sorting" << endl; 
        cout << "   Max_element" << endl;  
        cout << std::max_element(m.begin(), m.end())->first << endl;
        cout << "   Accumulation" << endl;
        // Does not work. 
        cout << "Standard way to accumulate does not work. Ref.stack overflow for workaround." ;
        // cout << std::accumulate(m.begin(), m.end(), 0) << endl;
        cout << "   Count" << endl;
        cout << "Count not needed for map." ;
        // cout << std::count(m.begin(), m.end(),"apple");   

    cout << "Removing/ deleting / poping elememnts.  " << endl;
    m.erase(m.find("apple"));
    print_container(m);

    cout << "Checking if empty" << endl;
    cout << m.empty() << endl;

}
void std_set(){
    cout << "Initiate " << endl;
    // sorted descending order set. default: ascending. 
    std::set<int,std::greater<int>> st{};
   
    
    cout << "Add / Insert  " << endl;
    st.insert(1);
    auto b_itr = st.begin();
    auto n_itr = b_itr;
    st.insert(n_itr,3);
    st.insert(n_itr,2);
    st.insert(n_itr,3);
    print_container<std::set<int,std::greater<int>>>(st);

    cout << "Check Size " << endl;
    cout << st.size() << endl;

    cout << "Access front/ back / middle element  " << endl;
    cout << *(st.find(5)) << endl;

    cout << "Getting Index /iterator, Adding iterator  " << endl;
    // Doubt: Is there a way to run this even though it is error.
    // eg. if this line is false, then throw ... & catch ..
    // try {
    //     cout << *(st.end()-1) << endl;
    // }
    // catch(...){
    //     cout << "cout << *(st.end()-1)->Error:set iterator cannot be added ." << endl;
    // }
     cout << "cout << *(st.end()-1) << endl;Error:set iterator cannot be added ." << endl;

    cout << "Algorithms : searching, sorting, max/min, Sum,Erase, Mics" << endl;
        cout << "   find" << endl;  
        cout << *(st.find(2)) << endl;
        cout << "   Reverse " << endl; 
            // DOUBT : IS THERE A WAY TO REVERSE LIKE OTHER CONAINTERS? 
            // std::reverse(st.begin(),st.end());
            // WORKAROUND: 



        cout << "   Sort " << endl;
        cout << "   Max_element" << endl; 
        cout << *(std::max_element(st.begin(),st.end())) << endl;
        cout << "   Accumulation" << endl; 
        cout << std::accumulate(st.begin(),st.end(), 0) << endl; 
        cout << "   Count" << endl;  
        cout << std::count(st.begin(),st.end(),3) << endl;
    cout << "Removing/ deleting / poping elememnts.  " << endl;
        st.erase(st.find(3));
        print_container(st);
    cout << "Checking if empty" << endl;
        cout << st.empty() << endl;

}
void std_deque(){
    // Initiate 
    std::deque<int> dq;
    // Add / Insert
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(1); 
    print_container<std::deque<int>>(dq);
    // Check Size
    cout << dq.size() << endl; // length of elem.
    // Access front/ back / middle element 
    auto front_ = dq.front();
    cout << front_ << endl;
    auto back_ = dq.back();
    cout << back_ << endl;

    // Getting Index /iterator. 
    auto itr = dq.begin();
    cout << *(dq.end()-1) << endl; // end is alway one step ahead.

    // Algorithms : searching, sorting, max/min
    cout << "Algorithms : searching, sorting, max/min" << endl;
    // searching.
    cout << "find" << endl;
    cout << distance(dq.begin(),(std::find(dq.begin(),dq.end(),3))) << endl;
    // reverse. 
    cout << "reversing deque" << endl;
    std::reverse(dq.begin(),dq.end()); // In place reverse.
    print_container(dq);
    // sorting 
    cout << "sorting " << endl;
    std::sort(dq.begin(),dq.end());
    print_container(dq);
    // Max element, min elemets 
    cout << "Max elements" << endl;
    // max_element -> iterator
    cout << *(max_element(dq.begin(),dq.end())) << endl;

    cout << "Summation" << endl;
    cout << std::accumulate(dq.begin(),dq.end(),0) << endl;

    cout << "count" << endl;
    cout << std::count(dq.begin(),dq.end(),3) << endl;

    // Removing/ deleting / poping elememnts. 
    cout << "Removing/ deleting / poping elememnts.  " << endl;
    dq.pop_front();
    print_container(dq); // 2 3
    dq.pop_back();
    print_container(dq); // 2
    dq.erase(dq.begin()); // Takes in iterator.

    // Checkign if empty 
    cout << "Checking ifempty()   " << endl;
    cout << dq.empty() << endl;
}
void std_queue(){
    std::queue<int> q;
    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.size() << endl; // returns the no. of elements.
    
    int front = q.front(); // returns front element
    cout << front << endl;
    int back = q.back(); // returns back elem.
    cout << back << endl;

    q.pop(); // returns void.   
    
    cout << q.empty() << endl; // returns true / false.    

}
int main(){
    // std_queue();
    // std_deque();
    // std_set();
    std_map();
    return 0;
}