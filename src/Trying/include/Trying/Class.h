


class JustTry {
 public:
  JustTry(int inter, double dinter) :
    inter_(inter), dinter_(dinter) {  }
  ~JustTry() {  }
  int IntAdd(int x, int y);
  bool Compa(int x, int y);
  void Output(double x);
 
 private:
  int inter_;
  double dinter_;
};
