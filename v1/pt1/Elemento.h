#ifndef ELEMENTO_H
#define ELEMENTO_H

class Elemento{
private:
    int elemId;

public:
    Elemento();
    Elemento(int elemId);
    ~Elemento();

    int getElemId();
};

#endif