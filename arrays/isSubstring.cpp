//check if a is subtring of b or not

bool isSubstr(string a, string b){
        bool is =0;
        if(b.find(a) != std::string::npos){
            is =1;
        }
        return is;
}