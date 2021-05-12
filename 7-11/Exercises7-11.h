#ifndef C_PROGRAMMING_ELECTIVE_EXERCISES7_11_H
#define C_PROGRAMMING_ELECTIVE_EXERCISES7_11_H

#define MAXMSG 2

struct Message            // buffer for command
{
    unsigned char data[7];  // number of possible
    unsigned char len;      // number of positions in use
};

struct Locomotive
{
    int id;             // 0 - 200
    char name[20];
    int speed;          // -100 - 100
    char direction[2];  // compass direction fx. ne, nn, nw ect. (correct is: 0x40 back - 0x60 forward)
    int light;
};

void Exercise7(struct Message message[MAXMSG]);
void exercise8(struct Message message[MAXMSG], int locoAddr, int data1);
void exercise9(struct Locomotive *train, char newDirection[2]);
int exercise9a(struct Locomotive a, struct Locomotive b);
void exercise10(int lightsOffTimes, struct Locomotive trains[]);

#endif //C_PROGRAMMING_ELECTIVE_EXERCISES7_11_H
