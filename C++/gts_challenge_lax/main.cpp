#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include "utils.h"
#include "packet.h"
#include <bitset>
using namespace std;
bool generate_chunks(ifstream &fp,int chunk_size,string &buffer)
{
    vector<char>data(chunk_size);
    fp.read(&data[0],chunk_size);
    std::streamsize datasize = fp.gcount();
    if(datasize == 0)
    {
        cout<<"here";
        return false;
    }
    buffer =string(data.begin(),data.end());
    return true;

}
int main() {
    std::cout << "Hello, World!" << std::endl;
    ifstream myfile;
    bool test;
    string data;

    myfile.open("../test.dat",ifstream::binary);

   if(myfile.is_open()) {
       parser obj;

    while(true) {
        packet pkt;
        packet quote;

        if (generate_chunks(myfile, 100, data)) {
            obj.add_data(data);


            while(true) {

                obj.parse_header(pkt);

                for (int i=0;i<1;i++)
                {
                    obj.parse_quoteortrade(quote);





                }
                break;
            }

            string ret_data = obj.get_data();




            break;



        }
    }


   }


    myfile.close();

    return 0;
}