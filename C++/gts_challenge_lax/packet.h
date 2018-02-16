//
// Created by Laxmi Kadariya on 2/13/18.
//

#ifndef GTS_CHALLENGE_LAX_PACKET_H
#define GTS_CHALLENGE_LAX_PACKET_H


struct packet{
    unsigned short packet_length;
    unsigned short num_pkts;
};

struct Quote {
    uint16_t price_level;
    uint16_t price_level_size;
    uint64_t price_level_price;
    std::string dynamic_data;
};

struct Trade {
    uint16_t trade_size;
    uint64_t trade_price;


};




#endif //GTS_CHALLENGE_LAX_PACKET_H
