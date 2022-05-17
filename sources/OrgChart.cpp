#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include "OrgChart.hpp"

namespace ariel
{

    OrgChart::OrgChart(){}

    OrgChart::~OrgChart(){
            // std::cout<< "kenana";
    }
   //also runs over the existing root
    OrgChart &OrgChart::add_root(std::string value){
        this->head.val = value;
        return *this;
    }

    OrgChart &OrgChart::add_sub(std::string above, std::string value){
        std::cout << "wow";
        return *this;
    }

    std::vector<std::string>::iterator OrgChart::begin_level_order(){
        std::vector<std::string>::iterator it;
        return it;
    }
    std::vector<std::string>::iterator OrgChart::end_level_order(){
        std::vector<std::string>::iterator it;
        return it;
    }
    std::vector<std::string>::iterator OrgChart::begin_reverse_order(){
        std::vector<std::string>::iterator it;
        return it;
    }
    std::vector<std::string>::iterator OrgChart::reverse_order(){
        std::vector<std::string>::iterator it;
        return it;
    }

    std::vector<std::string>::iterator OrgChart::begin_preorder(){
        std::vector<std::string>::iterator it;
        return it;
    }
    std::vector<std::string>::iterator OrgChart::end_preorder(){
        std::vector<std::string>::iterator it;
        return it;
    }
    std::vector<std::string>::iterator OrgChart::begin(){
        std::vector<std::string>::iterator it;
        return it;
    }
    std::vector<std::string>::iterator OrgChart::end(){
        std::vector<std::string>::iterator it;
        return it;
    }
            
    
    



        // Node *subs = &(this->head);
        // if (subs->val.compare(above) == 0){
        //     while (subs->next != nullptr){
        //         subs = subs->next;
        //     }
        //     Node newNode;
        //     newNode.val = value;
        //     newNode.next = nullptr;
        //     newNode.sub = nullptr;
        //     subs->sub = &newNode;
        //     std::cout <<newNode.val << std::endl;
        //     return *this;
        // }else{
        //     while (1){
        //         Node *find = subs;
        //         while (find->next != nullptr){find = find->next;}
        //         if(find->val.compare(above) == 0){
        //             Node newNode;
        //             newNode.val = value;
        //             newNode.next = nullptr;
        //             newNode.sub = nullptr;
        //             subs->sub = &newNode;
        //             std::cout <<newNode.val << std::endl;
        //             return *this;
        //         }
        //         if (subs->sub != nullptr){subs = subs->sub;}
        //         else{return *this;}
        //     }
            
        // }

          

    // OrgChart &OrgChart::add_sub(std::string above, std::string value){
    //     Node subs = this->head;
    //     if (this->head.val.compare(above) == 0){
    //         while(subs.next != NULL){
    //             subs = *(subs.next);
    //         }
    //         Node newNode;
    //         newNode.val = value;
    //         newNode.next = nullptr;
    //         newNode.sub = nullptr;
    //         subs.sub = &newNode;
    //         std::cout <<newNode.val << std::endl;
    //         return *this;
    //     }        
    //     if (subs.next != NULL){
    //         std::cout<< "hello";
    //     }else{
    //         Node* n = this->head.sub;
    //         std::cout<< n->val;
    //     }
    //     return *this;
    // }
}
            
        //     // std::cout<< n.val << std::endl;
        // }
        // return *this;
        // while(subs->sub != NULL){
        //     Node* keep = subs->sub;
        //     Node find = *(subs->sub);

            // while (find.next != NULL && above.compare(find.val) != 0){find = *(find.next);}
            // if(find.next != NULL){
            //     std::cout<<"here";
            // }else{
            //     std::cout<<"fuck";
            // }
            // if(!find->val.empty() && find->val.compare(above) == 0){
            //     Node newNode;
            //     newNode.val = value;
            //     newNode.next = nullptr;
            //     newNode.sub = nullptr;
            //     find->sub = &newNode;
            //     return *this;
            // }
            // subs = keep;
        
        // return *this;
    

// namespace ariel
