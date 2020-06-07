class Vector {
  public:
    Vector(int s);
    Vector(std::initializer_list<double>);
    ~Vector();
    double& operator[](int i);
    int size() const;
  private:
    double * elem;
    int sz;
};