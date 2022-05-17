#include <iostream>
#include <string>
#include <vector>
namespace ariel
{
    struct Node
    {
        std::string val;
        Node *sub;
        Node *next;
    };
    class OrgChart
    {
        public:
            Node head;
            OrgChart();
            ~OrgChart();
            // string &get_val(Node* n){return n->val;};
            OrgChart &add_root(std::string val);
            OrgChart &add_sub(std::string above, std::string value);
            std::vector<std::string>::iterator begin_level_order();
            std::vector<std::string>::iterator end_level_order();
            std::vector<std::string>::iterator begin_reverse_order();
            std::vector<std::string>::iterator reverse_order();
            std::vector<std::string>::iterator begin_preorder();
            std::vector<std::string>::iterator end_preorder();
            std::vector<std::string>::iterator begin();
            std::vector<std::string>::iterator end();
                    
            friend std::ostream & operator << (std::ostream &out, const OrgChart &organization);

    };
}
// namespace ariel
