struct ofp_vendor {
    struct ofp_header header;
    uint32_t experimenter;
    uint32_t exp_type;
    uint8_t data[0];
};
