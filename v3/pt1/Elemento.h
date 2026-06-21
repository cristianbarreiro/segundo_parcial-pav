#ifndef ELEMENTO_H
#define ELEMENTO_H

class Elemento {
 protected:
  int id;

 public:
  Elemento();
  Elemento(int id);

  virtual ~Elemento();

  int getId();
};

#endif