//
// Created by Laxmi Kadariya on 2/13/18.
//

#ifndef GTS_CHALLENGE_LAX_UTILS_H
#define GTS_CHALLENGE_LAX_UTILS_H
#include <string>
#include "packet.h"

class parser{

private:
   std::string data;
    int offset;
public:
    void add_data(std::string &new_data);
    int get_offset();
    std::string get_data();
    void parse_header(packet &pkt);
    void parse_quoteortrade(packet &quote);


};

void parser:: add_data(std::string &new_data)
{
   data = data.substr(offset);
    data = data.append(new_data);
    offset = 0;
}

int parser::get_offset() {
    return offset;
}

std::string parser::get_data() {
    return data;
}


void parser::parse_header(packet &pkt) {

    std::vector<unsigned char>vchunk(data.begin()+offset,data.end());
    uint16_t  data = vchunk[0]<<8 | vchunk[1];
    pkt.packet_length =data;

    uint16_t  num = vchunk[2]<<8|vchunk[3];
    pkt.num_pkts = num;
    offset = offset+4;





}

void parser::parse_quoteortrade(packet &quote) {

//    std::cout<<offset;
    std::vector<unsigned char>vchunk(data.begin()+offset,data.end());
    uint16_t  length = vchunk[0]<<8 | vchunk[1];



    char stat = vchunk[2];
    offset = offset +3;
    if(stat == 'Q')
    {
         offset = offset+(length -4);
    }

    if(stat == 'T')
    {
        std::vector<unsigned char>vchunk(data.begin()+offset,data.end());
        std::string s(vchunk.begin(),vchunk.begin()+5);
        std::cout<<s;
        uint16_t  val = vchunk[5]<<8 | vchunk[6];
        std::cout<<val;
        uint16_t  new_val = vchunk[11]<<24 |vchunk[12]<<16 | vchunk[13]<<8 | vchunk[14];
        std::cout<<new_val;


    }






}






#endif //GTS_CHALLENGE_LAX_UTILS_H
